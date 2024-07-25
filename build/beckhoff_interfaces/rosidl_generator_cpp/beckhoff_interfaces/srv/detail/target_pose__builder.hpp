// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from beckhoff_interfaces:srv/TargetPose.idl
// generated code does not contain a copyright notice

#ifndef BECKHOFF_INTERFACES__SRV__DETAIL__TARGET_POSE__BUILDER_HPP_
#define BECKHOFF_INTERFACES__SRV__DETAIL__TARGET_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "beckhoff_interfaces/srv/detail/target_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace beckhoff_interfaces
{

namespace srv
{

namespace builder
{

class Init_TargetPose_Request_mode
{
public:
  explicit Init_TargetPose_Request_mode(::beckhoff_interfaces::srv::TargetPose_Request & msg)
  : msg_(msg)
  {}
  ::beckhoff_interfaces::srv::TargetPose_Request mode(::beckhoff_interfaces::srv::TargetPose_Request::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::beckhoff_interfaces::srv::TargetPose_Request msg_;
};

class Init_TargetPose_Request_vel
{
public:
  explicit Init_TargetPose_Request_vel(::beckhoff_interfaces::srv::TargetPose_Request & msg)
  : msg_(msg)
  {}
  Init_TargetPose_Request_mode vel(::beckhoff_interfaces::srv::TargetPose_Request::_vel_type arg)
  {
    msg_.vel = std::move(arg);
    return Init_TargetPose_Request_mode(msg_);
  }

private:
  ::beckhoff_interfaces::srv::TargetPose_Request msg_;
};

class Init_TargetPose_Request_dz
{
public:
  explicit Init_TargetPose_Request_dz(::beckhoff_interfaces::srv::TargetPose_Request & msg)
  : msg_(msg)
  {}
  Init_TargetPose_Request_vel dz(::beckhoff_interfaces::srv::TargetPose_Request::_dz_type arg)
  {
    msg_.dz = std::move(arg);
    return Init_TargetPose_Request_vel(msg_);
  }

private:
  ::beckhoff_interfaces::srv::TargetPose_Request msg_;
};

class Init_TargetPose_Request_dy
{
public:
  explicit Init_TargetPose_Request_dy(::beckhoff_interfaces::srv::TargetPose_Request & msg)
  : msg_(msg)
  {}
  Init_TargetPose_Request_dz dy(::beckhoff_interfaces::srv::TargetPose_Request::_dy_type arg)
  {
    msg_.dy = std::move(arg);
    return Init_TargetPose_Request_dz(msg_);
  }

private:
  ::beckhoff_interfaces::srv::TargetPose_Request msg_;
};

class Init_TargetPose_Request_dx
{
public:
  Init_TargetPose_Request_dx()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TargetPose_Request_dy dx(::beckhoff_interfaces::srv::TargetPose_Request::_dx_type arg)
  {
    msg_.dx = std::move(arg);
    return Init_TargetPose_Request_dy(msg_);
  }

private:
  ::beckhoff_interfaces::srv::TargetPose_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::beckhoff_interfaces::srv::TargetPose_Request>()
{
  return beckhoff_interfaces::srv::builder::Init_TargetPose_Request_dx();
}

}  // namespace beckhoff_interfaces


namespace beckhoff_interfaces
{

namespace srv
{

namespace builder
{

class Init_TargetPose_Response_feedback
{
public:
  Init_TargetPose_Response_feedback()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::beckhoff_interfaces::srv::TargetPose_Response feedback(::beckhoff_interfaces::srv::TargetPose_Response::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::beckhoff_interfaces::srv::TargetPose_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::beckhoff_interfaces::srv::TargetPose_Response>()
{
  return beckhoff_interfaces::srv::builder::Init_TargetPose_Response_feedback();
}

}  // namespace beckhoff_interfaces

#endif  // BECKHOFF_INTERFACES__SRV__DETAIL__TARGET_POSE__BUILDER_HPP_
