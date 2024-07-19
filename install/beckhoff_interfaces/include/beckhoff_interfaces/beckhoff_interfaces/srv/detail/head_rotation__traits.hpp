// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from beckhoff_interfaces:srv/HeadRotation.idl
// generated code does not contain a copyright notice

#ifndef BECKHOFF_INTERFACES__SRV__DETAIL__HEAD_ROTATION__TRAITS_HPP_
#define BECKHOFF_INTERFACES__SRV__DETAIL__HEAD_ROTATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "beckhoff_interfaces/srv/detail/head_rotation__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace beckhoff_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const HeadRotation_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: deg
  {
    out << "deg: ";
    rosidl_generator_traits::value_to_yaml(msg.deg, out);
    out << ", ";
  }

  // member: vel
  {
    out << "vel: ";
    rosidl_generator_traits::value_to_yaml(msg.vel, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HeadRotation_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: deg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "deg: ";
    rosidl_generator_traits::value_to_yaml(msg.deg, out);
    out << "\n";
  }

  // member: vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel: ";
    rosidl_generator_traits::value_to_yaml(msg.vel, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HeadRotation_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace beckhoff_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use beckhoff_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const beckhoff_interfaces::srv::HeadRotation_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  beckhoff_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use beckhoff_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const beckhoff_interfaces::srv::HeadRotation_Request & msg)
{
  return beckhoff_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<beckhoff_interfaces::srv::HeadRotation_Request>()
{
  return "beckhoff_interfaces::srv::HeadRotation_Request";
}

template<>
inline const char * name<beckhoff_interfaces::srv::HeadRotation_Request>()
{
  return "beckhoff_interfaces/srv/HeadRotation_Request";
}

template<>
struct has_fixed_size<beckhoff_interfaces::srv::HeadRotation_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<beckhoff_interfaces::srv::HeadRotation_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<beckhoff_interfaces::srv::HeadRotation_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace beckhoff_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const HeadRotation_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: feedback
  {
    out << "feedback: ";
    rosidl_generator_traits::value_to_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HeadRotation_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback: ";
    rosidl_generator_traits::value_to_yaml(msg.feedback, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HeadRotation_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace beckhoff_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use beckhoff_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const beckhoff_interfaces::srv::HeadRotation_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  beckhoff_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use beckhoff_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const beckhoff_interfaces::srv::HeadRotation_Response & msg)
{
  return beckhoff_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<beckhoff_interfaces::srv::HeadRotation_Response>()
{
  return "beckhoff_interfaces::srv::HeadRotation_Response";
}

template<>
inline const char * name<beckhoff_interfaces::srv::HeadRotation_Response>()
{
  return "beckhoff_interfaces/srv/HeadRotation_Response";
}

template<>
struct has_fixed_size<beckhoff_interfaces::srv::HeadRotation_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<beckhoff_interfaces::srv::HeadRotation_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<beckhoff_interfaces::srv::HeadRotation_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<beckhoff_interfaces::srv::HeadRotation>()
{
  return "beckhoff_interfaces::srv::HeadRotation";
}

template<>
inline const char * name<beckhoff_interfaces::srv::HeadRotation>()
{
  return "beckhoff_interfaces/srv/HeadRotation";
}

template<>
struct has_fixed_size<beckhoff_interfaces::srv::HeadRotation>
  : std::integral_constant<
    bool,
    has_fixed_size<beckhoff_interfaces::srv::HeadRotation_Request>::value &&
    has_fixed_size<beckhoff_interfaces::srv::HeadRotation_Response>::value
  >
{
};

template<>
struct has_bounded_size<beckhoff_interfaces::srv::HeadRotation>
  : std::integral_constant<
    bool,
    has_bounded_size<beckhoff_interfaces::srv::HeadRotation_Request>::value &&
    has_bounded_size<beckhoff_interfaces::srv::HeadRotation_Response>::value
  >
{
};

template<>
struct is_service<beckhoff_interfaces::srv::HeadRotation>
  : std::true_type
{
};

template<>
struct is_service_request<beckhoff_interfaces::srv::HeadRotation_Request>
  : std::true_type
{
};

template<>
struct is_service_response<beckhoff_interfaces::srv::HeadRotation_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // BECKHOFF_INTERFACES__SRV__DETAIL__HEAD_ROTATION__TRAITS_HPP_
