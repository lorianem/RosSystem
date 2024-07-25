// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from beckhoff_interfaces:srv/Gripper.idl
// generated code does not contain a copyright notice

#ifndef BECKHOFF_INTERFACES__SRV__DETAIL__GRIPPER__BUILDER_HPP_
#define BECKHOFF_INTERFACES__SRV__DETAIL__GRIPPER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "beckhoff_interfaces/srv/detail/gripper__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace beckhoff_interfaces
{

namespace srv
{

namespace builder
{

class Init_Gripper_Request_status
{
public:
  Init_Gripper_Request_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::beckhoff_interfaces::srv::Gripper_Request status(::beckhoff_interfaces::srv::Gripper_Request::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::beckhoff_interfaces::srv::Gripper_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::beckhoff_interfaces::srv::Gripper_Request>()
{
  return beckhoff_interfaces::srv::builder::Init_Gripper_Request_status();
}

}  // namespace beckhoff_interfaces


namespace beckhoff_interfaces
{

namespace srv
{

namespace builder
{

class Init_Gripper_Response_feedback
{
public:
  Init_Gripper_Response_feedback()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::beckhoff_interfaces::srv::Gripper_Response feedback(::beckhoff_interfaces::srv::Gripper_Response::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::beckhoff_interfaces::srv::Gripper_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::beckhoff_interfaces::srv::Gripper_Response>()
{
  return beckhoff_interfaces::srv::builder::Init_Gripper_Response_feedback();
}

}  // namespace beckhoff_interfaces

#endif  // BECKHOFF_INTERFACES__SRV__DETAIL__GRIPPER__BUILDER_HPP_
