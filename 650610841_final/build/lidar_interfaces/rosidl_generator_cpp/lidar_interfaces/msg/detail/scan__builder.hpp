// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lidar_interfaces:msg/Scan.idl
// generated code does not contain a copyright notice

#ifndef LIDAR_INTERFACES__MSG__DETAIL__SCAN__BUILDER_HPP_
#define LIDAR_INTERFACES__MSG__DETAIL__SCAN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lidar_interfaces/msg/detail/scan__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lidar_interfaces
{

namespace msg
{

namespace builder
{

class Init_Scan_intensities
{
public:
  explicit Init_Scan_intensities(::lidar_interfaces::msg::Scan & msg)
  : msg_(msg)
  {}
  ::lidar_interfaces::msg::Scan intensities(::lidar_interfaces::msg::Scan::_intensities_type arg)
  {
    msg_.intensities = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lidar_interfaces::msg::Scan msg_;
};

class Init_Scan_ranges
{
public:
  explicit Init_Scan_ranges(::lidar_interfaces::msg::Scan & msg)
  : msg_(msg)
  {}
  Init_Scan_intensities ranges(::lidar_interfaces::msg::Scan::_ranges_type arg)
  {
    msg_.ranges = std::move(arg);
    return Init_Scan_intensities(msg_);
  }

private:
  ::lidar_interfaces::msg::Scan msg_;
};

class Init_Scan_range_max
{
public:
  explicit Init_Scan_range_max(::lidar_interfaces::msg::Scan & msg)
  : msg_(msg)
  {}
  Init_Scan_ranges range_max(::lidar_interfaces::msg::Scan::_range_max_type arg)
  {
    msg_.range_max = std::move(arg);
    return Init_Scan_ranges(msg_);
  }

private:
  ::lidar_interfaces::msg::Scan msg_;
};

class Init_Scan_range_min
{
public:
  explicit Init_Scan_range_min(::lidar_interfaces::msg::Scan & msg)
  : msg_(msg)
  {}
  Init_Scan_range_max range_min(::lidar_interfaces::msg::Scan::_range_min_type arg)
  {
    msg_.range_min = std::move(arg);
    return Init_Scan_range_max(msg_);
  }

private:
  ::lidar_interfaces::msg::Scan msg_;
};

class Init_Scan_scan_time
{
public:
  explicit Init_Scan_scan_time(::lidar_interfaces::msg::Scan & msg)
  : msg_(msg)
  {}
  Init_Scan_range_min scan_time(::lidar_interfaces::msg::Scan::_scan_time_type arg)
  {
    msg_.scan_time = std::move(arg);
    return Init_Scan_range_min(msg_);
  }

private:
  ::lidar_interfaces::msg::Scan msg_;
};

class Init_Scan_time_increment
{
public:
  explicit Init_Scan_time_increment(::lidar_interfaces::msg::Scan & msg)
  : msg_(msg)
  {}
  Init_Scan_scan_time time_increment(::lidar_interfaces::msg::Scan::_time_increment_type arg)
  {
    msg_.time_increment = std::move(arg);
    return Init_Scan_scan_time(msg_);
  }

private:
  ::lidar_interfaces::msg::Scan msg_;
};

class Init_Scan_angle_increment
{
public:
  explicit Init_Scan_angle_increment(::lidar_interfaces::msg::Scan & msg)
  : msg_(msg)
  {}
  Init_Scan_time_increment angle_increment(::lidar_interfaces::msg::Scan::_angle_increment_type arg)
  {
    msg_.angle_increment = std::move(arg);
    return Init_Scan_time_increment(msg_);
  }

private:
  ::lidar_interfaces::msg::Scan msg_;
};

class Init_Scan_angle_max
{
public:
  explicit Init_Scan_angle_max(::lidar_interfaces::msg::Scan & msg)
  : msg_(msg)
  {}
  Init_Scan_angle_increment angle_max(::lidar_interfaces::msg::Scan::_angle_max_type arg)
  {
    msg_.angle_max = std::move(arg);
    return Init_Scan_angle_increment(msg_);
  }

private:
  ::lidar_interfaces::msg::Scan msg_;
};

class Init_Scan_angle_min
{
public:
  explicit Init_Scan_angle_min(::lidar_interfaces::msg::Scan & msg)
  : msg_(msg)
  {}
  Init_Scan_angle_max angle_min(::lidar_interfaces::msg::Scan::_angle_min_type arg)
  {
    msg_.angle_min = std::move(arg);
    return Init_Scan_angle_max(msg_);
  }

private:
  ::lidar_interfaces::msg::Scan msg_;
};

class Init_Scan_header
{
public:
  Init_Scan_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Scan_angle_min header(::lidar_interfaces::msg::Scan::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Scan_angle_min(msg_);
  }

private:
  ::lidar_interfaces::msg::Scan msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lidar_interfaces::msg::Scan>()
{
  return lidar_interfaces::msg::builder::Init_Scan_header();
}

}  // namespace lidar_interfaces

#endif  // LIDAR_INTERFACES__MSG__DETAIL__SCAN__BUILDER_HPP_
