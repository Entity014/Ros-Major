// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from lidar_interfaces:srv/Break.idl
// generated code does not contain a copyright notice

#ifndef LIDAR_INTERFACES__SRV__DETAIL__BREAK__STRUCT_HPP_
#define LIDAR_INTERFACES__SRV__DETAIL__BREAK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__lidar_interfaces__srv__Break_Request __attribute__((deprecated))
#else
# define DEPRECATED__lidar_interfaces__srv__Break_Request __declspec(deprecated)
#endif

namespace lidar_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Break_Request_
{
  using Type = Break_Request_<ContainerAllocator>;

  explicit Break_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Break_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _angles_type =
    std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>>;
  _angles_type angles;

  // setters for named parameter idiom
  Type & set__angles(
    const std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>> & _arg)
  {
    this->angles = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    lidar_interfaces::srv::Break_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const lidar_interfaces::srv::Break_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lidar_interfaces::srv::Break_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lidar_interfaces::srv::Break_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lidar_interfaces::srv::Break_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lidar_interfaces::srv::Break_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lidar_interfaces::srv::Break_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lidar_interfaces::srv::Break_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lidar_interfaces::srv::Break_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lidar_interfaces::srv::Break_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lidar_interfaces__srv__Break_Request
    std::shared_ptr<lidar_interfaces::srv::Break_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lidar_interfaces__srv__Break_Request
    std::shared_ptr<lidar_interfaces::srv::Break_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Break_Request_ & other) const
  {
    if (this->angles != other.angles) {
      return false;
    }
    return true;
  }
  bool operator!=(const Break_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Break_Request_

// alias to use template instance with default allocator
using Break_Request =
  lidar_interfaces::srv::Break_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace lidar_interfaces


#ifndef _WIN32
# define DEPRECATED__lidar_interfaces__srv__Break_Response __attribute__((deprecated))
#else
# define DEPRECATED__lidar_interfaces__srv__Break_Response __declspec(deprecated)
#endif

namespace lidar_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Break_Response_
{
  using Type = Break_Response_<ContainerAllocator>;

  explicit Break_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit Break_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    lidar_interfaces::srv::Break_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const lidar_interfaces::srv::Break_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lidar_interfaces::srv::Break_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lidar_interfaces::srv::Break_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lidar_interfaces::srv::Break_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lidar_interfaces::srv::Break_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lidar_interfaces::srv::Break_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lidar_interfaces::srv::Break_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lidar_interfaces::srv::Break_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lidar_interfaces::srv::Break_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lidar_interfaces__srv__Break_Response
    std::shared_ptr<lidar_interfaces::srv::Break_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lidar_interfaces__srv__Break_Response
    std::shared_ptr<lidar_interfaces::srv::Break_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Break_Response_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const Break_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Break_Response_

// alias to use template instance with default allocator
using Break_Response =
  lidar_interfaces::srv::Break_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace lidar_interfaces

namespace lidar_interfaces
{

namespace srv
{

struct Break
{
  using Request = lidar_interfaces::srv::Break_Request;
  using Response = lidar_interfaces::srv::Break_Response;
};

}  // namespace srv

}  // namespace lidar_interfaces

#endif  // LIDAR_INTERFACES__SRV__DETAIL__BREAK__STRUCT_HPP_
