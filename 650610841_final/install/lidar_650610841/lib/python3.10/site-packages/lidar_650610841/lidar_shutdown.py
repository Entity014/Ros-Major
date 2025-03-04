import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from rclpy.duration import Duration


def main():

    rclpy.init()

    node = rclpy.create_node("lidar_shutdown")
    pub = node.create_publisher(Twist, "cmd_vel", 10)
    start = node.get_clock().now()

    twist = Twist()
    while True:
        now = node.get_clock().now()
        if now - start < Duration(nanoseconds=3 * 1e9):
            twist.linear.x = 0.0
            twist.linear.y = 0.0
            twist.linear.z = 0.0

            twist.angular.x = 0.0
            twist.angular.y = 0.0
            twist.angular.z = 0.0
            pub.publish(twist)
        else:
            break

    node.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()
