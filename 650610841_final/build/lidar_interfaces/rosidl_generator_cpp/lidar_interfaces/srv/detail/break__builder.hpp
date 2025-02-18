// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lidar_interfaces:srv/Break.idl
// generated code does not contain a copyright notice

#ifndef LIDAR_INTERFACES__SRV__DETAIL__BREAK__BUILDER_HPP_
#define LIDAR_INTERFACES__SRV__DETAIL__BREAK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lidar_interfaces/srv/detail/break__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lidar_interfaces
{

namespace srv
{

namespace builder
{

class Init_Break_Request_angles
{
public:
  Init_Break_Request_angles()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::lidar_interfaces::srv::Break_Request angles(::lidar_interfaces::srv::Break_Request::_angles_type arg)
  {
    msg_.angles = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lidar_interfaces::srv::Break_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::lidar_interfaces::srv::Break_Request>()
{
  return lidar_interfaces::srv::builder::Init_Break_Request_angles();
}

}  // namespace lidar_interfaces


namespace lidar_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::lidar_interfaces::srv::Break_Response>()
{
  return ::lidar_interfaces::srv::Break_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace lidar_interfaces

#endif  // LIDAR_INTERFACES__SRV__DETAIL__BREAK__BUILDER_HPP_
