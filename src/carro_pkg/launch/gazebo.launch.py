import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node

def generate_launch_description():

    use_sim_time = LaunchConfiguration('use_sim_time', default='false')

    urdf_file_name = 'carro.urdf'
    urdf = '~/demo_ws/src/carro_pkg/urdf/carro.urdf'
    world_file_name = 'empty_world.sdf'
    world = os.path.join(get_package_share_directory('carro_pkg'),
                         'worlds', world_file_name)
    pkg_gazebo_ros = get_package_share_directory('gazebo_ros')
    xacro = get_package_share_directory('xacro')
    xacro_model = os.path.join(xacro, 'xacro')
    
    with open(urdf, 'r') as infp:
        robot_desc = infp.read()

    return LaunchDescription([
    	IncludeLaunchDescription(
            PythonLaunchDescriptionSource(
                os.path.join(pkg_gazebo_ros, 'launch', 'gzserver.launch.py')
            ),
            launch_arguments={'world': world}.items(),
        ),
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource(
                os.path.join(pkg_gazebo_ros, 'launch', 'gzclient.launch.py')
            ),
        ),
        DeclareLaunchArgument(
            'use_sim_time',
            default_value='false',
            description='Use simulation (Gazebo) clock if true'),
        Node(
            package='robot_state_publisher',
            executable='robot_state_publisher',
            name='robot_state_publisher',
            output='screen',
            parameters=[{'use_sim_time': use_sim_time, 'robot_description': robot_desc}],
            arguments=[urdf]),
        Node(
            package='carro_pkg',
            executable='state_publisher',
            name='state_publisher',
            output='screen'),
        Node(
            package='gazebo_ros',
            node_executable='spawn_model',
            parameters=[tb3_param_dir],      
            arguments=['-z', '1.0', '-unpause', '-urdf', '-model', 'robot', '-param', xacro_model + '~/demo_ws/src/carro_pkg/urdf/carro.urdf'],
            output='screen'),
    ])
