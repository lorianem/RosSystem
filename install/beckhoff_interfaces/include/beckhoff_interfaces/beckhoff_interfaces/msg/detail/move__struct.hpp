// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from beckhoff_interfaces:msg/Move.idl
// generated code does not contain a copyright notice

#ifndef BECKHOFF_INTERFACES__MSG__DETAIL__MOVE__STRUCT_HPP_
#define BECKHOFF_INTERFACES__MSG__DETAIL__MOVE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__beckhoff_interfaces__msg__Move __attribute__((deprecated))
#else
# define DEPRECATED__beckhoff_interfaces__msg__Move __declspec(deprecated)
#endif

namespace beckhoff_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Move_
{
  using Type = Move_<ContainerAllocator>;

  explicit Move_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0ll;
      this->y = 0ll;
      this->r = 0ll;
      this->velocity = 0ll;
    }
  }

  explicit Move_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0ll;
      this->y = 0ll;
      this->r = 0ll;
      this->velocity = 0ll;
    }
  }

  // field types and members
  using _x_type =
    int64_t;
  _x_type x;
  using _y_type =
    int64_t;
  _y_type y;
  using _r_type =
    int64_t;
  _r_type r;
  using _velocity_type =
    int64_t;
  _velocity_type velocity;

  // setters for named parameter idiom
  Type & set__x(
    const int64_t & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const int64_t & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__r(
    const int64_t & _arg)
  {
    this->r = _arg;
    return *this;
  }
  Type & set__velocity(
    const int64_t & _arg)
  {
    this->velocity = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    beckhoff_interfaces::msg::Move_<ContainerAllocator> *;
  using ConstRawPtr =
    const beckhoff_interfaces::msg::Move_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<beckhoff_interfaces::msg::Move_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<beckhoff_interfaces::msg::Move_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      beckhoff_interfaces::msg::Move_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<beckhoff_interfaces::msg::Move_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      beckhoff_interfaces::msg::Move_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<beckhoff_interfaces::msg::Move_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<beckhoff_interfaces::msg::Move_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<beckhoff_interfaces::msg::Move_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__beckhoff_interfaces__msg__Move
    std::shared_ptr<beckhoff_interfaces::msg::Move_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__beckhoff_interfaces__msg__Move
    std::shared_ptr<beckhoff_interfaces::msg::Move_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Move_ & other) const
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
  bool operator!=(const Move_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Move_

// alias to use template instance with default allocator
using Move =
  beckhoff_interfaces::msg::Move_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace beckhoff_interfaces

#endif  // BECKHOFF_INTERFACES__MSG__DETAIL__MOVE__STRUCT_HPP_
