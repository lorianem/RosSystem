import rclpy
from rclpy.node import Node
import pyads
from beckhoff_interfaces.msg import Move                        # CHANGE


remote_ip = '192.168.65.219'
remote_ads = '192.168.65.219.1.1'
plc = pyads.Connection(remote_ads, pyads.PORT_TC3PLC1, remote_ip) 
plc.open()

class MinimalSubscriber(Node):

    def __init__(self):
        super().__init__('minimal_subscriber')
        self.subscription = self.create_subscription(
            Move,                                               # CHANGE
            'topic',
            self.listener_callback,
            10)
        self.subscription

    def listener_callback(self, msg):
            self.get_logger().info('I move to: x : "%d" , y : "%d", z : "%d"' % (msg.x, msg.y,msg.z))  # CHANGE
            plc.write_by_name('MAIN.PCdata', [100, 100, msg.x, msg.y,msg.z], pyads.PLCTYPE_LREAL * 5)

def main(args=None):
    rclpy.init(args=args)

    minimal_subscriber = MinimalSubscriber()

    rclpy.spin(minimal_subscriber)

    minimal_subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()