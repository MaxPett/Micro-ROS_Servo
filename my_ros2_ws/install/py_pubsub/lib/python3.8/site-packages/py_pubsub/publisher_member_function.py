import rclpy
from rclpy.node import Node

# from std_msgs.msg import Int32MultiArray
# from std_msgs.msg import MultiArrayDimension
from servo_message.msg import ServoMessage

import random
import numpy as np
# publishers a random Int32 value between 130 and 450 to topic "topic"

class MinimalPublisher(Node):

    def __init__(self):
        super().__init__('python_publisher_node')
        self.publisher_ = self.create_publisher(ServoMessage, 'micro_ros_arduino_subscriber', 10)
        timer_period = 1  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.i = 0

    def timer_callback(self):
        value = round(random.uniform(130, 450),2)
        number = round(random.uniform(0,1))
        cmd_msg = ServoMessage()
        cmd_msg.servo_number = number
        cmd_msg.servo_value = value
        
        # mat.layout.data_offset = 0
        # mat.data = [0]*9

        # save a few dimensions:
        # dstride0 = mat.layout.dim[0].stride
        # dstride1 = mat.layout.dim[1].stride
        # offset = mat.layout.data_offset
        # for i in range(3):
        #    for j in range(3):
        #        # num = random.randrange(0,10)
        #        # define values of Array
        #       num = 1
        #        # defines position in Array
        #        mat.data[offset + i + dstride1*j] = num
        
        self.publisher_.publish(cmd_msg)

def main(args=None):
    rclpy.init(args=args)

    minimal_publisher = MinimalPublisher()

    rclpy.spin(minimal_publisher)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    minimal_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()