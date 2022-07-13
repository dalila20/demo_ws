import rclpy
from rclpy.node import Node
import random
from first_pkg.msg import DistanciaDoisPontos                        

class DisPublisher(Node):

    def __init__(self):
        super().__init__('dis_publisher')
        self.publisher_ = self.create_publisher(DistanciaDoisPontos, '/distancia_2_pontos', 10)
        timer_period = 0.5  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)

    def timer_callback(self):
        msg = DistanciaDoisPontos()                                              
        msg.distanciax = random.uniform(2,10)
        msg.distanciay = random.uniform(2,10)                                          
        self.publisher_.publish(msg)
        self.get_logger().info('Publicando distância: x: "%f" m, y:"%f" m' % (msg.distanciax, msg.distanciay))      

def main(args=None):
    rclpy.init(args=args)
    dis_publisher = DisPublisher()

    try:
        rclpy.spin(dis_publisher)
    except KeyboardInterrupt:
        dis_publisher.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()