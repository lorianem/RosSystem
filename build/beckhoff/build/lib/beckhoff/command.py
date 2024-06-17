import sys
import rclpy
from rclpy.node import Node

from beckhoff_interfaces.msg import Move                            # CHANGE


class MinimalPublisher(Node):

    def __init__(self):
        super().__init__('minimal_publisher')
        self.publisher_ = self.create_publisher(Move, 'topic', 10)  # CHANGE
        timer_period = 0.5
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.i = 0

    def timer_callback(self, x, y, z):
        msg = Move()                                                # CHANGE
        msg.x = x
        msg.y = y
        msg.z = z
        self.publisher_.publish(msg)
        self.get_logger().info('Move to : x : "%d", y : "%d",z : "%d"' % (msg.x,msg.y,msg.z))       # CHANGE
        self.i += 1


def main():
    rclpy.init()

    minimal_publisher = MinimalPublisher()
    minimal_publisher.timer_callback(int(sys.argv[1]), int(sys.argv[2]),int(sys.argv[3]) )

    minimal_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()