// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lift_interfaces:srv/PositionLift.idl
// generated code does not contain a copyright notice

#ifndef LIFT_INTERFACES__SRV__DETAIL__POSITION_LIFT__BUILDER_HPP_
#define LIFT_INTERFACES__SRV__DETAIL__POSITION_LIFT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lift_interfaces/srv/detail/position_lift__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lift_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::lift_interfaces::srv::PositionLift_Request>()
{
  return ::lift_interfaces::srv::PositionLift_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace lift_interfaces


namespace lift_interfaces
{

namespace srv
{

namespace builder
{

class Init_PositionLift_Response_position
{
public:
  Init_PositionLift_Response_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::lift_interfaces::srv::PositionLift_Response position(::lift_interfaces::srv::PositionLift_Response::_position_type arg)
  {
    msg_.position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lift_interfaces::srv::PositionLift_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::lift_interfaces::srv::PositionLift_Response>()
{
  return lift_interfaces::srv::builder::Init_PositionLift_Response_position();
}

}  // namespace lift_interfaces

#endif  // LIFT_INTERFACES__SRV__DETAIL__POSITION_LIFT__BUILDER_HPP_
