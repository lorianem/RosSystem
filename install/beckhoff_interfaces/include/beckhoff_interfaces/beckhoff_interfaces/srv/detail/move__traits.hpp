// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from beckhoff_interfaces:srv/Move.idl
// generated code does not contain a copyright notice

#ifndef BECKHOFF_INTERFACES__SRV__DETAIL__MOVE__TRAITS_HPP_
#define BECKHOFF_INTERFACES__SRV__DETAIL__MOVE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "beckhoff_interfaces/srv/detail/move__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace beckhoff_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Move_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: r
  {
    out << "r: ";
    rosidl_generator_traits::value_to_yaml(msg.r, out);
    out << ", ";
  }

  // member: velocity
  {
    out << "velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Move_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: r
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "r: ";
    rosidl_generator_traits::value_to_yaml(msg.r, out);
    out << "\n";
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Move_Request & msg, bool use_flow_style = false)
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
  const beckhoff_interfaces::srv::Move_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  beckhoff_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use beckhoff_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const beckhoff_interfaces::srv::Move_Request & msg)
{
  return beckhoff_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<beckhoff_interfaces::srv::Move_Request>()
{
  return "beckhoff_interfaces::srv::Move_Request";
}

template<>
inline const char * name<beckhoff_interfaces::srv::Move_Request>()
{
  return "beckhoff_interfaces/srv/Move_Request";
}

template<>
struct has_fixed_size<beckhoff_interfaces::srv::Move_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<beckhoff_interfaces::srv::Move_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<beckhoff_interfaces::srv::Move_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace beckhoff_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Move_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: err
  {
    out << "err: ";
    rosidl_generator_traits::value_to_yaml(msg.err, out);
    out << ", ";
  }

  // member: val_x
  {
    out << "val_x: ";
    rosidl_generator_traits::value_to_yaml(msg.val_x, out);
    out << ", ";
  }

  // member: val_y
  {
    out << "val_y: ";
    rosidl_generator_traits::value_to_yaml(msg.val_y, out);
    out << ", ";
  }

  // member: val_r
  {
    out << "val_r: ";
    rosidl_generator_traits::value_to_yaml(msg.val_r, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Move_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: err
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "err: ";
    rosidl_generator_traits::value_to_yaml(msg.err, out);
    out << "\n";
  }

  // member: val_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "val_x: ";
    rosidl_generator_traits::value_to_yaml(msg.val_x, out);
    out << "\n";
  }

  // member: val_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "val_y: ";
    rosidl_generator_traits::value_to_yaml(msg.val_y, out);
    out << "\n";
  }

  // member: val_r
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "val_r: ";
    rosidl_generator_traits::value_to_yaml(msg.val_r, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Move_Response & msg, bool use_flow_style = false)
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
  const beckhoff_interfaces::srv::Move_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  beckhoff_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use beckhoff_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const beckhoff_interfaces::srv::Move_Response & msg)
{
  return beckhoff_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<beckhoff_interfaces::srv::Move_Response>()
{
  return "beckhoff_interfaces::srv::Move_Response";
}

template<>
inline const char * name<beckhoff_interfaces::srv::Move_Response>()
{
  return "beckhoff_interfaces/srv/Move_Response";
}

template<>
struct has_fixed_size<beckhoff_interfaces::srv::Move_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<beckhoff_interfaces::srv::Move_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<beckhoff_interfaces::srv::Move_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<beckhoff_interfaces::srv::Move>()
{
  return "beckhoff_interfaces::srv::Move";
}

template<>
inline const char * name<beckhoff_interfaces::srv::Move>()
{
  return "beckhoff_interfaces/srv/Move";
}

template<>
struct has_fixed_size<beckhoff_interfaces::srv::Move>
  : std::integral_constant<
    bool,
    has_fixed_size<beckhoff_interfaces::srv::Move_Request>::value &&
    has_fixed_size<beckhoff_interfaces::srv::Move_Response>::value
  >
{
};

template<>
struct has_bounded_size<beckhoff_interfaces::srv::Move>
  : std::integral_constant<
    bool,
    has_bounded_size<beckhoff_interfaces::srv::Move_Request>::value &&
    has_bounded_size<beckhoff_interfaces::srv::Move_Response>::value
  >
{
};

template<>
struct is_service<beckhoff_interfaces::srv::Move>
  : std::true_type
{
};

template<>
struct is_service_request<beckhoff_interfaces::srv::Move_Request>
  : std::true_type
{
};

template<>
struct is_service_response<beckhoff_interfaces::srv::Move_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // BECKHOFF_INTERFACES__SRV__DETAIL__MOVE__TRAITS_HPP_
