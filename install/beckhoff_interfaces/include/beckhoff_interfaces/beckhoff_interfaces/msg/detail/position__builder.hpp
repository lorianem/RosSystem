// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from beckhoff_interfaces:msg/Position.idl
// generated code does not contain a copyright notice

#ifndef BECKHOFF_INTERFACES__MSG__DETAIL__POSITION__BUILDER_HPP_
#define BECKHOFF_INTERFACES__MSG__DETAIL__POSITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "beckhoff_interfaces/msg/detail/position__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace beckhoff_interfaces
{

namespace msg
{

namespace builder
{

class Init_Position_r
{
public:
  explicit Init_Position_r(::beckhoff_interfaces::msg::Position & msg)
  : msg_(msg)
  {}
  ::beckhoff_interfaces::msg::Position r(::beckhoff_interfaces::msg::Position::_r_type arg)
  {
    msg_.r = std::move(arg);
    return std::move(msg_);
  }

private:
  ::beckhoff_interfaces::msg::Position msg_;
};

class Init_Position_y
{
public:
  explicit Init_Position_y(::beckhoff_interfaces::msg::Position & msg)
  : msg_(msg)
  {}
  Init_Position_r y(::beckhoff_interfaces::msg::Position::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Position_r(msg_);
  }

private:
  ::beckhoff_interfaces::msg::Position msg_;
};

class Init_Position_x
{
public:
  Init_Position_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Position_y x(::beckhoff_interfaces::msg::Position::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Position_y(msg_);
  }

private:
  ::beckhoff_interfaces::msg::Position msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::beckhoff_interfaces::msg::Position>()
{
  return beckhoff_interfaces::msg::builder::Init_Position_x();
}

}  // namespace beckhoff_interfaces

#endif  // BECKHOFF_INTERFACES__MSG__DETAIL__POSITION__BUILDER_HPP_
