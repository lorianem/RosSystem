// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from lift_interfaces:action/MoveLift.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "lift_interfaces/action/detail/move_lift__struct.h"
#include "lift_interfaces/action/detail/move_lift__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace lift_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveLift_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveLift_Goal_type_support_ids_t;

static const _MoveLift_Goal_type_support_ids_t _MoveLift_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveLift_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveLift_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveLift_Goal_type_support_symbol_names_t _MoveLift_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, lift_interfaces, action, MoveLift_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lift_interfaces, action, MoveLift_Goal)),
  }
};

typedef struct _MoveLift_Goal_type_support_data_t
{
  void * data[2];
} _MoveLift_Goal_type_support_data_t;

static _MoveLift_Goal_type_support_data_t _MoveLift_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveLift_Goal_message_typesupport_map = {
  2,
  "lift_interfaces",
  &_MoveLift_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_MoveLift_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_MoveLift_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveLift_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveLift_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace lift_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, lift_interfaces, action, MoveLift_Goal)() {
  return &::lift_interfaces::action::rosidl_typesupport_c::MoveLift_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "lift_interfaces/action/detail/move_lift__struct.h"
// already included above
// #include "lift_interfaces/action/detail/move_lift__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace lift_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveLift_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveLift_Result_type_support_ids_t;

static const _MoveLift_Result_type_support_ids_t _MoveLift_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveLift_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveLift_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveLift_Result_type_support_symbol_names_t _MoveLift_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, lift_interfaces, action, MoveLift_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lift_interfaces, action, MoveLift_Result)),
  }
};

typedef struct _MoveLift_Result_type_support_data_t
{
  void * data[2];
} _MoveLift_Result_type_support_data_t;

static _MoveLift_Result_type_support_data_t _MoveLift_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveLift_Result_message_typesupport_map = {
  2,
  "lift_interfaces",
  &_MoveLift_Result_message_typesupport_ids.typesupport_identifier[0],
  &_MoveLift_Result_message_typesupport_symbol_names.symbol_name[0],
  &_MoveLift_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveLift_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveLift_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace lift_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, lift_interfaces, action, MoveLift_Result)() {
  return &::lift_interfaces::action::rosidl_typesupport_c::MoveLift_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "lift_interfaces/action/detail/move_lift__struct.h"
// already included above
// #include "lift_interfaces/action/detail/move_lift__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace lift_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveLift_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveLift_Feedback_type_support_ids_t;

static const _MoveLift_Feedback_type_support_ids_t _MoveLift_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveLift_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveLift_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveLift_Feedback_type_support_symbol_names_t _MoveLift_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, lift_interfaces, action, MoveLift_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lift_interfaces, action, MoveLift_Feedback)),
  }
};

typedef struct _MoveLift_Feedback_type_support_data_t
{
  void * data[2];
} _MoveLift_Feedback_type_support_data_t;

static _MoveLift_Feedback_type_support_data_t _MoveLift_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveLift_Feedback_message_typesupport_map = {
  2,
  "lift_interfaces",
  &_MoveLift_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_MoveLift_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_MoveLift_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveLift_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveLift_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace lift_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, lift_interfaces, action, MoveLift_Feedback)() {
  return &::lift_interfaces::action::rosidl_typesupport_c::MoveLift_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "lift_interfaces/action/detail/move_lift__struct.h"
// already included above
// #include "lift_interfaces/action/detail/move_lift__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace lift_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveLift_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveLift_SendGoal_Request_type_support_ids_t;

static const _MoveLift_SendGoal_Request_type_support_ids_t _MoveLift_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveLift_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveLift_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveLift_SendGoal_Request_type_support_symbol_names_t _MoveLift_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, lift_interfaces, action, MoveLift_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lift_interfaces, action, MoveLift_SendGoal_Request)),
  }
};

typedef struct _MoveLift_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _MoveLift_SendGoal_Request_type_support_data_t;

static _MoveLift_SendGoal_Request_type_support_data_t _MoveLift_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveLift_SendGoal_Request_message_typesupport_map = {
  2,
  "lift_interfaces",
  &_MoveLift_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_MoveLift_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_MoveLift_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveLift_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveLift_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace lift_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, lift_interfaces, action, MoveLift_SendGoal_Request)() {
  return &::lift_interfaces::action::rosidl_typesupport_c::MoveLift_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "lift_interfaces/action/detail/move_lift__struct.h"
// already included above
// #include "lift_interfaces/action/detail/move_lift__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace lift_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveLift_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveLift_SendGoal_Response_type_support_ids_t;

static const _MoveLift_SendGoal_Response_type_support_ids_t _MoveLift_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveLift_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveLift_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveLift_SendGoal_Response_type_support_symbol_names_t _MoveLift_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, lift_interfaces, action, MoveLift_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lift_interfaces, action, MoveLift_SendGoal_Response)),
  }
};

typedef struct _MoveLift_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _MoveLift_SendGoal_Response_type_support_data_t;

static _MoveLift_SendGoal_Response_type_support_data_t _MoveLift_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveLift_SendGoal_Response_message_typesupport_map = {
  2,
  "lift_interfaces",
  &_MoveLift_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_MoveLift_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_MoveLift_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveLift_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveLift_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace lift_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, lift_interfaces, action, MoveLift_SendGoal_Response)() {
  return &::lift_interfaces::action::rosidl_typesupport_c::MoveLift_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "lift_interfaces/action/detail/move_lift__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace lift_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveLift_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveLift_SendGoal_type_support_ids_t;

static const _MoveLift_SendGoal_type_support_ids_t _MoveLift_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveLift_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveLift_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveLift_SendGoal_type_support_symbol_names_t _MoveLift_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, lift_interfaces, action, MoveLift_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lift_interfaces, action, MoveLift_SendGoal)),
  }
};

typedef struct _MoveLift_SendGoal_type_support_data_t
{
  void * data[2];
} _MoveLift_SendGoal_type_support_data_t;

static _MoveLift_SendGoal_type_support_data_t _MoveLift_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveLift_SendGoal_service_typesupport_map = {
  2,
  "lift_interfaces",
  &_MoveLift_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_MoveLift_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_MoveLift_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t MoveLift_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveLift_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace lift_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, lift_interfaces, action, MoveLift_SendGoal)() {
  return &::lift_interfaces::action::rosidl_typesupport_c::MoveLift_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "lift_interfaces/action/detail/move_lift__struct.h"
// already included above
// #include "lift_interfaces/action/detail/move_lift__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace lift_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveLift_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveLift_GetResult_Request_type_support_ids_t;

static const _MoveLift_GetResult_Request_type_support_ids_t _MoveLift_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveLift_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveLift_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveLift_GetResult_Request_type_support_symbol_names_t _MoveLift_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, lift_interfaces, action, MoveLift_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lift_interfaces, action, MoveLift_GetResult_Request)),
  }
};

typedef struct _MoveLift_GetResult_Request_type_support_data_t
{
  void * data[2];
} _MoveLift_GetResult_Request_type_support_data_t;

static _MoveLift_GetResult_Request_type_support_data_t _MoveLift_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveLift_GetResult_Request_message_typesupport_map = {
  2,
  "lift_interfaces",
  &_MoveLift_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_MoveLift_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_MoveLift_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveLift_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveLift_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace lift_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, lift_interfaces, action, MoveLift_GetResult_Request)() {
  return &::lift_interfaces::action::rosidl_typesupport_c::MoveLift_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "lift_interfaces/action/detail/move_lift__struct.h"
// already included above
// #include "lift_interfaces/action/detail/move_lift__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace lift_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveLift_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveLift_GetResult_Response_type_support_ids_t;

static const _MoveLift_GetResult_Response_type_support_ids_t _MoveLift_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveLift_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveLift_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveLift_GetResult_Response_type_support_symbol_names_t _MoveLift_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, lift_interfaces, action, MoveLift_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lift_interfaces, action, MoveLift_GetResult_Response)),
  }
};

typedef struct _MoveLift_GetResult_Response_type_support_data_t
{
  void * data[2];
} _MoveLift_GetResult_Response_type_support_data_t;

static _MoveLift_GetResult_Response_type_support_data_t _MoveLift_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveLift_GetResult_Response_message_typesupport_map = {
  2,
  "lift_interfaces",
  &_MoveLift_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_MoveLift_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_MoveLift_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveLift_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveLift_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace lift_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, lift_interfaces, action, MoveLift_GetResult_Response)() {
  return &::lift_interfaces::action::rosidl_typesupport_c::MoveLift_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "lift_interfaces/action/detail/move_lift__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace lift_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveLift_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveLift_GetResult_type_support_ids_t;

static const _MoveLift_GetResult_type_support_ids_t _MoveLift_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveLift_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveLift_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveLift_GetResult_type_support_symbol_names_t _MoveLift_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, lift_interfaces, action, MoveLift_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lift_interfaces, action, MoveLift_GetResult)),
  }
};

typedef struct _MoveLift_GetResult_type_support_data_t
{
  void * data[2];
} _MoveLift_GetResult_type_support_data_t;

static _MoveLift_GetResult_type_support_data_t _MoveLift_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveLift_GetResult_service_typesupport_map = {
  2,
  "lift_interfaces",
  &_MoveLift_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_MoveLift_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_MoveLift_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t MoveLift_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveLift_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace lift_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, lift_interfaces, action, MoveLift_GetResult)() {
  return &::lift_interfaces::action::rosidl_typesupport_c::MoveLift_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "lift_interfaces/action/detail/move_lift__struct.h"
// already included above
// #include "lift_interfaces/action/detail/move_lift__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace lift_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveLift_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveLift_FeedbackMessage_type_support_ids_t;

static const _MoveLift_FeedbackMessage_type_support_ids_t _MoveLift_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveLift_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveLift_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveLift_FeedbackMessage_type_support_symbol_names_t _MoveLift_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, lift_interfaces, action, MoveLift_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lift_interfaces, action, MoveLift_FeedbackMessage)),
  }
};

typedef struct _MoveLift_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _MoveLift_FeedbackMessage_type_support_data_t;

static _MoveLift_FeedbackMessage_type_support_data_t _MoveLift_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveLift_FeedbackMessage_message_typesupport_map = {
  2,
  "lift_interfaces",
  &_MoveLift_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_MoveLift_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_MoveLift_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveLift_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveLift_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace lift_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, lift_interfaces, action, MoveLift_FeedbackMessage)() {
  return &::lift_interfaces::action::rosidl_typesupport_c::MoveLift_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "lift_interfaces/action/move_lift.h"
// already included above
// #include "lift_interfaces/action/detail/move_lift__type_support.h"

static rosidl_action_type_support_t _lift_interfaces__action__MoveLift__typesupport_c;

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, lift_interfaces, action, MoveLift)()
{
  // Thread-safe by always writing the same values to the static struct
  _lift_interfaces__action__MoveLift__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, lift_interfaces, action, MoveLift_SendGoal)();
  _lift_interfaces__action__MoveLift__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, lift_interfaces, action, MoveLift_GetResult)();
  _lift_interfaces__action__MoveLift__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _lift_interfaces__action__MoveLift__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, lift_interfaces, action, MoveLift_FeedbackMessage)();
  _lift_interfaces__action__MoveLift__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_lift_interfaces__action__MoveLift__typesupport_c;
}

#ifdef __cplusplus
}
#endif
