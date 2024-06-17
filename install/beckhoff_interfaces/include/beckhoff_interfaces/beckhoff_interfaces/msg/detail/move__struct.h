// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from beckhoff_interfaces:msg/Move.idl
// generated code does not contain a copyright notice

#ifndef BECKHOFF_INTERFACES__MSG__DETAIL__MOVE__STRUCT_H_
#define BECKHOFF_INTERFACES__MSG__DETAIL__MOVE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Move in the package beckhoff_interfaces.
typedef struct beckhoff_interfaces__msg__Move
{
  int64_t x;
  int64_t y;
  int64_t r;
  int64_t velocity;
} beckhoff_interfaces__msg__Move;

// Struct for a sequence of beckhoff_interfaces__msg__Move.
typedef struct beckhoff_interfaces__msg__Move__Sequence
{
  beckhoff_interfaces__msg__Move * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} beckhoff_interfaces__msg__Move__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BECKHOFF_INTERFACES__MSG__DETAIL__MOVE__STRUCT_H_
