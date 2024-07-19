// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lift_interfaces:action/MoveLift.idl
// generated code does not contain a copyright notice

#ifndef LIFT_INTERFACES__ACTION__DETAIL__MOVE_LIFT__TRAITS_HPP_
#define LIFT_INTERFACES__ACTION__DETAIL__MOVE_LIFT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "lift_interfaces/action/detail/move_lift__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace lift_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveLift_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_position
  {
    out << "goal_position: ";
    rosidl_generator_traits::value_to_yaml(msg.goal_position, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveLift_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_position: ";
    rosidl_generator_traits::value_to_yaml(msg.goal_position, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveLift_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace lift_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use lift_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const lift_interfaces::action::MoveLift_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  lift_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lift_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const lift_interfaces::action::MoveLift_Goal & msg)
{
  return lift_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<lift_interfaces::action::MoveLift_Goal>()
{
  return "lift_interfaces::action::MoveLift_Goal";
}

template<>
inline const char * name<lift_interfaces::action::MoveLift_Goal>()
{
  return "lift_interfaces/action/MoveLift_Goal";
}

template<>
struct has_fixed_size<lift_interfaces::action::MoveLift_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<lift_interfaces::action::MoveLift_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<lift_interfaces::action::MoveLift_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace lift_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveLift_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveLift_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveLift_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace lift_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use lift_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const lift_interfaces::action::MoveLift_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  lift_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lift_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const lift_interfaces::action::MoveLift_Result & msg)
{
  return lift_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<lift_interfaces::action::MoveLift_Result>()
{
  return "lift_interfaces::action::MoveLift_Result";
}

template<>
inline const char * name<lift_interfaces::action::MoveLift_Result>()
{
  return "lift_interfaces/action/MoveLift_Result";
}

template<>
struct has_fixed_size<lift_interfaces::action::MoveLift_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<lift_interfaces::action::MoveLift_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<lift_interfaces::action::MoveLift_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace lift_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveLift_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: current_position
  {
    out << "current_position: ";
    rosidl_generator_traits::value_to_yaml(msg.current_position, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveLift_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: current_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_position: ";
    rosidl_generator_traits::value_to_yaml(msg.current_position, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveLift_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace lift_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use lift_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const lift_interfaces::action::MoveLift_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  lift_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lift_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const lift_interfaces::action::MoveLift_Feedback & msg)
{
  return lift_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<lift_interfaces::action::MoveLift_Feedback>()
{
  return "lift_interfaces::action::MoveLift_Feedback";
}

template<>
inline const char * name<lift_interfaces::action::MoveLift_Feedback>()
{
  return "lift_interfaces/action/MoveLift_Feedback";
}

template<>
struct has_fixed_size<lift_interfaces::action::MoveLift_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<lift_interfaces::action::MoveLift_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<lift_interfaces::action::MoveLift_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "lift_interfaces/action/detail/move_lift__traits.hpp"

namespace lift_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveLift_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveLift_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveLift_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace lift_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use lift_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const lift_interfaces::action::MoveLift_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  lift_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lift_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const lift_interfaces::action::MoveLift_SendGoal_Request & msg)
{
  return lift_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<lift_interfaces::action::MoveLift_SendGoal_Request>()
{
  return "lift_interfaces::action::MoveLift_SendGoal_Request";
}

template<>
inline const char * name<lift_interfaces::action::MoveLift_SendGoal_Request>()
{
  return "lift_interfaces/action/MoveLift_SendGoal_Request";
}

template<>
struct has_fixed_size<lift_interfaces::action::MoveLift_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<lift_interfaces::action::MoveLift_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<lift_interfaces::action::MoveLift_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<lift_interfaces::action::MoveLift_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<lift_interfaces::action::MoveLift_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace lift_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveLift_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveLift_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveLift_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace lift_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use lift_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const lift_interfaces::action::MoveLift_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  lift_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lift_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const lift_interfaces::action::MoveLift_SendGoal_Response & msg)
{
  return lift_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<lift_interfaces::action::MoveLift_SendGoal_Response>()
{
  return "lift_interfaces::action::MoveLift_SendGoal_Response";
}

template<>
inline const char * name<lift_interfaces::action::MoveLift_SendGoal_Response>()
{
  return "lift_interfaces/action/MoveLift_SendGoal_Response";
}

template<>
struct has_fixed_size<lift_interfaces::action::MoveLift_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<lift_interfaces::action::MoveLift_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<lift_interfaces::action::MoveLift_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<lift_interfaces::action::MoveLift_SendGoal>()
{
  return "lift_interfaces::action::MoveLift_SendGoal";
}

template<>
inline const char * name<lift_interfaces::action::MoveLift_SendGoal>()
{
  return "lift_interfaces/action/MoveLift_SendGoal";
}

template<>
struct has_fixed_size<lift_interfaces::action::MoveLift_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<lift_interfaces::action::MoveLift_SendGoal_Request>::value &&
    has_fixed_size<lift_interfaces::action::MoveLift_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<lift_interfaces::action::MoveLift_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<lift_interfaces::action::MoveLift_SendGoal_Request>::value &&
    has_bounded_size<lift_interfaces::action::MoveLift_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<lift_interfaces::action::MoveLift_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<lift_interfaces::action::MoveLift_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<lift_interfaces::action::MoveLift_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace lift_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveLift_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveLift_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveLift_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace lift_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use lift_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const lift_interfaces::action::MoveLift_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  lift_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lift_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const lift_interfaces::action::MoveLift_GetResult_Request & msg)
{
  return lift_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<lift_interfaces::action::MoveLift_GetResult_Request>()
{
  return "lift_interfaces::action::MoveLift_GetResult_Request";
}

template<>
inline const char * name<lift_interfaces::action::MoveLift_GetResult_Request>()
{
  return "lift_interfaces/action/MoveLift_GetResult_Request";
}

template<>
struct has_fixed_size<lift_interfaces::action::MoveLift_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<lift_interfaces::action::MoveLift_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<lift_interfaces::action::MoveLift_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "lift_interfaces/action/detail/move_lift__traits.hpp"

namespace lift_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveLift_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveLift_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveLift_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace lift_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use lift_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const lift_interfaces::action::MoveLift_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  lift_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lift_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const lift_interfaces::action::MoveLift_GetResult_Response & msg)
{
  return lift_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<lift_interfaces::action::MoveLift_GetResult_Response>()
{
  return "lift_interfaces::action::MoveLift_GetResult_Response";
}

template<>
inline const char * name<lift_interfaces::action::MoveLift_GetResult_Response>()
{
  return "lift_interfaces/action/MoveLift_GetResult_Response";
}

template<>
struct has_fixed_size<lift_interfaces::action::MoveLift_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<lift_interfaces::action::MoveLift_Result>::value> {};

template<>
struct has_bounded_size<lift_interfaces::action::MoveLift_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<lift_interfaces::action::MoveLift_Result>::value> {};

template<>
struct is_message<lift_interfaces::action::MoveLift_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<lift_interfaces::action::MoveLift_GetResult>()
{
  return "lift_interfaces::action::MoveLift_GetResult";
}

template<>
inline const char * name<lift_interfaces::action::MoveLift_GetResult>()
{
  return "lift_interfaces/action/MoveLift_GetResult";
}

template<>
struct has_fixed_size<lift_interfaces::action::MoveLift_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<lift_interfaces::action::MoveLift_GetResult_Request>::value &&
    has_fixed_size<lift_interfaces::action::MoveLift_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<lift_interfaces::action::MoveLift_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<lift_interfaces::action::MoveLift_GetResult_Request>::value &&
    has_bounded_size<lift_interfaces::action::MoveLift_GetResult_Response>::value
  >
{
};

template<>
struct is_service<lift_interfaces::action::MoveLift_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<lift_interfaces::action::MoveLift_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<lift_interfaces::action::MoveLift_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "lift_interfaces/action/detail/move_lift__traits.hpp"

namespace lift_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveLift_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveLift_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveLift_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace lift_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use lift_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const lift_interfaces::action::MoveLift_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  lift_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lift_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const lift_interfaces::action::MoveLift_FeedbackMessage & msg)
{
  return lift_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<lift_interfaces::action::MoveLift_FeedbackMessage>()
{
  return "lift_interfaces::action::MoveLift_FeedbackMessage";
}

template<>
inline const char * name<lift_interfaces::action::MoveLift_FeedbackMessage>()
{
  return "lift_interfaces/action/MoveLift_FeedbackMessage";
}

template<>
struct has_fixed_size<lift_interfaces::action::MoveLift_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<lift_interfaces::action::MoveLift_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<lift_interfaces::action::MoveLift_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<lift_interfaces::action::MoveLift_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<lift_interfaces::action::MoveLift_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<lift_interfaces::action::MoveLift>
  : std::true_type
{
};

template<>
struct is_action_goal<lift_interfaces::action::MoveLift_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<lift_interfaces::action::MoveLift_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<lift_interfaces::action::MoveLift_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // LIFT_INTERFACES__ACTION__DETAIL__MOVE_LIFT__TRAITS_HPP_
