import rclpy
from rclpy.node import Node
from beckhoff_interfaces.msg import Position


class MinimalSubscriber(Node):

    def __init__(self):
        super().__init__('minimal_subscriber')
        self.x, self.y, self.r = 0,0,0
        self.subscription = self.create_subscription(
            Position,
            'rt_position',
            self.listener_callback,
            10)
        self.subscription  # prevent unused variable warning

    def listener_callback(self, msg):
        self.x, self.y, self.z = msg.x,msg.y,msg.r
        self.get_logger().info('Actual pos : x : "%f", y : "%f",r : "%f"' % (msg.x,msg.y,msg.r))


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