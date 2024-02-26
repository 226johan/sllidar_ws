import os
from launch import LaunchDescription
# from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare


def generate_launch_description():
    package_name = 'sam_bot_description'
    urdf_name = "robot.urdf"

    ld = LaunchDescription()
    pkg_share = FindPackageShare(package=package_name).find(package_name)
    default_model_path = os.path.join(pkg_share, 'src/description/robot.urdf')
    urdf_model_path = os.path.join(pkg_share, f'config/{urdf_name}')

    # 发布机器人模型信息robot_description 并将joint_states数据转换tf信息发布
    robot_state_publisher_node = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        arguments=[default_model_path]
        )

    # 发布机器人关节数据信息 通过joint_states话题发布
    joint_state_publisher_node = Node(
        package='joint_state_publisher_gui',
        executable='joint_state_publisher_gui',
        name='joint_state_publisher_gui',
        arguments=[default_model_path]
        )

    # 显示机器人信息
    rviz2_node = Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        output='screen',
        )

    # joint_state_publisher---joint_states--->robot_state_publisher---robotr_description--->rviz2
    ld.add_action(robot_state_publisher_node)
    ld.add_action(joint_state_publisher_node)
    ld.add_action(rviz2_node)

    return ld