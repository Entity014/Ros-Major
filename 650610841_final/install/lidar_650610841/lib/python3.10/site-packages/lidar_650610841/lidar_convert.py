import rclpy
from rclpy.node import Node
from rclpy import qos
from lidar_interfaces.msg import Scan
from sensor_msgs.msg import LaserScan


class LidarConvert(Node):

    def __init__(self):
        super().__init__("lidar_convert")
        self.lidar_sub = self.create_subscription(
            LaserScan,
            "/scan_a3",
            self.lidar_callback,
            qos_profile=qos.qos_profile_sensor_data,
        )

        self.lidar_pub = self.create_publisher(Scan, "/scan_data", 10)

    def lidar_callback(self, msg):
        self.lidar_pub.publish(self.laser2scan(msg))

    def laser2scan(self, msg):
        data = Scan()
        data.header = msg.header
        data.angle_min = msg.angle_min
        data.angle_max = msg.angle_max
        data.angle_increment = msg.angle_increment
        data.time_increment = msg.time_increment
        data.scan_time = msg.scan_time
        data.range_min = msg.range_min
        data.range_max = msg.range_max
        data.ranges = msg.ranges
        data.intensities = msg.intensities
        return data


def main(args=None):
    rclpy.init(args=args)
    node = LidarConvert()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()
