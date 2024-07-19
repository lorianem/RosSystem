// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lift_interfaces:srv/PositionLift.idl
// generated code does not contain a copyright notice

#ifndef LIFT_INTERFACES__SRV__DETAIL__POSITION_LIFT__STRUCT_H_
#define LIFT_INTERFACES__SRV__DETAIL__POSITION_LIFT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/PositionLift in the package lift_interfaces.
typedef struct lift_interfaces__srv__PositionLift_Request
{
  uint8_t structure_needs_at_least_one_member;
} lift_interfaces__srv__PositionLift_Request;

// Struct for a sequence of lift_interfaces__srv__PositionLift_Request.
typedef struct lift_interfaces__srv__PositionLift_Request__Sequence
{
  lift_interfaces__srv__PositionLift_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lift_interfaces__srv__PositionLift_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/PositionLift in the package lift_interfaces.
typedef struct lift_interfaces__srv__PositionLift_Response
{
  uint16_t position;
} lift_interfaces__srv__PositionLift_Response;

// Struct for a sequence of lift_interfaces__srv__PositionLift_Response.
typedef struct lift_interfaces__srv__PositionLift_Response__Sequence
{
  lift_interfaces__srv__PositionLift_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lift_interfaces__srv__PositionLift_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LIFT_INTERFACES__SRV__DETAIL__POSITION_LIFT__STRUCT_H_
