// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from beckhoff_interfaces:srv/Move.idl
// generated code does not contain a copyright notice

#ifndef BECKHOFF_INTERFACES__SRV__DETAIL__MOVE__STRUCT_H_
#define BECKHOFF_INTERFACES__SRV__DETAIL__MOVE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Move in the package beckhoff_interfaces.
typedef struct beckhoff_interfaces__srv__Move_Request
{
  double x;
  double y;
  double r;
  double velocity;
} beckhoff_interfaces__srv__Move_Request;

// Struct for a sequence of beckhoff_interfaces__srv__Move_Request.
typedef struct beckhoff_interfaces__srv__Move_Request__Sequence
{
  beckhoff_interfaces__srv__Move_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} beckhoff_interfaces__srv__Move_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'err'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Move in the package beckhoff_interfaces.
typedef struct beckhoff_interfaces__srv__Move_Response
{
  rosidl_runtime_c__String err;
  double val_x;
  double val_y;
  double val_r;
} beckhoff_interfaces__srv__Move_Response;

// Struct for a sequence of beckhoff_interfaces__srv__Move_Response.
typedef struct beckhoff_interfaces__srv__Move_Response__Sequence
{
  beckhoff_interfaces__srv__Move_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} beckhoff_interfaces__srv__Move_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BECKHOFF_INTERFACES__SRV__DETAIL__MOVE__STRUCT_H_
