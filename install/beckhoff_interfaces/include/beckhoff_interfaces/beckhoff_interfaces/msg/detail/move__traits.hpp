// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from beckhoff_interfaces:msg/Move.idl
// generated code does not contain a copyright notice

#ifndef BECKHOFF_INTERFACES__MSG__DETAIL__MOVE__TRAITS_HPP_
#define BECKHOFF_INTERFACES__MSG__DETAIL__MOVE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "beckhoff_interfaces/msg/detail/move__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace beckhoff_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Move & msg,
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
  const Move & msg,
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

inline std::string to_yaml(const Move & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace beckhoff_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use beckhoff_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const beckhoff_interfaces::msg::Move & msg,
  std::ostream & out, size_t indentation = 0)
{
  beckhoff_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use beckhoff_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const beckhoff_interfaces::msg::Move & msg)
{
  return beckhoff_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<beckhoff_interfaces::msg::Move>()
{
  return "beckhoff_interfaces::msg::Move";
}

template<>
inline const char * name<beckhoff_interfaces::msg::Move>()
{
  return "beckhoff_interfaces/msg/Move";
}

template<>
struct has_fixed_size<beckhoff_interfaces::msg::Move>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<beckhoff_interfaces::msg::Move>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<beckhoff_interfaces::msg::Move>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BECKHOFF_INTERFACES__MSG__DETAIL__MOVE__TRAITS_HPP_
