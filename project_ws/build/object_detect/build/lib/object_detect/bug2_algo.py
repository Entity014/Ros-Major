import rclpy
from rclpy.node import Node
import numpy as np
import matplotlib.pyplot as plt
from rclpy import qos
from math import isfinite
from matplotlib.patches import Polygon
from sensor_msgs.msg import LaserScan
from nav_msgs.msg import Odometry
from geometry_msgs.msg import Point, Twist
import threading
import math
import transforms3d

OBSTACLE_DISTANCE = 0.4
OBSTACLE_RANGE = 0.3


class Bug2Algorithm(Node):
    def __init__(self):
        super().__init__("bug2_node")
        self.scan_sub = self.create_subscription(
            LaserScan,
            "/scan",
            self.laser_callback,
            qos_profile=qos.qos_profile_sensor_data,
        )
        self.odom_sub = self.create_subscription(
            Odometry,
            "/odom",
            self.odom_callback,
            qos_profile=qos.qos_profile_sensor_data,
        )
        self.goal_sub = self.create_subscription(
            Point,
            "/goal",
            self.goal_callback,
            10,
        )
        self.cmd_pub = self.create_publisher(
            Twist,
            "/cmd_vel",
            10,
        )
        self.timer = self.create_timer(0.1, self.timer_callback)

        self.state = "WAIT"
        self.robot_state = "ROTATE"
        self.obstacle_detected = False
        self.hit_point = None

        self.goal = Point()
        self.goal.x = -2.0
        self.goal.y = -0.5

        self.laser_ranges = []
        self.angle_min = 0.0
        self.angle_max = 0.0
        self.angle_increment = 0.0
        self.robot_position = Point()
        self.robot_initial_position = Point()
        self.robot_yaw = 0.0
        self.path = []

        self.thread = threading.Thread(target=self.plot_loop)
        self.thread.daemon = True
        self.thread.start()

    def goal_callback(self, msg):
        self.goal = msg
        if self.state == "WAIT":
            self.state = "GO_TO_POSE"

    def laser_callback(self, msg):
        self.laser_ranges = np.array(msg.ranges)
        self.angle_min = msg.angle_min
        self.angle_max = msg.angle_max
        self.angle_increment = msg.angle_increment

        self.obstacle_detected = (
            True if self.laser_ranges[0] < OBSTACLE_RANGE else False
        )

    def odom_callback(self, msg):
        self.robot_position = msg.pose.pose.position
        if self.robot_initial_position is None:
            self.robot_initial_position = self.robot_position

        quaternion = np.array(
            [
                msg.pose.pose.orientation.w,
                msg.pose.pose.orientation.x,
                msg.pose.pose.orientation.y,
                msg.pose.pose.orientation.z,
            ]
        )
        euler_angles = transforms3d.euler.quat2euler(quaternion)
        self.robot_yaw = euler_angles[2]

        if len(self.path) == 0 or (
            self.path[-1] != (self.robot_position.x, self.robot_position.y)
        ):
            self.path.append((self.robot_position.x, self.robot_position.y))

    def timer_callback(self):
        if self.state == "GO_TO_POSE":
            if self.obstacle_detected and self.robot_state != "ROTATE":
                self.hit_point = (self.robot_position.x, self.robot_position.y)
                self.state = "FOLLOW_WALL"
            self.go_to_pose()
        elif self.state == "FOLLOW_WALL":
            if self.on_m_line() and not self.near_hit_point():
                self.robot_state = "ROTATE"
                self.state = "GO_TO_POSE"
            self.follow_wall()
        else:
            self.stop()
            self.state = "WAIT"

    def go_to_pose(self):
        dx, dy = (
            self.goal.x - self.robot_position.x,
            self.goal.y - self.robot_position.y,
        )
        angle_to_goal = np.degrees(math.atan2(dy, dx))
        delta_angle = angle_to_goal - np.degrees(self.robot_yaw)
        distance_to_goal = math.sqrt(dx**2 + dy**2)

        twist = Twist()
        twist.angular.z = np.interp(delta_angle, [-180, 180], [-2.2, 2.2])
        if self.robot_state == "ROTATE":
            if abs(delta_angle) <= 10:
                twist.linear.x = 0.0
                self.robot_state = "MOVE"
        elif self.robot_state == "MOVE":
            twist.linear.x = np.interp(distance_to_goal, [-3, 3], [0.05, 0.18])
        if distance_to_goal < 0.1:
            twist.linear.x = 0.0
            twist.angular.z = 0.0
            self.state = "REACHED_GOAL"
        self.cmd_pub.publish(twist)

    def follow_wall(self):
        twist = Twist()

        front = self.laser_ranges[0]
        left = self.laser_ranges[45]
        right = self.laser_ranges[360 - 45]

        if front < OBSTACLE_DISTANCE:
            twist.linear.x = 0.0
            twist.angular.z = -0.8
        else:
            twist.linear.x = 0.1

            if left < OBSTACLE_DISTANCE * 0.9:
                twist.angular.z = -0.3
            elif left > OBSTACLE_DISTANCE * 1.1:
                twist.angular.z = 0.3
            else:
                twist.angular.z = 0.0

        self.cmd_pub.publish(twist)

    def stop(self):
        self.robot_initial_position.x = self.robot_position.x
        self.robot_initial_position.y = self.robot_position.y
        self.robot_state = "ROTATE"
        twist = Twist()
        self.cmd_pub.publish(twist)

    def on_m_line(self):
        if self.robot_initial_position is None:
            return False

        x_start, y_start = self.robot_initial_position.x, self.robot_initial_position.y
        x_goal, y_goal = self.goal.x, self.goal.y

        a = y_goal - y_start
        b = x_start - x_goal
        c = x_goal * y_start - y_goal * x_start

        distance = abs(
            a * self.robot_position.x + b * self.robot_position.y + c
        ) / math.sqrt(a**2 + b**2)

        return distance <= 0.05

    def near_hit_point(self):
        if self.hit_point is None:
            return False
        x, y = self.robot_position.x, self.robot_position.y
        x_hit, y_hit = self.hit_point
        distance = math.sqrt((x - x_hit) ** 2 + (y - y_hit) ** 2)
        return distance <= 0.3

    def plot_loop(self):
        plt.ion()
        fig, ax = plt.subplots(figsize=(6, 6))

        while rclpy.ok():
            ax.clear()
            ax.set_xlim(-3, 3)
            ax.set_ylim(-3, 3)
            ax.set_title("Robot Path & Laser Scan")
            ax.set_xlabel("X (meters)")
            ax.set_ylabel("Y (meters)")

            if len(self.path) > 1:
                path_x, path_y = zip(*self.path)
                ax.plot(path_x, path_y, "b-", linewidth=2, label="Path")

            robot_size = 0.2
            triangle_points = np.array(
                [
                    [robot_size, 0],
                    [-robot_size / 2, -robot_size / 2],
                    [-robot_size / 2, robot_size / 2],
                ]
            )

            cos_yaw, sin_yaw = np.cos(self.robot_yaw), np.sin(self.robot_yaw)
            rotation_matrix = np.array([[cos_yaw, -sin_yaw], [sin_yaw, cos_yaw]])
            rotated_triangle = triangle_points @ rotation_matrix.T

            rotated_triangle[:, 0] += self.robot_position.x
            rotated_triangle[:, 1] += self.robot_position.y

            robot_patch = Polygon(rotated_triangle, closed=True, color="blue")
            ax.add_patch(robot_patch)

            ax.plot(self.goal.x, self.goal.y, "r*", markersize=10, label="Goal")

            if self.robot_initial_position is not None:
                ax.plot(
                    self.robot_initial_position.x,
                    self.robot_initial_position.y,
                    "go",
                    markersize=10,
                    label="Start Position",
                )

            ax.plot(
                [self.robot_initial_position.x, self.goal.x],
                [self.robot_initial_position.y, self.goal.y],
                "g--",
                label="Start to Goal",
            )

            if len(self.laser_ranges) > 0:
                angles = np.arange(self.angle_min, self.angle_max, self.angle_increment)
                x_laser = self.laser_ranges * np.cos(angles)
                y_laser = self.laser_ranges * np.sin(angles)

                x_rotated = (
                    cos_yaw * x_laser - sin_yaw * y_laser + self.robot_position.x
                )
                y_rotated = (
                    sin_yaw * x_laser + cos_yaw * y_laser + self.robot_position.y
                )

                valid_indices = np.isfinite(x_rotated) & np.isfinite(y_rotated)
                x_rotated = x_rotated[valid_indices]
                y_rotated = y_rotated[valid_indices]

                ax.scatter(x_rotated, y_rotated, s=5, color="red", label="Laser Scan")

            ax.text(
                self.robot_position.x + 0.1,
                self.robot_position.y + 0.1,
                f"Pose: ({self.robot_position.x:.2f}, {self.robot_position.y:.2f})",
                fontsize=10,
                color="black",
            )

            ax.text(
                self.robot_position.x + 0.1,
                self.robot_position.y + 0.3,
                f"Yaw: {np.degrees(self.robot_yaw):.2f}°",
                fontsize=10,
                color="black",
            )

            ax.legend()
            plt.draw()
            plt.pause(0.1)


def main(args=None):
    rclpy.init(args=args)
    node = Bug2Algorithm()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()
