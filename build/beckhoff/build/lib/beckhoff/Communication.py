from beckhoff_interfaces.srv import Move
from beckhoff_interfaces.msg import Position
import pyads
import rclpy
from rclpy.node import Node
import time 
from ctypes import sizeof

remote_ip = '192.168.65.219'
remote_ads = '192.168.65.219.1.1'
plc = pyads.Connection(remote_ads, pyads.PORT_TC3PLC1, remote_ip) 
plc.open()

moving = True
def callbackState(notification, data):
    global moving
    data_type = tags[data]
    handle, timestamp, value = plc.parse_notification(notification, data_type)
    moving = value
    print(value)

tags = {"External_Setpoint.send_value": pyads.PLCTYPE_BOOL}
attr = pyads.NotificationAttrib(sizeof(pyads.PLCTYPE_BOOL))
handles = plc.add_device_notification('External_Setpoint.send_value', attr, callbackState)


def getActualPos():
    x = plc.read_by_name('MYGVL.Axis3.NcToPlc.ActPos')
    y = plc.read_by_name('MYGVL.Axis1.NcToPlc.ActPos')
    r = plc.read_by_name('MYGVL.Axis2.NcToPlc.ActPos')
    return x,y,r 

class MinimalService(Node):

    def __init__(self):
        super().__init__('minimal_service')
        self.srv = self.create_service(Move, 'move', self.move_callback)
        self.publisher = self.create_publisher(Position, 'rt_position',10)
        timer_period = 0.5  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)

        
    def timer_callback(self):
        msg = Position()
        msg.x , msg.y , msg.r = getActualPos()
        msg.x , msg.y , msg.r = getActualPos()
        self.publisher.publish(msg)

        
    def move_callback(self, rq, rs):
        global moving, handles, attr
        rs.err = "0"
        self.get_logger().info('I move to : x : "%f", y : "%f",r : "%f", with a velocity of "%f"' % (rq.x,rq.y,rq.r, rq.velocity))         
        plc.write_by_name('MAIN.PCdata', [time.time(), rq.velocity, rq.x, rq.y,rq.r], pyads.PLCTYPE_LREAL * 5)
        plc.write_by_name('External_Setpoint.send_value', True, pyads.PLCTYPE_BOOL)
        
        moving = True
        while moving :
            pass    
        rs.val_x, rs.val_y, rs.val_r  = getActualPos()
        #plc.del_device_notification(handles)
        return rs


def main():
    rclpy.init()
    minimal_service = MinimalService()
    rclpy.spin(minimal_service)
    minimal_service.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()