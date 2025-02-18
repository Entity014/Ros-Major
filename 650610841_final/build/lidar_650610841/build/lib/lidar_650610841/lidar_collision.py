import rclpy
from rclpy.node import Node
from rclpy import qos
from numpy import linspace, sin, inf, degrees
from math import isfinite
from sensor_msgs.msg import LaserScan
from lidar_interfaces.srv import Break

MIN_RANGE = 0.05
MAX_RANGE = 0.16


class LidarCollision(Node):

    def __init__(self):
        super().__init__("lidar_collision")
        self.lidar_sub = self.create_subscription(
            LaserScan,
            "/scan",
            self.lidar_callback,
            qos_profile=qos.qos_profile_sensor_data,
        )

        self.break_cli = self.create_client(Break, "break")
        self.lidar_pub = self.create_publisher(LaserScan, "/scan_filtered", 10)

    def lidar_callback(self, msg):
        self.lidar_filter(msg)
        self.lidar_collision_check(msg)

    def lidar_filter(self, msg):
        angles = linspace(msg.angle_min, msg.angle_max, len(msg.ranges))
        points = [
            (r * sin(theta) if (MIN_RANGE <= r <= MAX_RANGE) else inf)
            for r, theta in zip(msg.ranges, angles)
        ]

        new_ranges = [r if abs(y) < inf else inf for r, y in zip(msg.ranges, points)]
        msg.ranges = new_ranges
        self.lidar_pub.publish(msg)

    def lidar_collision_check(self, msg):
        angles = linspace(msg.angle_min, msg.angle_max, len(msg.ranges))
        points = [
            ((abs(r * sin(theta)), theta))
            for r, theta in zip(msg.ranges, angles)
            if isfinite(r) and MIN_RANGE <= r <= MAX_RANGE
        ]

        theta_values = [round(degrees(theta)) for _, theta in points]

        if points:
            if self.break_cli.wait_for_service(timeout_sec=1.0):
                req = Break.Request()
                req.angles = theta_values
                future = self.break_cli.call_async(req)
        else:
            if self.break_cli.wait_for_service(timeout_sec=1.0):
                req = Break.Request()
                req.angles = theta_values
                future = self.break_cli.call_async(req)

        for point in points:
            # print(point)
            self.get_logger().info(
                f"Range: {point[0]:.2f} m, Angle: {degrees(point[1]):.2f} degrees"
            )


def main(args=None):
    rclpy.init(args=args)
    node = LidarCollision()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()
