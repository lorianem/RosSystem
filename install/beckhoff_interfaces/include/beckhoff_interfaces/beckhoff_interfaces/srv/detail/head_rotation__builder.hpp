// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from beckhoff_interfaces:srv/HeadRotation.idl
// generated code does not contain a copyright notice

#ifndef BECKHOFF_INTERFACES__SRV__DETAIL__HEAD_ROTATION__BUILDER_HPP_
#define BECKHOFF_INTERFACES__SRV__DETAIL__HEAD_ROTATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "beckhoff_interfaces/srv/detail/head_rotation__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace beckhoff_interfaces
{

namespace srv
{

namespace builder
{

class Init_HeadRotation_Request_vel
{
public:
  explicit Init_HeadRotation_Request_vel(::beckhoff_interfaces::srv::HeadRotation_Request & msg)
  : msg_(msg)
  {}
  ::beckhoff_interfaces::srv::HeadRotation_Request vel(::beckhoff_interfaces::srv::HeadRotation_Request::_vel_type arg)
  {
    msg_.vel = std::move(arg);
    return std::move(msg_);
  }

private:
  ::beckhoff_interfaces::srv::HeadRotation_Request msg_;
};

class Init_HeadRotation_Request_deg
{
public:
  Init_HeadRotation_Request_deg()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HeadRotation_Request_vel deg(::beckhoff_interfaces::srv::HeadRotation_Request::_deg_type arg)
  {
    msg_.deg = std::move(arg);
    return Init_HeadRotation_Request_vel(msg_);
  }

private:
  ::beckhoff_interfaces::srv::HeadRotation_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::beckhoff_interfaces::srv::HeadRotation_Request>()
{
  return beckhoff_interfaces::srv::builder::Init_HeadRotation_Request_deg();
}

}  // namespace beckhoff_interfaces


namespace beckhoff_interfaces
{

namespace srv
{

namespace builder
{

class Init_HeadRotation_Response_feedback
{
public:
  Init_HeadRotation_Response_feedback()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::beckhoff_interfaces::srv::HeadRotation_Response feedback(::beckhoff_interfaces::srv::HeadRotation_Response::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::beckhoff_interfaces::srv::HeadRotation_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::beckhoff_interfaces::srv::HeadRotation_Response>()
{
  return beckhoff_interfaces::srv::builder::Init_HeadRotation_Response_feedback();
}

}  // namespace beckhoff_interfaces

#endif  // BECKHOFF_INTERFACES__SRV__DETAIL__HEAD_ROTATION__BUILDER_HPP_
