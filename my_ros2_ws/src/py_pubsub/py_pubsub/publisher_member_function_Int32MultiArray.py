import rclpy
from rclpy.node import Node

from std_msgs.msg import Int32MultiArray
from std_msgs.msg import MultiArrayDimension
import random
import numpy as np
# publishers a random Int32 value between 130 and 450 to topic "topic"

class MinimalPublisher(Node):

    def __init__(self):
        super().__init__('minimal_publisher')
        self.publisher_ = self.create_publisher(Int32MultiArray, 'topic', 10)
        timer_period = 2  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.i = 0

    def timer_callback(self):
        servo_value = random.randint(130, 450)
        mat = Int32MultiArray()
        mat.layout.dim.append(MultiArrayDimension())
        mat.layout.dim.append(MultiArrayDimension())
        mat.layout.dim[0].label = "height"
        mat.layout.dim[1].label = "width"
        mat.layout.dim[0].size = 3
        mat.layout.dim[1].size = 3
        mat.layout.dim[0].stride = 3*3
        mat.layout.dim[1].stride = 3
        mat.layout.data_offset = 0
        mat.data = [0]*9

        # save a few dimensions:
        dstride0 = mat.layout.dim[0].stride
        dstride1 = mat.layout.dim[1].stride
        offset = mat.layout.data_offset
        for i in range(3):
            for j in range(3):
                num = random.randrange(0,10)
                mat.data[offset + i + dstride1*j] = num
        self.publisher_.publish(mat)

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
