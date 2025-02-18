import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist


class TeleopTurtle(Node):

    def __init__(self):
        super().__init__("teleop_turtle")
        self.cmd_pub = self.create_publisher(Twist, "/cmd_vel", 10)
        self.timer = self.create_timer(0.01, self.teleop_callback)

    def teleop_callback(self):
        msg = Twist()
        msg.linear.x = 0.05
        msg.angular.z = 0.3
        self.cmd_pub.publish(msg)

    def terminate(self):
        msg = Twist()
        msg.linear.x = 0.0
        msg.angular.z = 0.0
        self.cmd_pub.publish(msg)


def main(args=None):
    rclpy.init(args=args)
    node = TeleopTurtle()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        node.terminate()
    node.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()
