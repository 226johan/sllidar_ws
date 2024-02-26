// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cartographer_ros_msgs:msg/MetricFamily.idl
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__METRIC_FAMILY__TRAITS_HPP_
#define CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__METRIC_FAMILY__TRAITS_HPP_

#include "cartographer_ros_msgs/msg/detail/metric_family__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cartographer_ros_msgs::msg::MetricFamily>()
{
  return "cartographer_ros_msgs::msg::MetricFamily";
}

template<>
inline const char * name<cartographer_ros_msgs::msg::MetricFamily>()
{
  return "cartographer_ros_msgs/msg/MetricFamily";
}

template<>
struct has_fixed_size<cartographer_ros_msgs::msg::MetricFamily>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<cartographer_ros_msgs::msg::MetricFamily>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<cartographer_ros_msgs::msg::MetricFamily>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__METRIC_FAMILY__TRAITS_HPP_
