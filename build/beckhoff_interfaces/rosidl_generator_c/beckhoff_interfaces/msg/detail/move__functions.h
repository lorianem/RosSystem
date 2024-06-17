// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from beckhoff_interfaces:msg/Move.idl
// generated code does not contain a copyright notice

#ifndef BECKHOFF_INTERFACES__MSG__DETAIL__MOVE__FUNCTIONS_H_
#define BECKHOFF_INTERFACES__MSG__DETAIL__MOVE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "beckhoff_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "beckhoff_interfaces/msg/detail/move__struct.h"

/// Initialize msg/Move message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * beckhoff_interfaces__msg__Move
 * )) before or use
 * beckhoff_interfaces__msg__Move__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_beckhoff_interfaces
bool
beckhoff_interfaces__msg__Move__init(beckhoff_interfaces__msg__Move * msg);

/// Finalize msg/Move message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_beckhoff_interfaces
void
beckhoff_interfaces__msg__Move__fini(beckhoff_interfaces__msg__Move * msg);

/// Create msg/Move message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * beckhoff_interfaces__msg__Move__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_beckhoff_interfaces
beckhoff_interfaces__msg__Move *
beckhoff_interfaces__msg__Move__create();

/// Destroy msg/Move message.
/**
 * It calls
 * beckhoff_interfaces__msg__Move__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_beckhoff_interfaces
void
beckhoff_interfaces__msg__Move__destroy(beckhoff_interfaces__msg__Move * msg);

/// Check for msg/Move message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_beckhoff_interfaces
bool
beckhoff_interfaces__msg__Move__are_equal(const beckhoff_interfaces__msg__Move * lhs, const beckhoff_interfaces__msg__Move * rhs);

/// Copy a msg/Move message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_beckhoff_interfaces
bool
beckhoff_interfaces__msg__Move__copy(
  const beckhoff_interfaces__msg__Move * input,
  beckhoff_interfaces__msg__Move * output);

/// Initialize array of msg/Move messages.
/**
 * It allocates the memory for the number of elements and calls
 * beckhoff_interfaces__msg__Move__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_beckhoff_interfaces
bool
beckhoff_interfaces__msg__Move__Sequence__init(beckhoff_interfaces__msg__Move__Sequence * array, size_t size);

/// Finalize array of msg/Move messages.
/**
 * It calls
 * beckhoff_interfaces__msg__Move__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_beckhoff_interfaces
void
beckhoff_interfaces__msg__Move__Sequence__fini(beckhoff_interfaces__msg__Move__Sequence * array);

/// Create array of msg/Move messages.
/**
 * It allocates the memory for the array and calls
 * beckhoff_interfaces__msg__Move__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_beckhoff_interfaces
beckhoff_interfaces__msg__Move__Sequence *
beckhoff_interfaces__msg__Move__Sequence__create(size_t size);

/// Destroy array of msg/Move messages.
/**
 * It calls
 * beckhoff_interfaces__msg__Move__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_beckhoff_interfaces
void
beckhoff_interfaces__msg__Move__Sequence__destroy(beckhoff_interfaces__msg__Move__Sequence * array);

/// Check for msg/Move message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_beckhoff_interfaces
bool
beckhoff_interfaces__msg__Move__Sequence__are_equal(const beckhoff_interfaces__msg__Move__Sequence * lhs, const beckhoff_interfaces__msg__Move__Sequence * rhs);

/// Copy an array of msg/Move messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_beckhoff_interfaces
bool
beckhoff_interfaces__msg__Move__Sequence__copy(
  const beckhoff_interfaces__msg__Move__Sequence * input,
  beckhoff_interfaces__msg__Move__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // BECKHOFF_INTERFACES__MSG__DETAIL__MOVE__FUNCTIONS_H_