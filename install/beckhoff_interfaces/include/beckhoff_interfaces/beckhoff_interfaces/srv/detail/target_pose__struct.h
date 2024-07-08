// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from beckhoff_interfaces:srv/TargetPose.idl
// generated code does not contain a copyright notice

#ifndef BECKHOFF_INTERFACES__SRV__DETAIL__TARGET_POSE__STRUCT_H_
#define BECKHOFF_INTERFACES__SRV__DETAIL__TARGET_POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/TargetPose in the package beckhoff_interfaces.
typedef struct beckhoff_interfaces__srv__TargetPose_Request
{
  double dx;
  double dy;
  double dz;
  double vel;
} beckhoff_interfaces__srv__TargetPose_Request;

// Struct for a sequence of beckhoff_interfaces__srv__TargetPose_Request.
typedef struct beckhoff_interfaces__srv__TargetPose_Request__Sequence
{
  beckhoff_interfaces__srv__TargetPose_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} beckhoff_interfaces__srv__TargetPose_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'feedback'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/TargetPose in the package beckhoff_interfaces.
typedef struct beckhoff_interfaces__srv__TargetPose_Response
{
  rosidl_runtime_c__String feedback;
} beckhoff_interfaces__srv__TargetPose_Response;

// Struct for a sequence of beckhoff_interfaces__srv__TargetPose_Response.
typedef struct beckhoff_interfaces__srv__TargetPose_Response__Sequence
{
  beckhoff_interfaces__srv__TargetPose_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} beckhoff_interfaces__srv__TargetPose_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BECKHOFF_INTERFACES__SRV__DETAIL__TARGET_POSE__STRUCT_H_
