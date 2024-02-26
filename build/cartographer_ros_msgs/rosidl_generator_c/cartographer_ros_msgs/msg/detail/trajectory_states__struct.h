// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cartographer_ros_msgs:msg/TrajectoryStates.idl
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__TRAJECTORY_STATES__STRUCT_H_
#define CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__TRAJECTORY_STATES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ACTIVE'.
enum
{
  cartographer_ros_msgs__msg__TrajectoryStates__ACTIVE = 0
};

/// Constant 'FINISHED'.
enum
{
  cartographer_ros_msgs__msg__TrajectoryStates__FINISHED = 1
};

/// Constant 'FROZEN'.
enum
{
  cartographer_ros_msgs__msg__TrajectoryStates__FROZEN = 2
};

/// Constant 'DELETED'.
enum
{
  cartographer_ros_msgs__msg__TrajectoryStates__DELETED = 3
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'trajectory_id'
// Member 'trajectory_state'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/TrajectoryStates in the package cartographer_ros_msgs.
typedef struct cartographer_ros_msgs__msg__TrajectoryStates
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__int32__Sequence trajectory_id;
  rosidl_runtime_c__uint8__Sequence trajectory_state;
} cartographer_ros_msgs__msg__TrajectoryStates;

// Struct for a sequence of cartographer_ros_msgs__msg__TrajectoryStates.
typedef struct cartographer_ros_msgs__msg__TrajectoryStates__Sequence
{
  cartographer_ros_msgs__msg__TrajectoryStates * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cartographer_ros_msgs__msg__TrajectoryStates__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__TRAJECTORY_STATES__STRUCT_H_
