// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cartographer_ros_msgs:msg/HistogramBucket.idl
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__HISTOGRAM_BUCKET__STRUCT_H_
#define CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__HISTOGRAM_BUCKET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/HistogramBucket in the package cartographer_ros_msgs.
typedef struct cartographer_ros_msgs__msg__HistogramBucket
{
  double bucket_boundary;
  double count;
} cartographer_ros_msgs__msg__HistogramBucket;

// Struct for a sequence of cartographer_ros_msgs__msg__HistogramBucket.
typedef struct cartographer_ros_msgs__msg__HistogramBucket__Sequence
{
  cartographer_ros_msgs__msg__HistogramBucket * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cartographer_ros_msgs__msg__HistogramBucket__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__HISTOGRAM_BUCKET__STRUCT_H_
