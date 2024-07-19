// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from lift_interfaces:srv/PositionLift.idl
// generated code does not contain a copyright notice

#ifndef LIFT_INTERFACES__SRV__DETAIL__POSITION_LIFT__STRUCT_HPP_
#define LIFT_INTERFACES__SRV__DETAIL__POSITION_LIFT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__lift_interfaces__srv__PositionLift_Request __attribute__((deprecated))
#else
# define DEPRECATED__lift_interfaces__srv__PositionLift_Request __declspec(deprecated)
#endif

namespace lift_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PositionLift_Request_
{
  using Type = PositionLift_Request_<ContainerAllocator>;

  explicit PositionLift_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit PositionLift_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    lift_interfaces::srv::PositionLift_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const lift_interfaces::srv::PositionLift_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lift_interfaces::srv::PositionLift_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lift_interfaces::srv::PositionLift_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lift_interfaces::srv::PositionLift_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lift_interfaces::srv::PositionLift_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lift_interfaces::srv::PositionLift_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lift_interfaces::srv::PositionLift_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lift_interfaces::srv::PositionLift_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lift_interfaces::srv::PositionLift_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lift_interfaces__srv__PositionLift_Request
    std::shared_ptr<lift_interfaces::srv::PositionLift_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lift_interfaces__srv__PositionLift_Request
    std::shared_ptr<lift_interfaces::srv::PositionLift_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PositionLift_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const PositionLift_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PositionLift_Request_

// alias to use template instance with default allocator
using PositionLift_Request =
  lift_interfaces::srv::PositionLift_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace lift_interfaces


#ifndef _WIN32
# define DEPRECATED__lift_interfaces__srv__PositionLift_Response __attribute__((deprecated))
#else
# define DEPRECATED__lift_interfaces__srv__PositionLift_Response __declspec(deprecated)
#endif

namespace lift_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PositionLift_Response_
{
  using Type = PositionLift_Response_<ContainerAllocator>;

  explicit PositionLift_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->position = 0;
    }
  }

  explicit PositionLift_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->position = 0;
    }
  }

  // field types and members
  using _position_type =
    uint16_t;
  _position_type position;

  // setters for named parameter idiom
  Type & set__position(
    const uint16_t & _arg)
  {
    this->position = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    lift_interfaces::srv::PositionLift_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const lift_interfaces::srv::PositionLift_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lift_interfaces::srv::PositionLift_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lift_interfaces::srv::PositionLift_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lift_interfaces::srv::PositionLift_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lift_interfaces::srv::PositionLift_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lift_interfaces::srv::PositionLift_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lift_interfaces::srv::PositionLift_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lift_interfaces::srv::PositionLift_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lift_interfaces::srv::PositionLift_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lift_interfaces__srv__PositionLift_Response
    std::shared_ptr<lift_interfaces::srv::PositionLift_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lift_interfaces__srv__PositionLift_Response
    std::shared_ptr<lift_interfaces::srv::PositionLift_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PositionLift_Response_ & other) const
  {
    if (this->position != other.position) {
      return false;
    }
    return true;
  }
  bool operator!=(const PositionLift_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PositionLift_Response_

// alias to use template instance with default allocator
using PositionLift_Response =
  lift_interfaces::srv::PositionLift_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace lift_interfaces

namespace lift_interfaces
{

namespace srv
{

struct PositionLift
{
  using Request = lift_interfaces::srv::PositionLift_Request;
  using Response = lift_interfaces::srv::PositionLift_Response;
};

}  // namespace srv

}  // namespace lift_interfaces

#endif  // LIFT_INTERFACES__SRV__DETAIL__POSITION_LIFT__STRUCT_HPP_
