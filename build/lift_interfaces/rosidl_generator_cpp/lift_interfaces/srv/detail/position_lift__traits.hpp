// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lift_interfaces:srv/PositionLift.idl
// generated code does not contain a copyright notice

#ifndef LIFT_INTERFACES__SRV__DETAIL__POSITION_LIFT__TRAITS_HPP_
#define LIFT_INTERFACES__SRV__DETAIL__POSITION_LIFT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "lift_interfaces/srv/detail/position_lift__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace lift_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const PositionLift_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PositionLift_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PositionLift_Request & msg, bool use_flow_style = false)
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

}  // namespace lift_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use lift_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const lift_interfaces::srv::PositionLift_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  lift_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lift_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const lift_interfaces::srv::PositionLift_Request & msg)
{
  return lift_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<lift_interfaces::srv::PositionLift_Request>()
{
  return "lift_interfaces::srv::PositionLift_Request";
}

template<>
inline const char * name<lift_interfaces::srv::PositionLift_Request>()
{
  return "lift_interfaces/srv/PositionLift_Request";
}

template<>
struct has_fixed_size<lift_interfaces::srv::PositionLift_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<lift_interfaces::srv::PositionLift_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<lift_interfaces::srv::PositionLift_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace lift_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const PositionLift_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: position
  {
    out << "position: ";
    rosidl_generator_traits::value_to_yaml(msg.position, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PositionLift_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position: ";
    rosidl_generator_traits::value_to_yaml(msg.position, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PositionLift_Response & msg, bool use_flow_style = false)
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

}  // namespace lift_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use lift_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const lift_interfaces::srv::PositionLift_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  lift_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lift_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const lift_interfaces::srv::PositionLift_Response & msg)
{
  return lift_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<lift_interfaces::srv::PositionLift_Response>()
{
  return "lift_interfaces::srv::PositionLift_Response";
}

template<>
inline const char * name<lift_interfaces::srv::PositionLift_Response>()
{
  return "lift_interfaces/srv/PositionLift_Response";
}

template<>
struct has_fixed_size<lift_interfaces::srv::PositionLift_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<lift_interfaces::srv::PositionLift_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<lift_interfaces::srv::PositionLift_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<lift_interfaces::srv::PositionLift>()
{
  return "lift_interfaces::srv::PositionLift";
}

template<>
inline const char * name<lift_interfaces::srv::PositionLift>()
{
  return "lift_interfaces/srv/PositionLift";
}

template<>
struct has_fixed_size<lift_interfaces::srv::PositionLift>
  : std::integral_constant<
    bool,
    has_fixed_size<lift_interfaces::srv::PositionLift_Request>::value &&
    has_fixed_size<lift_interfaces::srv::PositionLift_Response>::value
  >
{
};

template<>
struct has_bounded_size<lift_interfaces::srv::PositionLift>
  : std::integral_constant<
    bool,
    has_bounded_size<lift_interfaces::srv::PositionLift_Request>::value &&
    has_bounded_size<lift_interfaces::srv::PositionLift_Response>::value
  >
{
};

template<>
struct is_service<lift_interfaces::srv::PositionLift>
  : std::true_type
{
};

template<>
struct is_service_request<lift_interfaces::srv::PositionLift_Request>
  : std::true_type
{
};

template<>
struct is_service_response<lift_interfaces::srv::PositionLift_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LIFT_INTERFACES__SRV__DETAIL__POSITION_LIFT__TRAITS_HPP_
