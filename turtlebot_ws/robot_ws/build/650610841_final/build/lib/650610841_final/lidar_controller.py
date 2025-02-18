import rclpy
from rclpy.node import Node
from numpy import linspace, sin, cos, inf, interp
from math import isfinite
from sensor_msgs.msg import LaserScan
from geometry_msgs.msg import Twist
from std_srvs.srv import SetBool

MIN_SPEED_LINEAR = -0.15
MAX_SPEED_LINEAR = 0.15

MIN_SPEED_ANGULAR = -1.5
MAX_SPEED_ANGULAR = 1.5

MIN_RANGE = 0.15
MAX_RANGE = 0.4


class LidarController(Node):

    def __init__(self):
        super().__init__("lidar_controller")
        self.lidar_sub = self.create_subscription(
            LaserScan, "/scan_a3", self.lidar_callback, 10
        )
        self.break_srv = self.create_service(SetBool, "break", self.break_callback)
        self.lidar_pub = self.create_publisher(LaserScan, "/scan_a3_filtered", 10)
        self.cmd_pub = self.create_publisher(Twist, "/cmd_vel", 10)

        self.robot_break = False

    def lidar_callback(self, msg):
        self.lidar_filter(msg)
        self.controller(msg)

    def break_callback(self, req, resp):
        self.robot_break = req.data
        resp.success = True
        resp.message = "Robot stopped"
        return resp

    def lidar_filter(self, msg):
        angles = linspace(msg.angle_min, msg.angle_max, len(msg.ranges))
        points = [
            (r * sin(theta) if (MIN_RANGE < r < MAX_RANGE) else inf)
            for r, theta in zip(msg.ranges, angles)
        ]

        new_ranges = [r if abs(y) < inf else inf for r, y in zip(msg.ranges, points)]
        msg.ranges = new_ranges
        self.lidar_pub.publish(msg)

    def controller(self, msg):
        angles = linspace(msg.angle_min, msg.angle_max, len(msg.ranges))
        points = [
            (
                ((MAX_RANGE + MIN_RANGE) - r) * cos(theta),
                ((MAX_RANGE + MIN_RANGE) - r) * sin(theta),
            )
            for r, theta in zip(msg.ranges, angles)
            if isfinite(r) and MIN_RANGE < r < MAX_RANGE
        ]

        if points and not self.robot_break:
            avg_x = sum([point[0] for point in points]) / len(points)
            avg_y = sum([point[1] for point in points]) / len(points)
            normal_x = interp(abs(avg_x), [0, MAX_RANGE], [0, 1]) * (abs(avg_x) / avg_x)
            normal_y = interp(abs(avg_y), [0, MAX_RANGE], [0, 1]) * (abs(avg_y) / avg_y)

            # print(
            #     [round(avg_x, 2), round(avg_y, 2)],
            #     [round(normal_x, 2), round(normal_y, 2)],
            # )

            linear_x = max(
                MIN_SPEED_LINEAR,
                min(-normal_x * MAX_SPEED_LINEAR, MAX_SPEED_LINEAR),
            )
            angular_z = max(
                MIN_SPEED_ANGULAR,
                min(-normal_y * MAX_SPEED_ANGULAR, MAX_SPEED_ANGULAR),
            )
        else:
            linear_x = 0.0
            angular_z = 0.0

        # print(linear_x, angular_z)
        twist_msg = Twist()
        twist_msg.linear.x = linear_x
        twist_msg.angular.z = angular_z
        self.cmd_pub.publish(twist_msg)
        # self.robot_break = False


def main(args=None):
    rclpy.init(args=args)
    node = LidarController()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()
