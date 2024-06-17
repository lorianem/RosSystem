// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from beckhoff_interfaces:msg/Position.idl
// generated code does not contain a copyright notice

#ifndef BECKHOFF_INTERFACES__MSG__DETAIL__POSITION__STRUCT_H_
#define BECKHOFF_INTERFACES__MSG__DETAIL__POSITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Position in the package beckhoff_interfaces.
typedef struct beckhoff_interfaces__msg__Position
{
  int64_t x;
  int64_t y;
  int64_t r;
} beckhoff_interfaces__msg__Position;

// Struct for a sequence of beckhoff_interfaces__msg__Position.
typedef struct beckhoff_interfaces__msg__Position__Sequence
{
  beckhoff_interfaces__msg__Position * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} beckhoff_interfaces__msg__Position__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BECKHOFF_INTERFACES__MSG__DETAIL__POSITION__STRUCT_H_
