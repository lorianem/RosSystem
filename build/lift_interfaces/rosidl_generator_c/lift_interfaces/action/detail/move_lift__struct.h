// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lift_interfaces:action/MoveLift.idl
// generated code does not contain a copyright notice

#ifndef LIFT_INTERFACES__ACTION__DETAIL__MOVE_LIFT__STRUCT_H_
#define LIFT_INTERFACES__ACTION__DETAIL__MOVE_LIFT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/MoveLift in the package lift_interfaces.
typedef struct lift_interfaces__action__MoveLift_Goal
{
  uint16_t goal_position;
} lift_interfaces__action__MoveLift_Goal;

// Struct for a sequence of lift_interfaces__action__MoveLift_Goal.
typedef struct lift_interfaces__action__MoveLift_Goal__Sequence
{
  lift_interfaces__action__MoveLift_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lift_interfaces__action__MoveLift_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/MoveLift in the package lift_interfaces.
typedef struct lift_interfaces__action__MoveLift_Result
{
  bool success;
} lift_interfaces__action__MoveLift_Result;

// Struct for a sequence of lift_interfaces__action__MoveLift_Result.
typedef struct lift_interfaces__action__MoveLift_Result__Sequence
{
  lift_interfaces__action__MoveLift_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lift_interfaces__action__MoveLift_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/MoveLift in the package lift_interfaces.
typedef struct lift_interfaces__action__MoveLift_Feedback
{
  uint16_t current_position;
} lift_interfaces__action__MoveLift_Feedback;

// Struct for a sequence of lift_interfaces__action__MoveLift_Feedback.
typedef struct lift_interfaces__action__MoveLift_Feedback__Sequence
{
  lift_interfaces__action__MoveLift_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lift_interfaces__action__MoveLift_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "lift_interfaces/action/detail/move_lift__struct.h"

/// Struct defined in action/MoveLift in the package lift_interfaces.
typedef struct lift_interfaces__action__MoveLift_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  lift_interfaces__action__MoveLift_Goal goal;
} lift_interfaces__action__MoveLift_SendGoal_Request;

// Struct for a sequence of lift_interfaces__action__MoveLift_SendGoal_Request.
typedef struct lift_interfaces__action__MoveLift_SendGoal_Request__Sequence
{
  lift_interfaces__action__MoveLift_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lift_interfaces__action__MoveLift_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/MoveLift in the package lift_interfaces.
typedef struct lift_interfaces__action__MoveLift_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} lift_interfaces__action__MoveLift_SendGoal_Response;

// Struct for a sequence of lift_interfaces__action__MoveLift_SendGoal_Response.
typedef struct lift_interfaces__action__MoveLift_SendGoal_Response__Sequence
{
  lift_interfaces__action__MoveLift_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lift_interfaces__action__MoveLift_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/MoveLift in the package lift_interfaces.
typedef struct lift_interfaces__action__MoveLift_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} lift_interfaces__action__MoveLift_GetResult_Request;

// Struct for a sequence of lift_interfaces__action__MoveLift_GetResult_Request.
typedef struct lift_interfaces__action__MoveLift_GetResult_Request__Sequence
{
  lift_interfaces__action__MoveLift_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lift_interfaces__action__MoveLift_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "lift_interfaces/action/detail/move_lift__struct.h"

/// Struct defined in action/MoveLift in the package lift_interfaces.
typedef struct lift_interfaces__action__MoveLift_GetResult_Response
{
  int8_t status;
  lift_interfaces__action__MoveLift_Result result;
} lift_interfaces__action__MoveLift_GetResult_Response;

// Struct for a sequence of lift_interfaces__action__MoveLift_GetResult_Response.
typedef struct lift_interfaces__action__MoveLift_GetResult_Response__Sequence
{
  lift_interfaces__action__MoveLift_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lift_interfaces__action__MoveLift_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "lift_interfaces/action/detail/move_lift__struct.h"

/// Struct defined in action/MoveLift in the package lift_interfaces.
typedef struct lift_interfaces__action__MoveLift_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  lift_interfaces__action__MoveLift_Feedback feedback;
} lift_interfaces__action__MoveLift_FeedbackMessage;

// Struct for a sequence of lift_interfaces__action__MoveLift_FeedbackMessage.
typedef struct lift_interfaces__action__MoveLift_FeedbackMessage__Sequence
{
  lift_interfaces__action__MoveLift_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lift_interfaces__action__MoveLift_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LIFT_INTERFACES__ACTION__DETAIL__MOVE_LIFT__STRUCT_H_
