import sys

import rclpy
from rclpy.node import Node
from myword_650610841.srv import SumFourInt
from myword_650610841.msg import Num


class MinimalClientAsync(Node):

    def __init__(self):
        super().__init__('master_650610841')
        self.cli = self.create_client(SumFourInt, 'sum_four_ints')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = SumFourInt.Request()
        
        self.publisher_ = self.create_publisher(Num, 'gossip_650610841', 10)

    def send_request(self, a, b, c, d):
        self.req.a = a
        self.req.b = b
        self.req.c = c
        self.req.d = d
        return self.cli.call_async(self.req)

def main():
    rclpy.init()

    minimal_client = MinimalClientAsync()
    future = minimal_client.send_request(int(sys.argv[1]), int(sys.argv[2]), int(sys.argv[3]), int(sys.argv[4]))
    rclpy.spin_until_future_complete(minimal_client, future)
    response = future.result()
    minimal_client.get_logger().info(
        'Ahh! Result is %d + %d + %d + %d = %d' %
        (int(sys.argv[1]), int(sys.argv[2]), int(sys.argv[3]), int(sys.argv[4]), response.i))
    msg = Num()
    msg.n = response.i
    minimal_client.publisher_.publish(msg)
    minimal_client.get_logger().info(
        'Shouting: result is %d' % response.i)

    minimal_client.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()