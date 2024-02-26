// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cartographer_ros_msgs:msg/TrajectoryStates.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cartographer_ros_msgs/msg/detail/trajectory_states__rosidl_typesupport_introspection_c.h"
#include "cartographer_ros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cartographer_ros_msgs/msg/detail/trajectory_states__functions.h"
#include "cartographer_ros_msgs/msg/detail/trajectory_states__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `trajectory_id`
// Member `trajectory_state`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TrajectoryStates__rosidl_typesupport_introspection_c__TrajectoryStates_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cartographer_ros_msgs__msg__TrajectoryStates__init(message_memory);
}

void TrajectoryStates__rosidl_typesupport_introspection_c__TrajectoryStates_fini_function(void * message_memory)
{
  cartographer_ros_msgs__msg__TrajectoryStates__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TrajectoryStates__rosidl_typesupport_introspection_c__TrajectoryStates_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartographer_ros_msgs__msg__TrajectoryStates, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "trajectory_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartographer_ros_msgs__msg__TrajectoryStates, trajectory_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "trajectory_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartographer_ros_msgs__msg__TrajectoryStates, trajectory_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TrajectoryStates__rosidl_typesupport_introspection_c__TrajectoryStates_message_members = {
  "cartographer_ros_msgs__msg",  // message namespace
  "TrajectoryStates",  // message name
  3,  // number of fields
  sizeof(cartographer_ros_msgs__msg__TrajectoryStates),
  TrajectoryStates__rosidl_typesupport_introspection_c__TrajectoryStates_message_member_array,  // message members
  TrajectoryStates__rosidl_typesupport_introspection_c__TrajectoryStates_init_function,  // function to initialize message memory (memory has to be allocated)
  TrajectoryStates__rosidl_typesupport_introspection_c__TrajectoryStates_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TrajectoryStates__rosidl_typesupport_introspection_c__TrajectoryStates_message_type_support_handle = {
  0,
  &TrajectoryStates__rosidl_typesupport_introspection_c__TrajectoryStates_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cartographer_ros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartographer_ros_msgs, msg, TrajectoryStates)() {
  TrajectoryStates__rosidl_typesupport_introspection_c__TrajectoryStates_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!TrajectoryStates__rosidl_typesupport_introspection_c__TrajectoryStates_message_type_support_handle.typesupport_identifier) {
    TrajectoryStates__rosidl_typesupport_introspection_c__TrajectoryStates_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TrajectoryStates__rosidl_typesupport_introspection_c__TrajectoryStates_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
