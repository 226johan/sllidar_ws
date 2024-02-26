// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cartographer_ros_msgs:msg/Metric.idl
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__METRIC__STRUCT_H_
#define CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__METRIC__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'TYPE_COUNTER'.
enum
{
  cartographer_ros_msgs__msg__Metric__TYPE_COUNTER = 0
};

/// Constant 'TYPE_GAUGE'.
enum
{
  cartographer_ros_msgs__msg__Metric__TYPE_GAUGE = 1
};

/// Constant 'TYPE_HISTOGRAM'.
enum
{
  cartographer_ros_msgs__msg__Metric__TYPE_HISTOGRAM = 2
};

// Include directives for member types
// Member 'labels'
#include "cartographer_ros_msgs/msg/detail/metric_label__struct.h"
// Member 'counts_by_bucket'
#include "cartographer_ros_msgs/msg/detail/histogram_bucket__struct.h"

// Struct defined in msg/Metric in the package cartographer_ros_msgs.
typedef struct cartographer_ros_msgs__msg__Metric
{
  uint8_t type;
  cartographer_ros_msgs__msg__MetricLabel__Sequence labels;
  double value;
  cartographer_ros_msgs__msg__HistogramBucket__Sequence counts_by_bucket;
} cartographer_ros_msgs__msg__Metric;

// Struct for a sequence of cartographer_ros_msgs__msg__Metric.
typedef struct cartographer_ros_msgs__msg__Metric__Sequence
{
  cartographer_ros_msgs__msg__Metric * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cartographer_ros_msgs__msg__Metric__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__METRIC__STRUCT_H_
