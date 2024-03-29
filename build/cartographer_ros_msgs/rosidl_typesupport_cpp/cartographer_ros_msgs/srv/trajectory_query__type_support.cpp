// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from cartographer_ros_msgs:srv/TrajectoryQuery.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "cartographer_ros_msgs/srv/detail/trajectory_query__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace cartographer_ros_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _TrajectoryQuery_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TrajectoryQuery_Request_type_support_ids_t;

static const _TrajectoryQuery_Request_type_support_ids_t _TrajectoryQuery_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _TrajectoryQuery_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TrajectoryQuery_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TrajectoryQuery_Request_type_support_symbol_names_t _TrajectoryQuery_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cartographer_ros_msgs, srv, TrajectoryQuery_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, cartographer_ros_msgs, srv, TrajectoryQuery_Request)),
  }
};

typedef struct _TrajectoryQuery_Request_type_support_data_t
{
  void * data[2];
} _TrajectoryQuery_Request_type_support_data_t;

static _TrajectoryQuery_Request_type_support_data_t _TrajectoryQuery_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TrajectoryQuery_Request_message_typesupport_map = {
  2,
  "cartographer_ros_msgs",
  &_TrajectoryQuery_Request_message_typesupport_ids.typesupport_identifier[0],
  &_TrajectoryQuery_Request_message_typesupport_symbol_names.symbol_name[0],
  &_TrajectoryQuery_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TrajectoryQuery_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TrajectoryQuery_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace cartographer_ros_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<cartographer_ros_msgs::srv::TrajectoryQuery_Request>()
{
  return &::cartographer_ros_msgs::srv::rosidl_typesupport_cpp::TrajectoryQuery_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, cartographer_ros_msgs, srv, TrajectoryQuery_Request)() {
  return get_message_type_support_handle<cartographer_ros_msgs::srv::TrajectoryQuery_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "cartographer_ros_msgs/srv/detail/trajectory_query__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace cartographer_ros_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _TrajectoryQuery_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TrajectoryQuery_Response_type_support_ids_t;

static const _TrajectoryQuery_Response_type_support_ids_t _TrajectoryQuery_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _TrajectoryQuery_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TrajectoryQuery_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TrajectoryQuery_Response_type_support_symbol_names_t _TrajectoryQuery_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cartographer_ros_msgs, srv, TrajectoryQuery_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, cartographer_ros_msgs, srv, TrajectoryQuery_Response)),
  }
};

typedef struct _TrajectoryQuery_Response_type_support_data_t
{
  void * data[2];
} _TrajectoryQuery_Response_type_support_data_t;

static _TrajectoryQuery_Response_type_support_data_t _TrajectoryQuery_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TrajectoryQuery_Response_message_typesupport_map = {
  2,
  "cartographer_ros_msgs",
  &_TrajectoryQuery_Response_message_typesupport_ids.typesupport_identifier[0],
  &_TrajectoryQuery_Response_message_typesupport_symbol_names.symbol_name[0],
  &_TrajectoryQuery_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TrajectoryQuery_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TrajectoryQuery_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace cartographer_ros_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<cartographer_ros_msgs::srv::TrajectoryQuery_Response>()
{
  return &::cartographer_ros_msgs::srv::rosidl_typesupport_cpp::TrajectoryQuery_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, cartographer_ros_msgs, srv, TrajectoryQuery_Response)() {
  return get_message_type_support_handle<cartographer_ros_msgs::srv::TrajectoryQuery_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "cartographer_ros_msgs/srv/detail/trajectory_query__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace cartographer_ros_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _TrajectoryQuery_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TrajectoryQuery_type_support_ids_t;

static const _TrajectoryQuery_type_support_ids_t _TrajectoryQuery_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _TrajectoryQuery_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TrajectoryQuery_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TrajectoryQuery_type_support_symbol_names_t _TrajectoryQuery_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cartographer_ros_msgs, srv, TrajectoryQuery)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, cartographer_ros_msgs, srv, TrajectoryQuery)),
  }
};

typedef struct _TrajectoryQuery_type_support_data_t
{
  void * data[2];
} _TrajectoryQuery_type_support_data_t;

static _TrajectoryQuery_type_support_data_t _TrajectoryQuery_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TrajectoryQuery_service_typesupport_map = {
  2,
  "cartographer_ros_msgs",
  &_TrajectoryQuery_service_typesupport_ids.typesupport_identifier[0],
  &_TrajectoryQuery_service_typesupport_symbol_names.symbol_name[0],
  &_TrajectoryQuery_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t TrajectoryQuery_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TrajectoryQuery_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace cartographer_ros_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<cartographer_ros_msgs::srv::TrajectoryQuery>()
{
  return &::cartographer_ros_msgs::srv::rosidl_typesupport_cpp::TrajectoryQuery_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, cartographer_ros_msgs, srv, TrajectoryQuery)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<cartographer_ros_msgs::srv::TrajectoryQuery>();
}

#ifdef __cplusplus
}
#endif
