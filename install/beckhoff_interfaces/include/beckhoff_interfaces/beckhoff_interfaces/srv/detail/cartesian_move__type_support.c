// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from beckhoff_interfaces:srv/CartesianMove.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "beckhoff_interfaces/srv/detail/cartesian_move__rosidl_typesupport_introspection_c.h"
#include "beckhoff_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "beckhoff_interfaces/srv/detail/cartesian_move__functions.h"
#include "beckhoff_interfaces/srv/detail/cartesian_move__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void beckhoff_interfaces__srv__CartesianMove_Request__rosidl_typesupport_introspection_c__CartesianMove_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  beckhoff_interfaces__srv__CartesianMove_Request__init(message_memory);
}

void beckhoff_interfaces__srv__CartesianMove_Request__rosidl_typesupport_introspection_c__CartesianMove_Request_fini_function(void * message_memory)
{
  beckhoff_interfaces__srv__CartesianMove_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember beckhoff_interfaces__srv__CartesianMove_Request__rosidl_typesupport_introspection_c__CartesianMove_Request_message_member_array[9] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(beckhoff_interfaces__srv__CartesianMove_Request, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(beckhoff_interfaces__srv__CartesianMove_Request, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(beckhoff_interfaces__srv__CartesianMove_Request, z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vel_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(beckhoff_interfaces__srv__CartesianMove_Request, vel_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vel_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(beckhoff_interfaces__srv__CartesianMove_Request, vel_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vel_z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(beckhoff_interfaces__srv__CartesianMove_Request, vel_z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "acc_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(beckhoff_interfaces__srv__CartesianMove_Request, acc_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "acc_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(beckhoff_interfaces__srv__CartesianMove_Request, acc_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "acc_z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(beckhoff_interfaces__srv__CartesianMove_Request, acc_z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers beckhoff_interfaces__srv__CartesianMove_Request__rosidl_typesupport_introspection_c__CartesianMove_Request_message_members = {
  "beckhoff_interfaces__srv",  // message namespace
  "CartesianMove_Request",  // message name
  9,  // number of fields
  sizeof(beckhoff_interfaces__srv__CartesianMove_Request),
  beckhoff_interfaces__srv__CartesianMove_Request__rosidl_typesupport_introspection_c__CartesianMove_Request_message_member_array,  // message members
  beckhoff_interfaces__srv__CartesianMove_Request__rosidl_typesupport_introspection_c__CartesianMove_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  beckhoff_interfaces__srv__CartesianMove_Request__rosidl_typesupport_introspection_c__CartesianMove_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t beckhoff_interfaces__srv__CartesianMove_Request__rosidl_typesupport_introspection_c__CartesianMove_Request_message_type_support_handle = {
  0,
  &beckhoff_interfaces__srv__CartesianMove_Request__rosidl_typesupport_introspection_c__CartesianMove_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_beckhoff_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, beckhoff_interfaces, srv, CartesianMove_Request)() {
  if (!beckhoff_interfaces__srv__CartesianMove_Request__rosidl_typesupport_introspection_c__CartesianMove_Request_message_type_support_handle.typesupport_identifier) {
    beckhoff_interfaces__srv__CartesianMove_Request__rosidl_typesupport_introspection_c__CartesianMove_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &beckhoff_interfaces__srv__CartesianMove_Request__rosidl_typesupport_introspection_c__CartesianMove_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "beckhoff_interfaces/srv/detail/cartesian_move__rosidl_typesupport_introspection_c.h"
// already included above
// #include "beckhoff_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "beckhoff_interfaces/srv/detail/cartesian_move__functions.h"
// already included above
// #include "beckhoff_interfaces/srv/detail/cartesian_move__struct.h"


// Include directives for member types
// Member `feedback`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void beckhoff_interfaces__srv__CartesianMove_Response__rosidl_typesupport_introspection_c__CartesianMove_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  beckhoff_interfaces__srv__CartesianMove_Response__init(message_memory);
}

void beckhoff_interfaces__srv__CartesianMove_Response__rosidl_typesupport_introspection_c__CartesianMove_Response_fini_function(void * message_memory)
{
  beckhoff_interfaces__srv__CartesianMove_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember beckhoff_interfaces__srv__CartesianMove_Response__rosidl_typesupport_introspection_c__CartesianMove_Response_message_member_array[1] = {
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(beckhoff_interfaces__srv__CartesianMove_Response, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers beckhoff_interfaces__srv__CartesianMove_Response__rosidl_typesupport_introspection_c__CartesianMove_Response_message_members = {
  "beckhoff_interfaces__srv",  // message namespace
  "CartesianMove_Response",  // message name
  1,  // number of fields
  sizeof(beckhoff_interfaces__srv__CartesianMove_Response),
  beckhoff_interfaces__srv__CartesianMove_Response__rosidl_typesupport_introspection_c__CartesianMove_Response_message_member_array,  // message members
  beckhoff_interfaces__srv__CartesianMove_Response__rosidl_typesupport_introspection_c__CartesianMove_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  beckhoff_interfaces__srv__CartesianMove_Response__rosidl_typesupport_introspection_c__CartesianMove_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t beckhoff_interfaces__srv__CartesianMove_Response__rosidl_typesupport_introspection_c__CartesianMove_Response_message_type_support_handle = {
  0,
  &beckhoff_interfaces__srv__CartesianMove_Response__rosidl_typesupport_introspection_c__CartesianMove_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_beckhoff_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, beckhoff_interfaces, srv, CartesianMove_Response)() {
  if (!beckhoff_interfaces__srv__CartesianMove_Response__rosidl_typesupport_introspection_c__CartesianMove_Response_message_type_support_handle.typesupport_identifier) {
    beckhoff_interfaces__srv__CartesianMove_Response__rosidl_typesupport_introspection_c__CartesianMove_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &beckhoff_interfaces__srv__CartesianMove_Response__rosidl_typesupport_introspection_c__CartesianMove_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "beckhoff_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "beckhoff_interfaces/srv/detail/cartesian_move__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers beckhoff_interfaces__srv__detail__cartesian_move__rosidl_typesupport_introspection_c__CartesianMove_service_members = {
  "beckhoff_interfaces__srv",  // service namespace
  "CartesianMove",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // beckhoff_interfaces__srv__detail__cartesian_move__rosidl_typesupport_introspection_c__CartesianMove_Request_message_type_support_handle,
  NULL  // response message
  // beckhoff_interfaces__srv__detail__cartesian_move__rosidl_typesupport_introspection_c__CartesianMove_Response_message_type_support_handle
};

static rosidl_service_type_support_t beckhoff_interfaces__srv__detail__cartesian_move__rosidl_typesupport_introspection_c__CartesianMove_service_type_support_handle = {
  0,
  &beckhoff_interfaces__srv__detail__cartesian_move__rosidl_typesupport_introspection_c__CartesianMove_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, beckhoff_interfaces, srv, CartesianMove_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, beckhoff_interfaces, srv, CartesianMove_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_beckhoff_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, beckhoff_interfaces, srv, CartesianMove)() {
  if (!beckhoff_interfaces__srv__detail__cartesian_move__rosidl_typesupport_introspection_c__CartesianMove_service_type_support_handle.typesupport_identifier) {
    beckhoff_interfaces__srv__detail__cartesian_move__rosidl_typesupport_introspection_c__CartesianMove_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)beckhoff_interfaces__srv__detail__cartesian_move__rosidl_typesupport_introspection_c__CartesianMove_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, beckhoff_interfaces, srv, CartesianMove_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, beckhoff_interfaces, srv, CartesianMove_Response)()->data;
  }

  return &beckhoff_interfaces__srv__detail__cartesian_move__rosidl_typesupport_introspection_c__CartesianMove_service_type_support_handle;
}
