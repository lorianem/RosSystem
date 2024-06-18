// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from beckhoff_interfaces:action/Move.idl
// generated code does not contain a copyright notice
#include "beckhoff_interfaces/action/detail/move__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
beckhoff_interfaces__action__Move_Goal__init(beckhoff_interfaces__action__Move_Goal * msg)
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
beckhoff_interfaces__action__Move_Goal__fini(beckhoff_interfaces__action__Move_Goal * msg)
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
beckhoff_interfaces__action__Move_Goal__are_equal(const beckhoff_interfaces__action__Move_Goal * lhs, const beckhoff_interfaces__action__Move_Goal * rhs)
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
beckhoff_interfaces__action__Move_Goal__copy(
  const beckhoff_interfaces__action__Move_Goal * input,
  beckhoff_interfaces__action__Move_Goal * output)
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

beckhoff_interfaces__action__Move_Goal *
beckhoff_interfaces__action__Move_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  beckhoff_interfaces__action__Move_Goal * msg = (beckhoff_interfaces__action__Move_Goal *)allocator.allocate(sizeof(beckhoff_interfaces__action__Move_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(beckhoff_interfaces__action__Move_Goal));
  bool success = beckhoff_interfaces__action__Move_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
beckhoff_interfaces__action__Move_Goal__destroy(beckhoff_interfaces__action__Move_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    beckhoff_interfaces__action__Move_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
beckhoff_interfaces__action__Move_Goal__Sequence__init(beckhoff_interfaces__action__Move_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  beckhoff_interfaces__action__Move_Goal * data = NULL;

  if (size) {
    data = (beckhoff_interfaces__action__Move_Goal *)allocator.zero_allocate(size, sizeof(beckhoff_interfaces__action__Move_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = beckhoff_interfaces__action__Move_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        beckhoff_interfaces__action__Move_Goal__fini(&data[i - 1]);
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
beckhoff_interfaces__action__Move_Goal__Sequence__fini(beckhoff_interfaces__action__Move_Goal__Sequence * array)
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
      beckhoff_interfaces__action__Move_Goal__fini(&array->data[i]);
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

beckhoff_interfaces__action__Move_Goal__Sequence *
beckhoff_interfaces__action__Move_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  beckhoff_interfaces__action__Move_Goal__Sequence * array = (beckhoff_interfaces__action__Move_Goal__Sequence *)allocator.allocate(sizeof(beckhoff_interfaces__action__Move_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = beckhoff_interfaces__action__Move_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
beckhoff_interfaces__action__Move_Goal__Sequence__destroy(beckhoff_interfaces__action__Move_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    beckhoff_interfaces__action__Move_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
beckhoff_interfaces__action__Move_Goal__Sequence__are_equal(const beckhoff_interfaces__action__Move_Goal__Sequence * lhs, const beckhoff_interfaces__action__Move_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!beckhoff_interfaces__action__Move_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
beckhoff_interfaces__action__Move_Goal__Sequence__copy(
  const beckhoff_interfaces__action__Move_Goal__Sequence * input,
  beckhoff_interfaces__action__Move_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(beckhoff_interfaces__action__Move_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    beckhoff_interfaces__action__Move_Goal * data =
      (beckhoff_interfaces__action__Move_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!beckhoff_interfaces__action__Move_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          beckhoff_interfaces__action__Move_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!beckhoff_interfaces__action__Move_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
beckhoff_interfaces__action__Move_Result__init(beckhoff_interfaces__action__Move_Result * msg)
{
  if (!msg) {
    return false;
  }
  // pos_x
  // pos_y
  // pos_r
  return true;
}

void
beckhoff_interfaces__action__Move_Result__fini(beckhoff_interfaces__action__Move_Result * msg)
{
  if (!msg) {
    return;
  }
  // pos_x
  // pos_y
  // pos_r
}

bool
beckhoff_interfaces__action__Move_Result__are_equal(const beckhoff_interfaces__action__Move_Result * lhs, const beckhoff_interfaces__action__Move_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pos_x
  if (lhs->pos_x != rhs->pos_x) {
    return false;
  }
  // pos_y
  if (lhs->pos_y != rhs->pos_y) {
    return false;
  }
  // pos_r
  if (lhs->pos_r != rhs->pos_r) {
    return false;
  }
  return true;
}

bool
beckhoff_interfaces__action__Move_Result__copy(
  const beckhoff_interfaces__action__Move_Result * input,
  beckhoff_interfaces__action__Move_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // pos_x
  output->pos_x = input->pos_x;
  // pos_y
  output->pos_y = input->pos_y;
  // pos_r
  output->pos_r = input->pos_r;
  return true;
}

beckhoff_interfaces__action__Move_Result *
beckhoff_interfaces__action__Move_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  beckhoff_interfaces__action__Move_Result * msg = (beckhoff_interfaces__action__Move_Result *)allocator.allocate(sizeof(beckhoff_interfaces__action__Move_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(beckhoff_interfaces__action__Move_Result));
  bool success = beckhoff_interfaces__action__Move_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
beckhoff_interfaces__action__Move_Result__destroy(beckhoff_interfaces__action__Move_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    beckhoff_interfaces__action__Move_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
beckhoff_interfaces__action__Move_Result__Sequence__init(beckhoff_interfaces__action__Move_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  beckhoff_interfaces__action__Move_Result * data = NULL;

  if (size) {
    data = (beckhoff_interfaces__action__Move_Result *)allocator.zero_allocate(size, sizeof(beckhoff_interfaces__action__Move_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = beckhoff_interfaces__action__Move_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        beckhoff_interfaces__action__Move_Result__fini(&data[i - 1]);
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
beckhoff_interfaces__action__Move_Result__Sequence__fini(beckhoff_interfaces__action__Move_Result__Sequence * array)
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
      beckhoff_interfaces__action__Move_Result__fini(&array->data[i]);
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

beckhoff_interfaces__action__Move_Result__Sequence *
beckhoff_interfaces__action__Move_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  beckhoff_interfaces__action__Move_Result__Sequence * array = (beckhoff_interfaces__action__Move_Result__Sequence *)allocator.allocate(sizeof(beckhoff_interfaces__action__Move_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = beckhoff_interfaces__action__Move_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
beckhoff_interfaces__action__Move_Result__Sequence__destroy(beckhoff_interfaces__action__Move_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    beckhoff_interfaces__action__Move_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
beckhoff_interfaces__action__Move_Result__Sequence__are_equal(const beckhoff_interfaces__action__Move_Result__Sequence * lhs, const beckhoff_interfaces__action__Move_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!beckhoff_interfaces__action__Move_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
beckhoff_interfaces__action__Move_Result__Sequence__copy(
  const beckhoff_interfaces__action__Move_Result__Sequence * input,
  beckhoff_interfaces__action__Move_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(beckhoff_interfaces__action__Move_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    beckhoff_interfaces__action__Move_Result * data =
      (beckhoff_interfaces__action__Move_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!beckhoff_interfaces__action__Move_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          beckhoff_interfaces__action__Move_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!beckhoff_interfaces__action__Move_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `err`
#include "rosidl_runtime_c/string_functions.h"

bool
beckhoff_interfaces__action__Move_Feedback__init(beckhoff_interfaces__action__Move_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // err
  if (!rosidl_runtime_c__String__init(&msg->err)) {
    beckhoff_interfaces__action__Move_Feedback__fini(msg);
    return false;
  }
  // val_x
  // val_y
  // val_r
  return true;
}

void
beckhoff_interfaces__action__Move_Feedback__fini(beckhoff_interfaces__action__Move_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // err
  rosidl_runtime_c__String__fini(&msg->err);
  // val_x
  // val_y
  // val_r
}

bool
beckhoff_interfaces__action__Move_Feedback__are_equal(const beckhoff_interfaces__action__Move_Feedback * lhs, const beckhoff_interfaces__action__Move_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // err
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->err), &(rhs->err)))
  {
    return false;
  }
  // val_x
  if (lhs->val_x != rhs->val_x) {
    return false;
  }
  // val_y
  if (lhs->val_y != rhs->val_y) {
    return false;
  }
  // val_r
  if (lhs->val_r != rhs->val_r) {
    return false;
  }
  return true;
}

bool
beckhoff_interfaces__action__Move_Feedback__copy(
  const beckhoff_interfaces__action__Move_Feedback * input,
  beckhoff_interfaces__action__Move_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // err
  if (!rosidl_runtime_c__String__copy(
      &(input->err), &(output->err)))
  {
    return false;
  }
  // val_x
  output->val_x = input->val_x;
  // val_y
  output->val_y = input->val_y;
  // val_r
  output->val_r = input->val_r;
  return true;
}

beckhoff_interfaces__action__Move_Feedback *
beckhoff_interfaces__action__Move_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  beckhoff_interfaces__action__Move_Feedback * msg = (beckhoff_interfaces__action__Move_Feedback *)allocator.allocate(sizeof(beckhoff_interfaces__action__Move_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(beckhoff_interfaces__action__Move_Feedback));
  bool success = beckhoff_interfaces__action__Move_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
beckhoff_interfaces__action__Move_Feedback__destroy(beckhoff_interfaces__action__Move_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    beckhoff_interfaces__action__Move_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
beckhoff_interfaces__action__Move_Feedback__Sequence__init(beckhoff_interfaces__action__Move_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  beckhoff_interfaces__action__Move_Feedback * data = NULL;

  if (size) {
    data = (beckhoff_interfaces__action__Move_Feedback *)allocator.zero_allocate(size, sizeof(beckhoff_interfaces__action__Move_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = beckhoff_interfaces__action__Move_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        beckhoff_interfaces__action__Move_Feedback__fini(&data[i - 1]);
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
beckhoff_interfaces__action__Move_Feedback__Sequence__fini(beckhoff_interfaces__action__Move_Feedback__Sequence * array)
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
      beckhoff_interfaces__action__Move_Feedback__fini(&array->data[i]);
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

beckhoff_interfaces__action__Move_Feedback__Sequence *
beckhoff_interfaces__action__Move_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  beckhoff_interfaces__action__Move_Feedback__Sequence * array = (beckhoff_interfaces__action__Move_Feedback__Sequence *)allocator.allocate(sizeof(beckhoff_interfaces__action__Move_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = beckhoff_interfaces__action__Move_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
beckhoff_interfaces__action__Move_Feedback__Sequence__destroy(beckhoff_interfaces__action__Move_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    beckhoff_interfaces__action__Move_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
beckhoff_interfaces__action__Move_Feedback__Sequence__are_equal(const beckhoff_interfaces__action__Move_Feedback__Sequence * lhs, const beckhoff_interfaces__action__Move_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!beckhoff_interfaces__action__Move_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
beckhoff_interfaces__action__Move_Feedback__Sequence__copy(
  const beckhoff_interfaces__action__Move_Feedback__Sequence * input,
  beckhoff_interfaces__action__Move_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(beckhoff_interfaces__action__Move_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    beckhoff_interfaces__action__Move_Feedback * data =
      (beckhoff_interfaces__action__Move_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!beckhoff_interfaces__action__Move_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          beckhoff_interfaces__action__Move_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!beckhoff_interfaces__action__Move_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "beckhoff_interfaces/action/detail/move__functions.h"

bool
beckhoff_interfaces__action__Move_SendGoal_Request__init(beckhoff_interfaces__action__Move_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    beckhoff_interfaces__action__Move_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!beckhoff_interfaces__action__Move_Goal__init(&msg->goal)) {
    beckhoff_interfaces__action__Move_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
beckhoff_interfaces__action__Move_SendGoal_Request__fini(beckhoff_interfaces__action__Move_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  beckhoff_interfaces__action__Move_Goal__fini(&msg->goal);
}

bool
beckhoff_interfaces__action__Move_SendGoal_Request__are_equal(const beckhoff_interfaces__action__Move_SendGoal_Request * lhs, const beckhoff_interfaces__action__Move_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!beckhoff_interfaces__action__Move_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
beckhoff_interfaces__action__Move_SendGoal_Request__copy(
  const beckhoff_interfaces__action__Move_SendGoal_Request * input,
  beckhoff_interfaces__action__Move_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!beckhoff_interfaces__action__Move_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

beckhoff_interfaces__action__Move_SendGoal_Request *
beckhoff_interfaces__action__Move_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  beckhoff_interfaces__action__Move_SendGoal_Request * msg = (beckhoff_interfaces__action__Move_SendGoal_Request *)allocator.allocate(sizeof(beckhoff_interfaces__action__Move_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(beckhoff_interfaces__action__Move_SendGoal_Request));
  bool success = beckhoff_interfaces__action__Move_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
beckhoff_interfaces__action__Move_SendGoal_Request__destroy(beckhoff_interfaces__action__Move_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    beckhoff_interfaces__action__Move_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
beckhoff_interfaces__action__Move_SendGoal_Request__Sequence__init(beckhoff_interfaces__action__Move_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  beckhoff_interfaces__action__Move_SendGoal_Request * data = NULL;

  if (size) {
    data = (beckhoff_interfaces__action__Move_SendGoal_Request *)allocator.zero_allocate(size, sizeof(beckhoff_interfaces__action__Move_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = beckhoff_interfaces__action__Move_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        beckhoff_interfaces__action__Move_SendGoal_Request__fini(&data[i - 1]);
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
beckhoff_interfaces__action__Move_SendGoal_Request__Sequence__fini(beckhoff_interfaces__action__Move_SendGoal_Request__Sequence * array)
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
      beckhoff_interfaces__action__Move_SendGoal_Request__fini(&array->data[i]);
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

beckhoff_interfaces__action__Move_SendGoal_Request__Sequence *
beckhoff_interfaces__action__Move_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  beckhoff_interfaces__action__Move_SendGoal_Request__Sequence * array = (beckhoff_interfaces__action__Move_SendGoal_Request__Sequence *)allocator.allocate(sizeof(beckhoff_interfaces__action__Move_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = beckhoff_interfaces__action__Move_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
beckhoff_interfaces__action__Move_SendGoal_Request__Sequence__destroy(beckhoff_interfaces__action__Move_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    beckhoff_interfaces__action__Move_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
beckhoff_interfaces__action__Move_SendGoal_Request__Sequence__are_equal(const beckhoff_interfaces__action__Move_SendGoal_Request__Sequence * lhs, const beckhoff_interfaces__action__Move_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!beckhoff_interfaces__action__Move_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
beckhoff_interfaces__action__Move_SendGoal_Request__Sequence__copy(
  const beckhoff_interfaces__action__Move_SendGoal_Request__Sequence * input,
  beckhoff_interfaces__action__Move_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(beckhoff_interfaces__action__Move_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    beckhoff_interfaces__action__Move_SendGoal_Request * data =
      (beckhoff_interfaces__action__Move_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!beckhoff_interfaces__action__Move_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          beckhoff_interfaces__action__Move_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!beckhoff_interfaces__action__Move_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
beckhoff_interfaces__action__Move_SendGoal_Response__init(beckhoff_interfaces__action__Move_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    beckhoff_interfaces__action__Move_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
beckhoff_interfaces__action__Move_SendGoal_Response__fini(beckhoff_interfaces__action__Move_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
beckhoff_interfaces__action__Move_SendGoal_Response__are_equal(const beckhoff_interfaces__action__Move_SendGoal_Response * lhs, const beckhoff_interfaces__action__Move_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
beckhoff_interfaces__action__Move_SendGoal_Response__copy(
  const beckhoff_interfaces__action__Move_SendGoal_Response * input,
  beckhoff_interfaces__action__Move_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

beckhoff_interfaces__action__Move_SendGoal_Response *
beckhoff_interfaces__action__Move_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  beckhoff_interfaces__action__Move_SendGoal_Response * msg = (beckhoff_interfaces__action__Move_SendGoal_Response *)allocator.allocate(sizeof(beckhoff_interfaces__action__Move_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(beckhoff_interfaces__action__Move_SendGoal_Response));
  bool success = beckhoff_interfaces__action__Move_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
beckhoff_interfaces__action__Move_SendGoal_Response__destroy(beckhoff_interfaces__action__Move_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    beckhoff_interfaces__action__Move_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
beckhoff_interfaces__action__Move_SendGoal_Response__Sequence__init(beckhoff_interfaces__action__Move_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  beckhoff_interfaces__action__Move_SendGoal_Response * data = NULL;

  if (size) {
    data = (beckhoff_interfaces__action__Move_SendGoal_Response *)allocator.zero_allocate(size, sizeof(beckhoff_interfaces__action__Move_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = beckhoff_interfaces__action__Move_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        beckhoff_interfaces__action__Move_SendGoal_Response__fini(&data[i - 1]);
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
beckhoff_interfaces__action__Move_SendGoal_Response__Sequence__fini(beckhoff_interfaces__action__Move_SendGoal_Response__Sequence * array)
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
      beckhoff_interfaces__action__Move_SendGoal_Response__fini(&array->data[i]);
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

beckhoff_interfaces__action__Move_SendGoal_Response__Sequence *
beckhoff_interfaces__action__Move_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  beckhoff_interfaces__action__Move_SendGoal_Response__Sequence * array = (beckhoff_interfaces__action__Move_SendGoal_Response__Sequence *)allocator.allocate(sizeof(beckhoff_interfaces__action__Move_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = beckhoff_interfaces__action__Move_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
beckhoff_interfaces__action__Move_SendGoal_Response__Sequence__destroy(beckhoff_interfaces__action__Move_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    beckhoff_interfaces__action__Move_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
beckhoff_interfaces__action__Move_SendGoal_Response__Sequence__are_equal(const beckhoff_interfaces__action__Move_SendGoal_Response__Sequence * lhs, const beckhoff_interfaces__action__Move_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!beckhoff_interfaces__action__Move_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
beckhoff_interfaces__action__Move_SendGoal_Response__Sequence__copy(
  const beckhoff_interfaces__action__Move_SendGoal_Response__Sequence * input,
  beckhoff_interfaces__action__Move_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(beckhoff_interfaces__action__Move_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    beckhoff_interfaces__action__Move_SendGoal_Response * data =
      (beckhoff_interfaces__action__Move_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!beckhoff_interfaces__action__Move_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          beckhoff_interfaces__action__Move_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!beckhoff_interfaces__action__Move_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
beckhoff_interfaces__action__Move_GetResult_Request__init(beckhoff_interfaces__action__Move_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    beckhoff_interfaces__action__Move_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
beckhoff_interfaces__action__Move_GetResult_Request__fini(beckhoff_interfaces__action__Move_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
beckhoff_interfaces__action__Move_GetResult_Request__are_equal(const beckhoff_interfaces__action__Move_GetResult_Request * lhs, const beckhoff_interfaces__action__Move_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
beckhoff_interfaces__action__Move_GetResult_Request__copy(
  const beckhoff_interfaces__action__Move_GetResult_Request * input,
  beckhoff_interfaces__action__Move_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

beckhoff_interfaces__action__Move_GetResult_Request *
beckhoff_interfaces__action__Move_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  beckhoff_interfaces__action__Move_GetResult_Request * msg = (beckhoff_interfaces__action__Move_GetResult_Request *)allocator.allocate(sizeof(beckhoff_interfaces__action__Move_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(beckhoff_interfaces__action__Move_GetResult_Request));
  bool success = beckhoff_interfaces__action__Move_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
beckhoff_interfaces__action__Move_GetResult_Request__destroy(beckhoff_interfaces__action__Move_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    beckhoff_interfaces__action__Move_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
beckhoff_interfaces__action__Move_GetResult_Request__Sequence__init(beckhoff_interfaces__action__Move_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  beckhoff_interfaces__action__Move_GetResult_Request * data = NULL;

  if (size) {
    data = (beckhoff_interfaces__action__Move_GetResult_Request *)allocator.zero_allocate(size, sizeof(beckhoff_interfaces__action__Move_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = beckhoff_interfaces__action__Move_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        beckhoff_interfaces__action__Move_GetResult_Request__fini(&data[i - 1]);
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
beckhoff_interfaces__action__Move_GetResult_Request__Sequence__fini(beckhoff_interfaces__action__Move_GetResult_Request__Sequence * array)
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
      beckhoff_interfaces__action__Move_GetResult_Request__fini(&array->data[i]);
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

beckhoff_interfaces__action__Move_GetResult_Request__Sequence *
beckhoff_interfaces__action__Move_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  beckhoff_interfaces__action__Move_GetResult_Request__Sequence * array = (beckhoff_interfaces__action__Move_GetResult_Request__Sequence *)allocator.allocate(sizeof(beckhoff_interfaces__action__Move_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = beckhoff_interfaces__action__Move_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
beckhoff_interfaces__action__Move_GetResult_Request__Sequence__destroy(beckhoff_interfaces__action__Move_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    beckhoff_interfaces__action__Move_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
beckhoff_interfaces__action__Move_GetResult_Request__Sequence__are_equal(const beckhoff_interfaces__action__Move_GetResult_Request__Sequence * lhs, const beckhoff_interfaces__action__Move_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!beckhoff_interfaces__action__Move_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
beckhoff_interfaces__action__Move_GetResult_Request__Sequence__copy(
  const beckhoff_interfaces__action__Move_GetResult_Request__Sequence * input,
  beckhoff_interfaces__action__Move_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(beckhoff_interfaces__action__Move_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    beckhoff_interfaces__action__Move_GetResult_Request * data =
      (beckhoff_interfaces__action__Move_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!beckhoff_interfaces__action__Move_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          beckhoff_interfaces__action__Move_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!beckhoff_interfaces__action__Move_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "beckhoff_interfaces/action/detail/move__functions.h"

bool
beckhoff_interfaces__action__Move_GetResult_Response__init(beckhoff_interfaces__action__Move_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!beckhoff_interfaces__action__Move_Result__init(&msg->result)) {
    beckhoff_interfaces__action__Move_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
beckhoff_interfaces__action__Move_GetResult_Response__fini(beckhoff_interfaces__action__Move_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  beckhoff_interfaces__action__Move_Result__fini(&msg->result);
}

bool
beckhoff_interfaces__action__Move_GetResult_Response__are_equal(const beckhoff_interfaces__action__Move_GetResult_Response * lhs, const beckhoff_interfaces__action__Move_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!beckhoff_interfaces__action__Move_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
beckhoff_interfaces__action__Move_GetResult_Response__copy(
  const beckhoff_interfaces__action__Move_GetResult_Response * input,
  beckhoff_interfaces__action__Move_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!beckhoff_interfaces__action__Move_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

beckhoff_interfaces__action__Move_GetResult_Response *
beckhoff_interfaces__action__Move_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  beckhoff_interfaces__action__Move_GetResult_Response * msg = (beckhoff_interfaces__action__Move_GetResult_Response *)allocator.allocate(sizeof(beckhoff_interfaces__action__Move_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(beckhoff_interfaces__action__Move_GetResult_Response));
  bool success = beckhoff_interfaces__action__Move_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
beckhoff_interfaces__action__Move_GetResult_Response__destroy(beckhoff_interfaces__action__Move_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    beckhoff_interfaces__action__Move_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
beckhoff_interfaces__action__Move_GetResult_Response__Sequence__init(beckhoff_interfaces__action__Move_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  beckhoff_interfaces__action__Move_GetResult_Response * data = NULL;

  if (size) {
    data = (beckhoff_interfaces__action__Move_GetResult_Response *)allocator.zero_allocate(size, sizeof(beckhoff_interfaces__action__Move_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = beckhoff_interfaces__action__Move_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        beckhoff_interfaces__action__Move_GetResult_Response__fini(&data[i - 1]);
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
beckhoff_interfaces__action__Move_GetResult_Response__Sequence__fini(beckhoff_interfaces__action__Move_GetResult_Response__Sequence * array)
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
      beckhoff_interfaces__action__Move_GetResult_Response__fini(&array->data[i]);
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

beckhoff_interfaces__action__Move_GetResult_Response__Sequence *
beckhoff_interfaces__action__Move_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  beckhoff_interfaces__action__Move_GetResult_Response__Sequence * array = (beckhoff_interfaces__action__Move_GetResult_Response__Sequence *)allocator.allocate(sizeof(beckhoff_interfaces__action__Move_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = beckhoff_interfaces__action__Move_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
beckhoff_interfaces__action__Move_GetResult_Response__Sequence__destroy(beckhoff_interfaces__action__Move_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    beckhoff_interfaces__action__Move_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
beckhoff_interfaces__action__Move_GetResult_Response__Sequence__are_equal(const beckhoff_interfaces__action__Move_GetResult_Response__Sequence * lhs, const beckhoff_interfaces__action__Move_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!beckhoff_interfaces__action__Move_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
beckhoff_interfaces__action__Move_GetResult_Response__Sequence__copy(
  const beckhoff_interfaces__action__Move_GetResult_Response__Sequence * input,
  beckhoff_interfaces__action__Move_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(beckhoff_interfaces__action__Move_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    beckhoff_interfaces__action__Move_GetResult_Response * data =
      (beckhoff_interfaces__action__Move_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!beckhoff_interfaces__action__Move_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          beckhoff_interfaces__action__Move_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!beckhoff_interfaces__action__Move_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "beckhoff_interfaces/action/detail/move__functions.h"

bool
beckhoff_interfaces__action__Move_FeedbackMessage__init(beckhoff_interfaces__action__Move_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    beckhoff_interfaces__action__Move_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!beckhoff_interfaces__action__Move_Feedback__init(&msg->feedback)) {
    beckhoff_interfaces__action__Move_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
beckhoff_interfaces__action__Move_FeedbackMessage__fini(beckhoff_interfaces__action__Move_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  beckhoff_interfaces__action__Move_Feedback__fini(&msg->feedback);
}

bool
beckhoff_interfaces__action__Move_FeedbackMessage__are_equal(const beckhoff_interfaces__action__Move_FeedbackMessage * lhs, const beckhoff_interfaces__action__Move_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!beckhoff_interfaces__action__Move_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
beckhoff_interfaces__action__Move_FeedbackMessage__copy(
  const beckhoff_interfaces__action__Move_FeedbackMessage * input,
  beckhoff_interfaces__action__Move_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!beckhoff_interfaces__action__Move_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

beckhoff_interfaces__action__Move_FeedbackMessage *
beckhoff_interfaces__action__Move_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  beckhoff_interfaces__action__Move_FeedbackMessage * msg = (beckhoff_interfaces__action__Move_FeedbackMessage *)allocator.allocate(sizeof(beckhoff_interfaces__action__Move_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(beckhoff_interfaces__action__Move_FeedbackMessage));
  bool success = beckhoff_interfaces__action__Move_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
beckhoff_interfaces__action__Move_FeedbackMessage__destroy(beckhoff_interfaces__action__Move_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    beckhoff_interfaces__action__Move_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
beckhoff_interfaces__action__Move_FeedbackMessage__Sequence__init(beckhoff_interfaces__action__Move_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  beckhoff_interfaces__action__Move_FeedbackMessage * data = NULL;

  if (size) {
    data = (beckhoff_interfaces__action__Move_FeedbackMessage *)allocator.zero_allocate(size, sizeof(beckhoff_interfaces__action__Move_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = beckhoff_interfaces__action__Move_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        beckhoff_interfaces__action__Move_FeedbackMessage__fini(&data[i - 1]);
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
beckhoff_interfaces__action__Move_FeedbackMessage__Sequence__fini(beckhoff_interfaces__action__Move_FeedbackMessage__Sequence * array)
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
      beckhoff_interfaces__action__Move_FeedbackMessage__fini(&array->data[i]);
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

beckhoff_interfaces__action__Move_FeedbackMessage__Sequence *
beckhoff_interfaces__action__Move_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  beckhoff_interfaces__action__Move_FeedbackMessage__Sequence * array = (beckhoff_interfaces__action__Move_FeedbackMessage__Sequence *)allocator.allocate(sizeof(beckhoff_interfaces__action__Move_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = beckhoff_interfaces__action__Move_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
beckhoff_interfaces__action__Move_FeedbackMessage__Sequence__destroy(beckhoff_interfaces__action__Move_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    beckhoff_interfaces__action__Move_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
beckhoff_interfaces__action__Move_FeedbackMessage__Sequence__are_equal(const beckhoff_interfaces__action__Move_FeedbackMessage__Sequence * lhs, const beckhoff_interfaces__action__Move_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!beckhoff_interfaces__action__Move_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
beckhoff_interfaces__action__Move_FeedbackMessage__Sequence__copy(
  const beckhoff_interfaces__action__Move_FeedbackMessage__Sequence * input,
  beckhoff_interfaces__action__Move_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(beckhoff_interfaces__action__Move_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    beckhoff_interfaces__action__Move_FeedbackMessage * data =
      (beckhoff_interfaces__action__Move_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!beckhoff_interfaces__action__Move_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          beckhoff_interfaces__action__Move_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!beckhoff_interfaces__action__Move_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
