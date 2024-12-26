// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from myword_650610841:srv/SumFourInt.idl
// generated code does not contain a copyright notice

#ifndef MYWORD_650610841__SRV__DETAIL__SUM_FOUR_INT__STRUCT_HPP_
#define MYWORD_650610841__SRV__DETAIL__SUM_FOUR_INT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__myword_650610841__srv__SumFourInt_Request __attribute__((deprecated))
#else
# define DEPRECATED__myword_650610841__srv__SumFourInt_Request __declspec(deprecated)
#endif

namespace myword_650610841
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SumFourInt_Request_
{
  using Type = SumFourInt_Request_<ContainerAllocator>;

  explicit SumFourInt_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->a = 0ll;
      this->b = 0ll;
      this->c = 0ll;
      this->d = 0ll;
    }
  }

  explicit SumFourInt_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->a = 0ll;
      this->b = 0ll;
      this->c = 0ll;
      this->d = 0ll;
    }
  }

  // field types and members
  using _a_type =
    int64_t;
  _a_type a;
  using _b_type =
    int64_t;
  _b_type b;
  using _c_type =
    int64_t;
  _c_type c;
  using _d_type =
    int64_t;
  _d_type d;

  // setters for named parameter idiom
  Type & set__a(
    const int64_t & _arg)
  {
    this->a = _arg;
    return *this;
  }
  Type & set__b(
    const int64_t & _arg)
  {
    this->b = _arg;
    return *this;
  }
  Type & set__c(
    const int64_t & _arg)
  {
    this->c = _arg;
    return *this;
  }
  Type & set__d(
    const int64_t & _arg)
  {
    this->d = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    myword_650610841::srv::SumFourInt_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const myword_650610841::srv::SumFourInt_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<myword_650610841::srv::SumFourInt_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<myword_650610841::srv::SumFourInt_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      myword_650610841::srv::SumFourInt_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<myword_650610841::srv::SumFourInt_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      myword_650610841::srv::SumFourInt_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<myword_650610841::srv::SumFourInt_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<myword_650610841::srv::SumFourInt_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<myword_650610841::srv::SumFourInt_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__myword_650610841__srv__SumFourInt_Request
    std::shared_ptr<myword_650610841::srv::SumFourInt_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__myword_650610841__srv__SumFourInt_Request
    std::shared_ptr<myword_650610841::srv::SumFourInt_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SumFourInt_Request_ & other) const
  {
    if (this->a != other.a) {
      return false;
    }
    if (this->b != other.b) {
      return false;
    }
    if (this->c != other.c) {
      return false;
    }
    if (this->d != other.d) {
      return false;
    }
    return true;
  }
  bool operator!=(const SumFourInt_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SumFourInt_Request_

// alias to use template instance with default allocator
using SumFourInt_Request =
  myword_650610841::srv::SumFourInt_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace myword_650610841


#ifndef _WIN32
# define DEPRECATED__myword_650610841__srv__SumFourInt_Response __attribute__((deprecated))
#else
# define DEPRECATED__myword_650610841__srv__SumFourInt_Response __declspec(deprecated)
#endif

namespace myword_650610841
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SumFourInt_Response_
{
  using Type = SumFourInt_Response_<ContainerAllocator>;

  explicit SumFourInt_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->i = 0ll;
    }
  }

  explicit SumFourInt_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->i = 0ll;
    }
  }

  // field types and members
  using _i_type =
    int64_t;
  _i_type i;

  // setters for named parameter idiom
  Type & set__i(
    const int64_t & _arg)
  {
    this->i = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    myword_650610841::srv::SumFourInt_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const myword_650610841::srv::SumFourInt_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<myword_650610841::srv::SumFourInt_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<myword_650610841::srv::SumFourInt_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      myword_650610841::srv::SumFourInt_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<myword_650610841::srv::SumFourInt_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      myword_650610841::srv::SumFourInt_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<myword_650610841::srv::SumFourInt_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<myword_650610841::srv::SumFourInt_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<myword_650610841::srv::SumFourInt_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__myword_650610841__srv__SumFourInt_Response
    std::shared_ptr<myword_650610841::srv::SumFourInt_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__myword_650610841__srv__SumFourInt_Response
    std::shared_ptr<myword_650610841::srv::SumFourInt_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SumFourInt_Response_ & other) const
  {
    if (this->i != other.i) {
      return false;
    }
    return true;
  }
  bool operator!=(const SumFourInt_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SumFourInt_Response_

// alias to use template instance with default allocator
using SumFourInt_Response =
  myword_650610841::srv::SumFourInt_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace myword_650610841

namespace myword_650610841
{

namespace srv
{

struct SumFourInt
{
  using Request = myword_650610841::srv::SumFourInt_Request;
  using Response = myword_650610841::srv::SumFourInt_Response;
};

}  // namespace srv

}  // namespace myword_650610841

#endif  // MYWORD_650610841__SRV__DETAIL__SUM_FOUR_INT__STRUCT_HPP_
