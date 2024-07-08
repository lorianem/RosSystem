// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from beckhoff_interfaces:srv/TargetPose.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "beckhoff_interfaces/srv/detail/target_pose__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace beckhoff_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _TargetPose_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TargetPose_Request_type_support_ids_t;

static const _TargetPose_Request_type_support_ids_t _TargetPose_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _TargetPose_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TargetPose_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TargetPose_Request_type_support_symbol_names_t _TargetPose_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, beckhoff_interfaces, srv, TargetPose_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, beckhoff_interfaces, srv, TargetPose_Request)),
  }
};

typedef struct _TargetPose_Request_type_support_data_t
{
  void * data[2];
} _TargetPose_Request_type_support_data_t;

static _TargetPose_Request_type_support_data_t _TargetPose_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TargetPose_Request_message_typesupport_map = {
  2,
  "beckhoff_interfaces",
  &_TargetPose_Request_message_typesupport_ids.typesupport_identifier[0],
  &_TargetPose_Request_message_typesupport_symbol_names.symbol_name[0],
  &_TargetPose_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TargetPose_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TargetPose_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace beckhoff_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<beckhoff_interfaces::srv::TargetPose_Request>()
{
  return &::beckhoff_interfaces::srv::rosidl_typesupport_cpp::TargetPose_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, beckhoff_interfaces, srv, TargetPose_Request)() {
  return get_message_type_support_handle<beckhoff_interfaces::srv::TargetPose_Request>();
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
// #include "beckhoff_interfaces/srv/detail/target_pose__struct.hpp"
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

namespace beckhoff_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _TargetPose_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TargetPose_Response_type_support_ids_t;

static const _TargetPose_Response_type_support_ids_t _TargetPose_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _TargetPose_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TargetPose_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TargetPose_Response_type_support_symbol_names_t _TargetPose_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, beckhoff_interfaces, srv, TargetPose_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, beckhoff_interfaces, srv, TargetPose_Response)),
  }
};

typedef struct _TargetPose_Response_type_support_data_t
{
  void * data[2];
} _TargetPose_Response_type_support_data_t;

static _TargetPose_Response_type_support_data_t _TargetPose_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TargetPose_Response_message_typesupport_map = {
  2,
  "beckhoff_interfaces",
  &_TargetPose_Response_message_typesupport_ids.typesupport_identifier[0],
  &_TargetPose_Response_message_typesupport_symbol_names.symbol_name[0],
  &_TargetPose_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TargetPose_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TargetPose_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace beckhoff_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<beckhoff_interfaces::srv::TargetPose_Response>()
{
  return &::beckhoff_interfaces::srv::rosidl_typesupport_cpp::TargetPose_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, beckhoff_interfaces, srv, TargetPose_Response)() {
  return get_message_type_support_handle<beckhoff_interfaces::srv::TargetPose_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "beckhoff_interfaces/srv/detail/target_pose__struct.hpp"
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

namespace beckhoff_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _TargetPose_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TargetPose_type_support_ids_t;

static const _TargetPose_type_support_ids_t _TargetPose_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _TargetPose_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TargetPose_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TargetPose_type_support_symbol_names_t _TargetPose_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, beckhoff_interfaces, srv, TargetPose)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, beckhoff_interfaces, srv, TargetPose)),
  }
};

typedef struct _TargetPose_type_support_data_t
{
  void * data[2];
} _TargetPose_type_support_data_t;

static _TargetPose_type_support_data_t _TargetPose_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TargetPose_service_typesupport_map = {
  2,
  "beckhoff_interfaces",
  &_TargetPose_service_typesupport_ids.typesupport_identifier[0],
  &_TargetPose_service_typesupport_symbol_names.symbol_name[0],
  &_TargetPose_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t TargetPose_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TargetPose_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace beckhoff_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<beckhoff_interfaces::srv::TargetPose>()
{
  return &::beckhoff_interfaces::srv::rosidl_typesupport_cpp::TargetPose_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
