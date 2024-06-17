// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from beckhoff_interfaces:msg/Move.idl
// generated code does not contain a copyright notice
#include "beckhoff_interfaces/msg/detail/move__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
beckhoff_interfaces__msg__Move__init(beckhoff_interfaces__msg__Move * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // r
  // velocity
  return true;
}

void
beckhoff_interfaces__msg__Move__fini(beckhoff_interfaces__msg__Move * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // r
  // velocity
}

bool
beckhoff_interfaces__msg__Move__are_equal(const beckhoff_interfaces__msg__Move * lhs, const beckhoff_interfaces__msg__Move * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // r
  if (lhs->r != rhs->r) {
    return false;
  }
  // velocity
  if (lhs->velocity != rhs->velocity) {
    return false;
  }
  return true;
}

bool
beckhoff_interfaces__msg__Move__copy(
  const beckhoff_interfaces__msg__Move * input,
  beckhoff_interfaces__msg__Move * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // r
  output->r = input->r;
  // velocity
  output->velocity = input->velocity;
  return true;
}

beckhoff_interfaces__msg__Move *
beckhoff_interfaces__msg__Move__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  beckhoff_interfaces__msg__Move * msg = (beckhoff_interfaces__msg__Move *)allocator.allocate(sizeof(beckhoff_interfaces__msg__Move), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(beckhoff_interfaces__msg__Move));
  bool success = beckhoff_interfaces__msg__Move__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
beckhoff_interfaces__msg__Move__destroy(beckhoff_interfaces__msg__Move * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    beckhoff_interfaces__msg__Move__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
beckhoff_interfaces__msg__Move__Sequence__init(beckhoff_interfaces__msg__Move__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  beckhoff_interfaces__msg__Move * data = NULL;

  if (size) {
    data = (beckhoff_interfaces__msg__Move *)allocator.zero_allocate(size, sizeof(beckhoff_interfaces__msg__Move), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = beckhoff_interfaces__msg__Move__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        beckhoff_interfaces__msg__Move__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
beckhoff_interfaces__msg__Move__Sequence__fini(beckhoff_interfaces__msg__Move__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      beckhoff_interfaces__msg__Move__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

beckhoff_interfaces__msg__Move__Sequence *
beckhoff_interfaces__msg__Move__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  beckhoff_interfaces__msg__Move__Sequence * array = (beckhoff_interfaces__msg__Move__Sequence *)allocator.allocate(sizeof(beckhoff_interfaces__msg__Move__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = beckhoff_interfaces__msg__Move__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
beckhoff_interfaces__msg__Move__Sequence__destroy(beckhoff_interfaces__msg__Move__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    beckhoff_interfaces__msg__Move__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
beckhoff_interfaces__msg__Move__Sequence__are_equal(const beckhoff_interfaces__msg__Move__Sequence * lhs, const beckhoff_interfaces__msg__Move__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!beckhoff_interfaces__msg__Move__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
beckhoff_interfaces__msg__Move__Sequence__copy(
  const beckhoff_interfaces__msg__Move__Sequence * input,
  beckhoff_interfaces__msg__Move__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(beckhoff_interfaces__msg__Move);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    beckhoff_interfaces__msg__Move * data =
      (beckhoff_interfaces__msg__Move *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!beckhoff_interfaces__msg__Move__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          beckhoff_interfaces__msg__Move__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!beckhoff_interfaces__msg__Move__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
