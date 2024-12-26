import rclpy
from rclpy.node import Node

from myword_650610841.msg import Num


class MinimalSubscriber(Node):

    def __init__(self):
        super().__init__('listener_650610841')
        self.subscription = self.create_subscription(
            Num,
            'gossip_650610841',
            self.listener_callback,
            10)
        self.subscription  # prevent unused variable warning

    def listener_callback(self, msg):
        self.get_logger().info('Listening: I got "%s"' % msg.n)


def main(args=None):
    rclpy.init(args=args)

    minimal_subscriber = MinimalSubscriber()

    rclpy.spin(minimal_subscriber)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    minimal_subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
