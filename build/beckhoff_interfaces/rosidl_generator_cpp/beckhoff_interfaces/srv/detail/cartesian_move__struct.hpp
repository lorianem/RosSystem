// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from beckhoff_interfaces:srv/CartesianMove.idl
// generated code does not contain a copyright notice

#ifndef BECKHOFF_INTERFACES__SRV__DETAIL__CARTESIAN_MOVE__STRUCT_HPP_
#define BECKHOFF_INTERFACES__SRV__DETAIL__CARTESIAN_MOVE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__beckhoff_interfaces__srv__CartesianMove_Request __attribute__((deprecated))
#else
# define DEPRECATED__beckhoff_interfaces__srv__CartesianMove_Request __declspec(deprecated)
#endif

namespace beckhoff_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CartesianMove_Request_
{
  using Type = CartesianMove_Request_<ContainerAllocator>;

  explicit CartesianMove_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
      this->vel_x = 0.0;
      this->vel_y = 0.0;
      this->vel_z = 0.0;
      this->acc_x = 0.0;
      this->acc_y = 0.0;
      this->acc_z = 0.0;
    }
  }

  explicit CartesianMove_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
      this->vel_x = 0.0;
      this->vel_y = 0.0;
      this->vel_z = 0.0;
      this->acc_x = 0.0;
      this->acc_y = 0.0;
      this->acc_z = 0.0;
    }
  }

  // field types and members
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _z_type =
    double;
  _z_type z;
  using _vel_x_type =
    double;
  _vel_x_type vel_x;
  using _vel_y_type =
    double;
  _vel_y_type vel_y;
  using _vel_z_type =
    double;
  _vel_z_type vel_z;
  using _acc_x_type =
    double;
  _acc_x_type acc_x;
  using _acc_y_type =
    double;
  _acc_y_type acc_y;
  using _acc_z_type =
    double;
  _acc_z_type acc_z;

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
  Type & set__z(
    const double & _arg)
  {
    this->z = _arg;
    return *this;
  }
  Type & set__vel_x(
    const double & _arg)
  {
    this->vel_x = _arg;
    return *this;
  }
  Type & set__vel_y(
    const double & _arg)
  {
    this->vel_y = _arg;
    return *this;
  }
  Type & set__vel_z(
    const double & _arg)
  {
    this->vel_z = _arg;
    return *this;
  }
  Type & set__acc_x(
    const double & _arg)
  {
    this->acc_x = _arg;
    return *this;
  }
  Type & set__acc_y(
    const double & _arg)
  {
    this->acc_y = _arg;
    return *this;
  }
  Type & set__acc_z(
    const double & _arg)
  {
    this->acc_z = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    beckhoff_interfaces::srv::CartesianMove_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const beckhoff_interfaces::srv::CartesianMove_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<beckhoff_interfaces::srv::CartesianMove_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<beckhoff_interfaces::srv::CartesianMove_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      beckhoff_interfaces::srv::CartesianMove_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<beckhoff_interfaces::srv::CartesianMove_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      beckhoff_interfaces::srv::CartesianMove_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<beckhoff_interfaces::srv::CartesianMove_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<beckhoff_interfaces::srv::CartesianMove_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<beckhoff_interfaces::srv::CartesianMove_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__beckhoff_interfaces__srv__CartesianMove_Request
    std::shared_ptr<beckhoff_interfaces::srv::CartesianMove_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__beckhoff_interfaces__srv__CartesianMove_Request
    std::shared_ptr<beckhoff_interfaces::srv::CartesianMove_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CartesianMove_Request_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    if (this->vel_x != other.vel_x) {
      return false;
    }
    if (this->vel_y != other.vel_y) {
      return false;
    }
    if (this->vel_z != other.vel_z) {
      return false;
    }
    if (this->acc_x != other.acc_x) {
      return false;
    }
    if (this->acc_y != other.acc_y) {
      return false;
    }
    if (this->acc_z != other.acc_z) {
      return false;
    }
    return true;
  }
  bool operator!=(const CartesianMove_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CartesianMove_Request_

// alias to use template instance with default allocator
using CartesianMove_Request =
  beckhoff_interfaces::srv::CartesianMove_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace beckhoff_interfaces


#ifndef _WIN32
# define DEPRECATED__beckhoff_interfaces__srv__CartesianMove_Response __attribute__((deprecated))
#else
# define DEPRECATED__beckhoff_interfaces__srv__CartesianMove_Response __declspec(deprecated)
#endif

namespace beckhoff_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CartesianMove_Response_
{
  using Type = CartesianMove_Response_<ContainerAllocator>;

  explicit CartesianMove_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->feedback = "";
    }
  }

  explicit CartesianMove_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : feedback(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->feedback = "";
    }
  }

  // field types and members
  using _feedback_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__feedback(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    beckhoff_interfaces::srv::CartesianMove_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const beckhoff_interfaces::srv::CartesianMove_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<beckhoff_interfaces::srv::CartesianMove_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<beckhoff_interfaces::srv::CartesianMove_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      beckhoff_interfaces::srv::CartesianMove_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<beckhoff_interfaces::srv::CartesianMove_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      beckhoff_interfaces::srv::CartesianMove_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<beckhoff_interfaces::srv::CartesianMove_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<beckhoff_interfaces::srv::CartesianMove_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<beckhoff_interfaces::srv::CartesianMove_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__beckhoff_interfaces__srv__CartesianMove_Response
    std::shared_ptr<beckhoff_interfaces::srv::CartesianMove_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__beckhoff_interfaces__srv__CartesianMove_Response
    std::shared_ptr<beckhoff_interfaces::srv::CartesianMove_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CartesianMove_Response_ & other) const
  {
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const CartesianMove_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CartesianMove_Response_

// alias to use template instance with default allocator
using CartesianMove_Response =
  beckhoff_interfaces::srv::CartesianMove_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace beckhoff_interfaces

namespace beckhoff_interfaces
{

namespace srv
{

struct CartesianMove
{
  using Request = beckhoff_interfaces::srv::CartesianMove_Request;
  using Response = beckhoff_interfaces::srv::CartesianMove_Response;
};

}  // namespace srv

}  // namespace beckhoff_interfaces

#endif  // BECKHOFF_INTERFACES__SRV__DETAIL__CARTESIAN_MOVE__STRUCT_HPP_
