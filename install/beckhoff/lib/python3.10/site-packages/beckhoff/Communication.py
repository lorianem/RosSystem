from beckhoff_interfaces.srv import CartesianMove, HeadRotation
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
        # Creation Service for Simple Movement
        self.srv = self.create_service(CartesianMove, 'cartesianMove', self.move_callback)
        # Creation Service for rotation Movement
        self.srv = self.create_service(HeadRotation, 'rotationMove', self.rotation_callback)
        # Creation Publisher of the position
        self.publisher = self.create_publisher(Position, 'rt_position',10)
        timer_period = 0.5  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)

        
    def timer_callback(self):
        msg = Position()
        msg.x , msg.y , msg.r = getActualPos()
        self.publisher.publish(msg)

        
    def move_callback(self, rq, rs):
        
        self.get_logger().info('I move to : x : "%f", y : "%f",r : "%f" \n with a velocity of x: "%f", y : "%f",r : "%f" \n and an acceleration of x : "%f", y : "%f",r : "%f"\n\n'
                                % (rq.x,rq.y,rq.z, 
                                abs(rq.vel_x),rq.vel_y,rq.vel_z,
                                rq.acc_x,rq.acc_y,rq.acc_z))         
        plc.write_by_name('MAIN.PCdata', [time.time(), rq.x,abs(rq.vel_x), abs(rq.acc_x), rq.y,abs(rq.vel_y),abs(rq.acc_y), self.r, 0], pyads.PLCTYPE_LREAL * 9)
        #plc.write_by_name('External_Setpoint.send_value', True, pyads.PLCTYPE_BOOL)
        x, y , r  = getActualPos()
        self.get_logger().info('x :"%f", y: "%f", r : "%f"'%  (x ,  y, r) ) 
        #moving = True
        #while moving :
        #    pass    
        rs.feedback  = 'ok'
        
        #plc.del_device_notification(handles)
        return rs
    
    def rotation_callback(self, rotRq, rotRs):
        getActualPos()
        plc.write_by_name('MAIN.PCdata', self.x, 0, self.y, 0, rotRq.deg, rotRq.deg)
        rotRs.feedback = "ok"
        return rotRs


def main():
    rclpy.init()
    minimal_service = MinimalService()
    rclpy.spin(minimal_service)
    minimal_service.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()