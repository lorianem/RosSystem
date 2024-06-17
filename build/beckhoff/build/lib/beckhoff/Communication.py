from beckhoff_interfaces.srv import Move
#from beckhoff_interfaces.msg import Position
import pyads
import rclpy
from rclpy.node import Node

remote_ip = '192.168.65.219'
remote_ads = '192.168.65.219.1.1'
plc = pyads.Connection(remote_ads, pyads.PORT_TC3PLC1, remote_ip) 
plc.open()

def getActualPos():
    x = plc.read_by_name('MYGVL.Axis3.NcToPlc.ActPos')
    y = plc.read_by_name('MYGVL.Axis1.NcToPlc.ActPos')
    r = plc.read_by_name('MYGVL.Axis2.NcToPlc.ActPos')
    return x,y,r 

class MinimalService(Node):

    def __init__(self):
        super().__init__('minimal_service')
        self.srv = self.create_service(Move, 'move', self.move_callback)
        #self.publisher = self.create_service(Position, 'sendPositon')
    
    
    def move_callback(self, rq, rs):
        rs.err = "0"

        self.get_logger().info('I move to : x : "%f", y : "%f",r : "%f", with a velocity of "%f"' % (rq.x,rq.y,rq.r, rq.velocity))  
        plc.write_by_name('MAIN.PCdata', [0, rq.velocity, rq.x, rq.y,rq.r], pyads.PLCTYPE_LREAL * 5)
        rs.val_x, rs.val_y, rs.val_r  = getActualPos()
        return rs


def main():
    rclpy.init()

    minimal_service = MinimalService()

    rclpy.spin(minimal_service)

    rclpy.shutdown()


if __name__ == '__main__':
    main()