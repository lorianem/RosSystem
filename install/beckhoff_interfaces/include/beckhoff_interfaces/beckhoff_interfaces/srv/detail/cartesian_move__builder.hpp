// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from beckhoff_interfaces:srv/CartesianMove.idl
// generated code does not contain a copyright notice

#ifndef BECKHOFF_INTERFACES__SRV__DETAIL__CARTESIAN_MOVE__BUILDER_HPP_
#define BECKHOFF_INTERFACES__SRV__DETAIL__CARTESIAN_MOVE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "beckhoff_interfaces/srv/detail/cartesian_move__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace beckhoff_interfaces
{

namespace srv
{

namespace builder
{

class Init_CartesianMove_Request_acc_z
{
public:
  explicit Init_CartesianMove_Request_acc_z(::beckhoff_interfaces::srv::CartesianMove_Request & msg)
  : msg_(msg)
  {}
  ::beckhoff_interfaces::srv::CartesianMove_Request acc_z(::beckhoff_interfaces::srv::CartesianMove_Request::_acc_z_type arg)
  {
    msg_.acc_z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::beckhoff_interfaces::srv::CartesianMove_Request msg_;
};

class Init_CartesianMove_Request_acc_y
{
public:
  explicit Init_CartesianMove_Request_acc_y(::beckhoff_interfaces::srv::CartesianMove_Request & msg)
  : msg_(msg)
  {}
  Init_CartesianMove_Request_acc_z acc_y(::beckhoff_interfaces::srv::CartesianMove_Request::_acc_y_type arg)
  {
    msg_.acc_y = std::move(arg);
    return Init_CartesianMove_Request_acc_z(msg_);
  }

private:
  ::beckhoff_interfaces::srv::CartesianMove_Request msg_;
};

class Init_CartesianMove_Request_acc_x
{
public:
  explicit Init_CartesianMove_Request_acc_x(::beckhoff_interfaces::srv::CartesianMove_Request & msg)
  : msg_(msg)
  {}
  Init_CartesianMove_Request_acc_y acc_x(::beckhoff_interfaces::srv::CartesianMove_Request::_acc_x_type arg)
  {
    msg_.acc_x = std::move(arg);
    return Init_CartesianMove_Request_acc_y(msg_);
  }

private:
  ::beckhoff_interfaces::srv::CartesianMove_Request msg_;
};

class Init_CartesianMove_Request_vel_z
{
public:
  explicit Init_CartesianMove_Request_vel_z(::beckhoff_interfaces::srv::CartesianMove_Request & msg)
  : msg_(msg)
  {}
  Init_CartesianMove_Request_acc_x vel_z(::beckhoff_interfaces::srv::CartesianMove_Request::_vel_z_type arg)
  {
    msg_.vel_z = std::move(arg);
    return Init_CartesianMove_Request_acc_x(msg_);
  }

private:
  ::beckhoff_interfaces::srv::CartesianMove_Request msg_;
};

class Init_CartesianMove_Request_vel_y
{
public:
  explicit Init_CartesianMove_Request_vel_y(::beckhoff_interfaces::srv::CartesianMove_Request & msg)
  : msg_(msg)
  {}
  Init_CartesianMove_Request_vel_z vel_y(::beckhoff_interfaces::srv::CartesianMove_Request::_vel_y_type arg)
  {
    msg_.vel_y = std::move(arg);
    return Init_CartesianMove_Request_vel_z(msg_);
  }

private:
  ::beckhoff_interfaces::srv::CartesianMove_Request msg_;
};

class Init_CartesianMove_Request_vel_x
{
public:
  explicit Init_CartesianMove_Request_vel_x(::beckhoff_interfaces::srv::CartesianMove_Request & msg)
  : msg_(msg)
  {}
  Init_CartesianMove_Request_vel_y vel_x(::beckhoff_interfaces::srv::CartesianMove_Request::_vel_x_type arg)
  {
    msg_.vel_x = std::move(arg);
    return Init_CartesianMove_Request_vel_y(msg_);
  }

private:
  ::beckhoff_interfaces::srv::CartesianMove_Request msg_;
};

class Init_CartesianMove_Request_z
{
public:
  explicit Init_CartesianMove_Request_z(::beckhoff_interfaces::srv::CartesianMove_Request & msg)
  : msg_(msg)
  {}
  Init_CartesianMove_Request_vel_x z(::beckhoff_interfaces::srv::CartesianMove_Request::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_CartesianMove_Request_vel_x(msg_);
  }

private:
  ::beckhoff_interfaces::srv::CartesianMove_Request msg_;
};

class Init_CartesianMove_Request_y
{
public:
  explicit Init_CartesianMove_Request_y(::beckhoff_interfaces::srv::CartesianMove_Request & msg)
  : msg_(msg)
  {}
  Init_CartesianMove_Request_z y(::beckhoff_interfaces::srv::CartesianMove_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_CartesianMove_Request_z(msg_);
  }

private:
  ::beckhoff_interfaces::srv::CartesianMove_Request msg_;
};

class Init_CartesianMove_Request_x
{
public:
  Init_CartesianMove_Request_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CartesianMove_Request_y x(::beckhoff_interfaces::srv::CartesianMove_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_CartesianMove_Request_y(msg_);
  }

private:
  ::beckhoff_interfaces::srv::CartesianMove_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::beckhoff_interfaces::srv::CartesianMove_Request>()
{
  return beckhoff_interfaces::srv::builder::Init_CartesianMove_Request_x();
}

}  // namespace beckhoff_interfaces


namespace beckhoff_interfaces
{

namespace srv
{

namespace builder
{

class Init_CartesianMove_Response_feedback
{
public:
  Init_CartesianMove_Response_feedback()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::beckhoff_interfaces::srv::CartesianMove_Response feedback(::beckhoff_interfaces::srv::CartesianMove_Response::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::beckhoff_interfaces::srv::CartesianMove_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::beckhoff_interfaces::srv::CartesianMove_Response>()
{
  return beckhoff_interfaces::srv::builder::Init_CartesianMove_Response_feedback();
}

}  // namespace beckhoff_interfaces

#endif  // BECKHOFF_INTERFACES__SRV__DETAIL__CARTESIAN_MOVE__BUILDER_HPP_
