import rclpy
import math
from rclpy.node import Node
from first_pkg.msg import DistanciaDoisPontos                      

class DisSubscriber(Node):

    def __init__(self):
        super().__init__('dis_subscriber')
        self.subscription = self.create_subscription(DistanciaDoisPontos, '/distancia_2_pontos', self.listener_callback, 10)
        self.subscription
        self.distancia = DistanciaDoisPontos()

    def listener_callback(self, msg):
        soma_dis = math.pow(msg.distanciax, 2) + math.pow(msg.distanciay, 2)
        distancia_euc = math.sqrt(soma_dis)
        self.get_logger().info('A distância euclidiana entre os dois pontos é: "%f"' % distancia_euc)

def main(args=None):
    rclpy.init(args=args)
    dis_subscriber = DisSubscriber()

    try:
        rclpy.spin(dis_subscriber)
    except KeyboardInterrupt:
        dis_subscriber.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()