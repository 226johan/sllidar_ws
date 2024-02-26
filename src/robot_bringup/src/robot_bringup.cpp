#include<rclcpp/rclcpp.hpp>
#include<nav_msgs/msg/odometry.hpp>
#include<tf2/utils.h>
#include<tf2_ros/transform_broadcaster.h>

class TopicSubscribe : public rclcpp::Node
{
public:
    TopicSubscribe(std::string name) : Node(name)
    {
        odom_subscribe_ = this->create_subscription<nav_msgs::msg::Odometry>(
            "odom",rclcpp::SensorDataQoS(),
            std::bind(&TopicSubscribe::odom_callback,this,std::placeholders::_1)
        );

        tf_broadcaster_=std::make_unique<tf2_ros::TransformBroadcaster>(this);
    }

private:
    rclcpp::Subscription<nav_msgs::msg::Odometry>::SharedPtr odom_subscribe_;
    std::unique_ptr<tf2_ros::TransformBroadcaster> tf_broadcaster_;
    nav_msgs::msg::Odometry odom_msg_;

    void odom_callback(const nav_msgs::msg::Odometry::SharedPtr msg)
    {
        (void) msg;
        RCLCPP_INFO(this->get_logger(),"odom->base_link tf:(%f,%f)",msg->pose.pose.position.x,msg->pose.pose.position.y);
        odom_msg_.pose.pose.position.x=msg->pose.pose.position.x;
        odom_msg_.pose.pose.position.y=msg->pose.pose.position.z;
        odom_msg_.pose.pose.position.z=msg->pose.pose.position.z;
        
        odom_msg_.pose.pose.orientation.x=msg->pose.pose.orientation.x;
        odom_msg_.pose.pose.orientation.y=msg->pose.pose.orientation.y;
        odom_msg_.pose.pose.orientation.z=msg->pose.pose.orientation.z;
        odom_msg_.pose.pose.orientation.w=msg->pose.pose.orientation.w;
    }

public:
    void publish_tf()
    {
    geometry_msgs::msg::TransformStamped transform;
    double seconds = this->now().seconds();
    transform.header.stamp = rclcpp::Time(static_cast<uint64_t>(seconds * 1e9));
    transform.header.frame_id = "odom";
    transform.child_frame_id = "base_link";

    transform.transform.translation.x = odom_msg_.pose.pose.position.x;
    transform.transform.translation.y = odom_msg_.pose.pose.position.y;
    transform.transform.translation.z = odom_msg_.pose.pose.position.z;
    transform.transform.rotation.x = odom_msg_.pose.pose.orientation.x;
    transform.transform.rotation.y = odom_msg_.pose.pose.orientation.y;
    transform.transform.rotation.z = odom_msg_.pose.pose.orientation.z;
    transform.transform.rotation.w = odom_msg_.pose.pose.orientation.w;

    // 广播坐标变换信息
    tf_broadcaster_->sendTransform(transform);
    }
};

int main(int argc,char **argv)
{
    rclcpp::init(argc,argv);

    auto node = std::make_shared<TopicSubscribe>("robot_bringup");
    rclcpp::WallRate loop_rate(20.0);
    while(rclcpp::ok())
    {
        rclcpp::spin_some(node);
        node->publish_tf();
        loop_rate.sleep();
    }
    rclcpp::shutdown();

    return 0;
}
