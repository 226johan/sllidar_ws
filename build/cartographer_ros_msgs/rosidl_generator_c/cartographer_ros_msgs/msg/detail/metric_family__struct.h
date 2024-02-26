// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cartographer_ros_msgs:msg/MetricFamily.idl
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__METRIC_FAMILY__STRUCT_H_
#define CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__METRIC_FAMILY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
// Member 'description'
#include "rosidl_runtime_c/string.h"
// Member 'metrics'
#include "cartographer_ros_msgs/msg/detail/metric__struct.h"

// Struct defined in msg/MetricFamily in the package cartographer_ros_msgs.
typedef struct cartographer_ros_msgs__msg__MetricFamily
{
  rosidl_runtime_c__String name;
  rosidl_runtime_c__String description;
  cartographer_ros_msgs__msg__Metric__Sequence metrics;
} cartographer_ros_msgs__msg__MetricFamily;

// Struct for a sequence of cartographer_ros_msgs__msg__MetricFamily.
typedef struct cartographer_ros_msgs__msg__MetricFamily__Sequence
{
  cartographer_ros_msgs__msg__MetricFamily * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cartographer_ros_msgs__msg__MetricFamily__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__METRIC_FAMILY__STRUCT_H_
