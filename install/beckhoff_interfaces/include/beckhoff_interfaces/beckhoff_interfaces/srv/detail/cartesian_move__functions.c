// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from beckhoff_interfaces:srv/CartesianMove.idl
// generated code does not contain a copyright notice
#include "beckhoff_interfaces/srv/detail/cartesian_move__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
beckhoff_interfaces__srv__CartesianMove_Request__init(beckhoff_interfaces__srv__CartesianMove_Request * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // z
  // vel_x
  // vel_y
  // vel_z
  // acc_x
  // acc_y
  // acc_z
  return true;
}

void
beckhoff_interfaces__srv__CartesianMove_Request__fini(beckhoff_interfaces__srv__CartesianMove_Request * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // z
  // vel_x
  // vel_y
  // vel_z
  // acc_x
  // acc_y
  // acc_z
}

bool
beckhoff_interfaces__srv__CartesianMove_Request__are_equal(const beckhoff_interfaces__srv__CartesianMove_Request * lhs, const beckhoff_interfaces__srv__CartesianMove_Request * rhs)
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
  // z
  if (lhs->z != rhs->z) {
    return false;
  }
  // vel_x
  if (lhs->vel_x != rhs->vel_x) {
    return false;
  }
  // vel_y
  if (lhs->vel_y != rhs->vel_y) {
    return false;
  }
  // vel_z
  if (lhs->vel_z != rhs->vel_z) {
    return false;
  }
  // acc_x
  if (lhs->acc_x != rhs->acc_x) {
    return false;
  }
  // acc_y
  if (lhs->acc_y != rhs->acc_y) {
    return false;
  }
  // acc_z
  if (lhs->acc_z != rhs->acc_z) {
    return false;
  }
  return true;
}

bool
beckhoff_interfaces__srv__CartesianMove_Request__copy(
  const beckhoff_interfaces__srv__CartesianMove_Request * input,
  beckhoff_interfaces__srv__CartesianMove_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // z
  output->z = input->z;
  // vel_x
  output->vel_x = input->vel_x;
  // vel_y
  output->vel_y = input->vel_y;
  // vel_z
  output->vel_z = input->vel_z;
  // acc_x
  output->acc_x = input->acc_x;
  // acc_y
  output->acc_y = input->acc_y;
  // acc_z
  output->acc_z = input->acc_z;
  return true;
}

beckhoff_interfaces__srv__CartesianMove_Request *
beckhoff_interfaces__srv__CartesianMove_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  beckhoff_interfaces__srv__CartesianMove_Request * msg = (beckhoff_interfaces__srv__CartesianMove_Request *)allocator.allocate(sizeof(beckhoff_interfaces__srv__CartesianMove_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(beckhoff_interfaces__srv__CartesianMove_Request));
  bool success = beckhoff_interfaces__srv__CartesianMove_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
beckhoff_interfaces__srv__CartesianMove_Request__destroy(beckhoff_interfaces__srv__CartesianMove_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    beckhoff_interfaces__srv__CartesianMove_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
beckhoff_interfaces__srv__CartesianMove_Request__Sequence__init(beckhoff_interfaces__srv__CartesianMove_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  beckhoff_interfaces__srv__CartesianMove_Request * data = NULL;

  if (size) {
    data = (beckhoff_interfaces__srv__CartesianMove_Request *)allocator.zero_allocate(size, sizeof(beckhoff_interfaces__srv__CartesianMove_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = beckhoff_interfaces__srv__CartesianMove_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        beckhoff_interfaces__srv__CartesianMove_Request__fini(&data[i - 1]);
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
beckhoff_interfaces__srv__CartesianMove_Request__Sequence__fini(beckhoff_interfaces__srv__CartesianMove_Request__Sequence * array)
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
      beckhoff_interfaces__srv__CartesianMove_Request__fini(&array->data[i]);
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

beckhoff_interfaces__srv__CartesianMove_Request__Sequence *
beckhoff_interfaces__srv__CartesianMove_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  beckhoff_interfaces__srv__CartesianMove_Request__Sequence * array = (beckhoff_interfaces__srv__CartesianMove_Request__Sequence *)allocator.allocate(sizeof(beckhoff_interfaces__srv__CartesianMove_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = beckhoff_interfaces__srv__CartesianMove_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
beckhoff_interfaces__srv__CartesianMove_Request__Sequence__destroy(beckhoff_interfaces__srv__CartesianMove_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    beckhoff_interfaces__srv__CartesianMove_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
beckhoff_interfaces__srv__CartesianMove_Request__Sequence__are_equal(const beckhoff_interfaces__srv__CartesianMove_Request__Sequence * lhs, const beckhoff_interfaces__srv__CartesianMove_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!beckhoff_interfaces__srv__CartesianMove_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
beckhoff_interfaces__srv__CartesianMove_Request__Sequence__copy(
  const beckhoff_interfaces__srv__CartesianMove_Request__Sequence * input,
  beckhoff_interfaces__srv__CartesianMove_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(beckhoff_interfaces__srv__CartesianMove_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    beckhoff_interfaces__srv__CartesianMove_Request * data =
      (beckhoff_interfaces__srv__CartesianMove_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!beckhoff_interfaces__srv__CartesianMove_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          beckhoff_interfaces__srv__CartesianMove_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!beckhoff_interfaces__srv__CartesianMove_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `feedback`
#include "rosidl_runtime_c/string_functions.h"

bool
beckhoff_interfaces__srv__CartesianMove_Response__init(beckhoff_interfaces__srv__CartesianMove_Response * msg)
{
  if (!msg) {
    return false;
  }
  // feedback
  if (!rosidl_runtime_c__String__init(&msg->feedback)) {
    beckhoff_interfaces__srv__CartesianMove_Response__fini(msg);
    return false;
  }
  return true;
}

void
beckhoff_interfaces__srv__CartesianMove_Response__fini(beckhoff_interfaces__srv__CartesianMove_Response * msg)
{
  if (!msg) {
    return;
  }
  // feedback
  rosidl_runtime_c__String__fini(&msg->feedback);
}

bool
beckhoff_interfaces__srv__CartesianMove_Response__are_equal(const beckhoff_interfaces__srv__CartesianMove_Response * lhs, const beckhoff_interfaces__srv__CartesianMove_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // feedback
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
beckhoff_interfaces__srv__CartesianMove_Response__copy(
  const beckhoff_interfaces__srv__CartesianMove_Response * input,
  beckhoff_interfaces__srv__CartesianMove_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // feedback
  if (!rosidl_runtime_c__String__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

beckhoff_interfaces__srv__CartesianMove_Response *
beckhoff_interfaces__srv__CartesianMove_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  beckhoff_interfaces__srv__CartesianMove_Response * msg = (beckhoff_interfaces__srv__CartesianMove_Response *)allocator.allocate(sizeof(beckhoff_interfaces__srv__CartesianMove_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(beckhoff_interfaces__srv__CartesianMove_Response));
  bool success = beckhoff_interfaces__srv__CartesianMove_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
beckhoff_interfaces__srv__CartesianMove_Response__destroy(beckhoff_interfaces__srv__CartesianMove_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    beckhoff_interfaces__srv__CartesianMove_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
beckhoff_interfaces__srv__CartesianMove_Response__Sequence__init(beckhoff_interfaces__srv__CartesianMove_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  beckhoff_interfaces__srv__CartesianMove_Response * data = NULL;

  if (size) {
    data = (beckhoff_interfaces__srv__CartesianMove_Response *)allocator.zero_allocate(size, sizeof(beckhoff_interfaces__srv__CartesianMove_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = beckhoff_interfaces__srv__CartesianMove_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        beckhoff_interfaces__srv__CartesianMove_Response__fini(&data[i - 1]);
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
beckhoff_interfaces__srv__CartesianMove_Response__Sequence__fini(beckhoff_interfaces__srv__CartesianMove_Response__Sequence * array)
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
      beckhoff_interfaces__srv__CartesianMove_Response__fini(&array->data[i]);
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

beckhoff_interfaces__srv__CartesianMove_Response__Sequence *
beckhoff_interfaces__srv__CartesianMove_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  beckhoff_interfaces__srv__CartesianMove_Response__Sequence * array = (beckhoff_interfaces__srv__CartesianMove_Response__Sequence *)allocator.allocate(sizeof(beckhoff_interfaces__srv__CartesianMove_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = beckhoff_interfaces__srv__CartesianMove_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
beckhoff_interfaces__srv__CartesianMove_Response__Sequence__destroy(beckhoff_interfaces__srv__CartesianMove_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    beckhoff_interfaces__srv__CartesianMove_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
beckhoff_interfaces__srv__CartesianMove_Response__Sequence__are_equal(const beckhoff_interfaces__srv__CartesianMove_Response__Sequence * lhs, const beckhoff_interfaces__srv__CartesianMove_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!beckhoff_interfaces__srv__CartesianMove_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
beckhoff_interfaces__srv__CartesianMove_Response__Sequence__copy(
  const beckhoff_interfaces__srv__CartesianMove_Response__Sequence * input,
  beckhoff_interfaces__srv__CartesianMove_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(beckhoff_interfaces__srv__CartesianMove_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    beckhoff_interfaces__srv__CartesianMove_Response * data =
      (beckhoff_interfaces__srv__CartesianMove_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!beckhoff_interfaces__srv__CartesianMove_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          beckhoff_interfaces__srv__CartesianMove_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!beckhoff_interfaces__srv__CartesianMove_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
