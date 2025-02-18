import rclpy
from rclpy.node import Node
from numpy import linspace, degrees
from math import sin
from sensor_msgs.msg import LaserScan


class LidarSubscriber(Node):

    def __init__(self):
        super().__init__("lidar_subscriber")
        self.subscription = self.create_subscription(
            LaserScan, "/scan", self.listener_callback, 10
        )
        self.subscription  # prevent unused variable warning

    def listener_callback(self, msg):
        angles = linspace(msg.angle_min, msg.angle_max, len(msg.ranges))
        for r, theta in zip(msg.ranges, angles):
            self.get_logger().info(
                f"Range: {r:.2f} m, Angle: {degrees(theta):.2f} degrees"
            )


def main(args=None):
    rclpy.init(args=args)

    minimal_subscriber = LidarSubscriber()

    rclpy.spin(minimal_subscriber)

    minimal_subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()
