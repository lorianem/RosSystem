// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from beckhoff_interfaces:srv/Move.idl
// generated code does not contain a copyright notice

#ifndef BECKHOFF_INTERFACES__SRV__DETAIL__MOVE__BUILDER_HPP_
#define BECKHOFF_INTERFACES__SRV__DETAIL__MOVE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "beckhoff_interfaces/srv/detail/move__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace beckhoff_interfaces
{

namespace srv
{

namespace builder
{

class Init_Move_Request_velocity
{
public:
  explicit Init_Move_Request_velocity(::beckhoff_interfaces::srv::Move_Request & msg)
  : msg_(msg)
  {}
  ::beckhoff_interfaces::srv::Move_Request velocity(::beckhoff_interfaces::srv::Move_Request::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::beckhoff_interfaces::srv::Move_Request msg_;
};

class Init_Move_Request_r
{
public:
  explicit Init_Move_Request_r(::beckhoff_interfaces::srv::Move_Request & msg)
  : msg_(msg)
  {}
  Init_Move_Request_velocity r(::beckhoff_interfaces::srv::Move_Request::_r_type arg)
  {
    msg_.r = std::move(arg);
    return Init_Move_Request_velocity(msg_);
  }

private:
  ::beckhoff_interfaces::srv::Move_Request msg_;
};

class Init_Move_Request_y
{
public:
  explicit Init_Move_Request_y(::beckhoff_interfaces::srv::Move_Request & msg)
  : msg_(msg)
  {}
  Init_Move_Request_r y(::beckhoff_interfaces::srv::Move_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Move_Request_r(msg_);
  }

private:
  ::beckhoff_interfaces::srv::Move_Request msg_;
};

class Init_Move_Request_x
{
public:
  Init_Move_Request_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_Request_y x(::beckhoff_interfaces::srv::Move_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Move_Request_y(msg_);
  }

private:
  ::beckhoff_interfaces::srv::Move_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::beckhoff_interfaces::srv::Move_Request>()
{
  return beckhoff_interfaces::srv::builder::Init_Move_Request_x();
}

}  // namespace beckhoff_interfaces


namespace beckhoff_interfaces
{

namespace srv
{

namespace builder
{

class Init_Move_Response_val_r
{
public:
  explicit Init_Move_Response_val_r(::beckhoff_interfaces::srv::Move_Response & msg)
  : msg_(msg)
  {}
  ::beckhoff_interfaces::srv::Move_Response val_r(::beckhoff_interfaces::srv::Move_Response::_val_r_type arg)
  {
    msg_.val_r = std::move(arg);
    return std::move(msg_);
  }

private:
  ::beckhoff_interfaces::srv::Move_Response msg_;
};

class Init_Move_Response_val_y
{
public:
  explicit Init_Move_Response_val_y(::beckhoff_interfaces::srv::Move_Response & msg)
  : msg_(msg)
  {}
  Init_Move_Response_val_r val_y(::beckhoff_interfaces::srv::Move_Response::_val_y_type arg)
  {
    msg_.val_y = std::move(arg);
    return Init_Move_Response_val_r(msg_);
  }

private:
  ::beckhoff_interfaces::srv::Move_Response msg_;
};

class Init_Move_Response_val_x
{
public:
  explicit Init_Move_Response_val_x(::beckhoff_interfaces::srv::Move_Response & msg)
  : msg_(msg)
  {}
  Init_Move_Response_val_y val_x(::beckhoff_interfaces::srv::Move_Response::_val_x_type arg)
  {
    msg_.val_x = std::move(arg);
    return Init_Move_Response_val_y(msg_);
  }

private:
  ::beckhoff_interfaces::srv::Move_Response msg_;
};

class Init_Move_Response_err
{
public:
  Init_Move_Response_err()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_Response_val_x err(::beckhoff_interfaces::srv::Move_Response::_err_type arg)
  {
    msg_.err = std::move(arg);
    return Init_Move_Response_val_x(msg_);
  }

private:
  ::beckhoff_interfaces::srv::Move_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::beckhoff_interfaces::srv::Move_Response>()
{
  return beckhoff_interfaces::srv::builder::Init_Move_Response_err();
}

}  // namespace beckhoff_interfaces

#endif  // BECKHOFF_INTERFACES__SRV__DETAIL__MOVE__BUILDER_HPP_
