// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from beckhoff_interfaces:srv/Move.idl
// generated code does not contain a copyright notice

#ifndef BECKHOFF_INTERFACES__SRV__DETAIL__MOVE__STRUCT_HPP_
#define BECKHOFF_INTERFACES__SRV__DETAIL__MOVE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__beckhoff_interfaces__srv__Move_Request __attribute__((deprecated))
#else
# define DEPRECATED__beckhoff_interfaces__srv__Move_Request __declspec(deprecated)
#endif

namespace beckhoff_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Move_Request_
{
  using Type = Move_Request_<ContainerAllocator>;

  explicit Move_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->r = 0.0;
      this->velocity = 0.0;
    }
  }

  explicit Move_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->r = 0.0;
      this->velocity = 0.0;
    }
  }

  // field types and members
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _r_type =
    double;
  _r_type r;
  using _velocity_type =
    double;
  _velocity_type velocity;

  // setters for named parameter idiom
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__r(
    const double & _arg)
  {
    this->r = _arg;
    return *this;
  }
  Type & set__velocity(
    const double & _arg)
  {
    this->velocity = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    beckhoff_interfaces::srv::Move_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const beckhoff_interfaces::srv::Move_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<beckhoff_interfaces::srv::Move_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<beckhoff_interfaces::srv::Move_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      beckhoff_interfaces::srv::Move_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<beckhoff_interfaces::srv::Move_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      beckhoff_interfaces::srv::Move_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<beckhoff_interfaces::srv::Move_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<beckhoff_interfaces::srv::Move_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<beckhoff_interfaces::srv::Move_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__beckhoff_interfaces__srv__Move_Request
    std::shared_ptr<beckhoff_interfaces::srv::Move_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__beckhoff_interfaces__srv__Move_Request
    std::shared_ptr<beckhoff_interfaces::srv::Move_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Move_Request_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->r != other.r) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    return true;
  }
  bool operator!=(const Move_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Move_Request_

// alias to use template instance with default allocator
using Move_Request =
  beckhoff_interfaces::srv::Move_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace beckhoff_interfaces


#ifndef _WIN32
# define DEPRECATED__beckhoff_interfaces__srv__Move_Response __attribute__((deprecated))
#else
# define DEPRECATED__beckhoff_interfaces__srv__Move_Response __declspec(deprecated)
#endif

namespace beckhoff_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Move_Response_
{
  using Type = Move_Response_<ContainerAllocator>;

  explicit Move_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->err = "";
      this->val_x = 0.0;
      this->val_y = 0.0;
      this->val_r = 0.0;
    }
  }

  explicit Move_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : err(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->err = "";
      this->val_x = 0.0;
      this->val_y = 0.0;
      this->val_r = 0.0;
    }
  }

  // field types and members
  using _err_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _err_type err;
  using _val_x_type =
    double;
  _val_x_type val_x;
  using _val_y_type =
    double;
  _val_y_type val_y;
  using _val_r_type =
    double;
  _val_r_type val_r;

  // setters for named parameter idiom
  Type & set__err(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->err = _arg;
    return *this;
  }
  Type & set__val_x(
    const double & _arg)
  {
    this->val_x = _arg;
    return *this;
  }
  Type & set__val_y(
    const double & _arg)
  {
    this->val_y = _arg;
    return *this;
  }
  Type & set__val_r(
    const double & _arg)
  {
    this->val_r = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    beckhoff_interfaces::srv::Move_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const beckhoff_interfaces::srv::Move_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<beckhoff_interfaces::srv::Move_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<beckhoff_interfaces::srv::Move_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      beckhoff_interfaces::srv::Move_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<beckhoff_interfaces::srv::Move_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      beckhoff_interfaces::srv::Move_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<beckhoff_interfaces::srv::Move_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<beckhoff_interfaces::srv::Move_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<beckhoff_interfaces::srv::Move_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__beckhoff_interfaces__srv__Move_Response
    std::shared_ptr<beckhoff_interfaces::srv::Move_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__beckhoff_interfaces__srv__Move_Response
    std::shared_ptr<beckhoff_interfaces::srv::Move_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Move_Response_ & other) const
  {
    if (this->err != other.err) {
      return false;
    }
    if (this->val_x != other.val_x) {
      return false;
    }
    if (this->val_y != other.val_y) {
      return false;
    }
    if (this->val_r != other.val_r) {
      return false;
    }
    return true;
  }
  bool operator!=(const Move_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Move_Response_

// alias to use template instance with default allocator
using Move_Response =
  beckhoff_interfaces::srv::Move_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace beckhoff_interfaces

namespace beckhoff_interfaces
{

namespace srv
{

struct Move
{
  using Request = beckhoff_interfaces::srv::Move_Request;
  using Response = beckhoff_interfaces::srv::Move_Response;
};

}  // namespace srv

}  // namespace beckhoff_interfaces

#endif  // BECKHOFF_INTERFACES__SRV__DETAIL__MOVE__STRUCT_HPP_
