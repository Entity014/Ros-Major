import rclpy
from rclpy.node import Node

from myword_650610841.srv import SumFourInt

class MinimalService(Node):

    def __init__(self):
        super().__init__('butler_650610841')
        self.srv = self.create_service(SumFourInt, 'sum_four_ints', self.sum_four_ints_callback)


    def sum_four_ints_callback(self, request, response):
        response.i = request.a + request.b + request.c + request.d
        self.get_logger().info('Yes, sir! Order is a: %d b: %d c: %d d: %d' % (request.a, request.b, request.c, request.d))

        return response


def main():
    rclpy.init()

    minimal_service = MinimalService()

    rclpy.spin(minimal_service)

    rclpy.shutdown()


if __name__ == '__main__':
    main()