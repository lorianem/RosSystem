// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from beckhoff_interfaces:srv/CartesianMove.idl
// generated code does not contain a copyright notice

#ifndef BECKHOFF_INTERFACES__SRV__DETAIL__CARTESIAN_MOVE__TRAITS_HPP_
#define BECKHOFF_INTERFACES__SRV__DETAIL__CARTESIAN_MOVE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "beckhoff_interfaces/srv/detail/cartesian_move__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace beckhoff_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const CartesianMove_Request & msg,
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

  // member: z
  {
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << ", ";
  }

  // member: vel_x
  {
    out << "vel_x: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_x, out);
    out << ", ";
  }

  // member: vel_y
  {
    out << "vel_y: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_y, out);
    out << ", ";
  }

  // member: vel_z
  {
    out << "vel_z: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_z, out);
    out << ", ";
  }

  // member: acc_x
  {
    out << "acc_x: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_x, out);
    out << ", ";
  }

  // member: acc_y
  {
    out << "acc_y: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_y, out);
    out << ", ";
  }

  // member: acc_z
  {
    out << "acc_z: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_z, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CartesianMove_Request & msg,
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

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << "\n";
  }

  // member: vel_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel_x: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_x, out);
    out << "\n";
  }

  // member: vel_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel_y: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_y, out);
    out << "\n";
  }

  // member: vel_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel_z: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_z, out);
    out << "\n";
  }

  // member: acc_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acc_x: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_x, out);
    out << "\n";
  }

  // member: acc_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acc_y: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_y, out);
    out << "\n";
  }

  // member: acc_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acc_z: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_z, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CartesianMove_Request & msg, bool use_flow_style = false)
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
  const beckhoff_interfaces::srv::CartesianMove_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  beckhoff_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use beckhoff_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const beckhoff_interfaces::srv::CartesianMove_Request & msg)
{
  return beckhoff_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<beckhoff_interfaces::srv::CartesianMove_Request>()
{
  return "beckhoff_interfaces::srv::CartesianMove_Request";
}

template<>
inline const char * name<beckhoff_interfaces::srv::CartesianMove_Request>()
{
  return "beckhoff_interfaces/srv/CartesianMove_Request";
}

template<>
struct has_fixed_size<beckhoff_interfaces::srv::CartesianMove_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<beckhoff_interfaces::srv::CartesianMove_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<beckhoff_interfaces::srv::CartesianMove_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace beckhoff_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const CartesianMove_Response & msg,
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
  const CartesianMove_Response & msg,
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

inline std::string to_yaml(const CartesianMove_Response & msg, bool use_flow_style = false)
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
  const beckhoff_interfaces::srv::CartesianMove_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  beckhoff_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use beckhoff_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const beckhoff_interfaces::srv::CartesianMove_Response & msg)
{
  return beckhoff_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<beckhoff_interfaces::srv::CartesianMove_Response>()
{
  return "beckhoff_interfaces::srv::CartesianMove_Response";
}

template<>
inline const char * name<beckhoff_interfaces::srv::CartesianMove_Response>()
{
  return "beckhoff_interfaces/srv/CartesianMove_Response";
}

template<>
struct has_fixed_size<beckhoff_interfaces::srv::CartesianMove_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<beckhoff_interfaces::srv::CartesianMove_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<beckhoff_interfaces::srv::CartesianMove_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<beckhoff_interfaces::srv::CartesianMove>()
{
  return "beckhoff_interfaces::srv::CartesianMove";
}

template<>
inline const char * name<beckhoff_interfaces::srv::CartesianMove>()
{
  return "beckhoff_interfaces/srv/CartesianMove";
}

template<>
struct has_fixed_size<beckhoff_interfaces::srv::CartesianMove>
  : std::integral_constant<
    bool,
    has_fixed_size<beckhoff_interfaces::srv::CartesianMove_Request>::value &&
    has_fixed_size<beckhoff_interfaces::srv::CartesianMove_Response>::value
  >
{
};

template<>
struct has_bounded_size<beckhoff_interfaces::srv::CartesianMove>
  : std::integral_constant<
    bool,
    has_bounded_size<beckhoff_interfaces::srv::CartesianMove_Request>::value &&
    has_bounded_size<beckhoff_interfaces::srv::CartesianMove_Response>::value
  >
{
};

template<>
struct is_service<beckhoff_interfaces::srv::CartesianMove>
  : std::true_type
{
};

template<>
struct is_service_request<beckhoff_interfaces::srv::CartesianMove_Request>
  : std::true_type
{
};

template<>
struct is_service_response<beckhoff_interfaces::srv::CartesianMove_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // BECKHOFF_INTERFACES__SRV__DETAIL__CARTESIAN_MOVE__TRAITS_HPP_
