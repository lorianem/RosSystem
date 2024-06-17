// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from beckhoff_interfaces:msg/Move.idl
// generated code does not contain a copyright notice

#ifndef BECKHOFF_INTERFACES__MSG__DETAIL__MOVE__BUILDER_HPP_
#define BECKHOFF_INTERFACES__MSG__DETAIL__MOVE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "beckhoff_interfaces/msg/detail/move__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace beckhoff_interfaces
{

namespace msg
{

namespace builder
{

class Init_Move_velocity
{
public:
  explicit Init_Move_velocity(::beckhoff_interfaces::msg::Move & msg)
  : msg_(msg)
  {}
  ::beckhoff_interfaces::msg::Move velocity(::beckhoff_interfaces::msg::Move::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::beckhoff_interfaces::msg::Move msg_;
};

class Init_Move_r
{
public:
  explicit Init_Move_r(::beckhoff_interfaces::msg::Move & msg)
  : msg_(msg)
  {}
  Init_Move_velocity r(::beckhoff_interfaces::msg::Move::_r_type arg)
  {
    msg_.r = std::move(arg);
    return Init_Move_velocity(msg_);
  }

private:
  ::beckhoff_interfaces::msg::Move msg_;
};

class Init_Move_y
{
public:
  explicit Init_Move_y(::beckhoff_interfaces::msg::Move & msg)
  : msg_(msg)
  {}
  Init_Move_r y(::beckhoff_interfaces::msg::Move::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Move_r(msg_);
  }

private:
  ::beckhoff_interfaces::msg::Move msg_;
};

class Init_Move_x
{
public:
  Init_Move_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_y x(::beckhoff_interfaces::msg::Move::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Move_y(msg_);
  }

private:
  ::beckhoff_interfaces::msg::Move msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::beckhoff_interfaces::msg::Move>()
{
  return beckhoff_interfaces::msg::builder::Init_Move_x();
}

}  // namespace beckhoff_interfaces

#endif  // BECKHOFF_INTERFACES__MSG__DETAIL__MOVE__BUILDER_HPP_
