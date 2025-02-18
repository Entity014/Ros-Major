// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lidar_interfaces:msg/Scan.idl
// generated code does not contain a copyright notice

#ifndef LIDAR_INTERFACES__MSG__DETAIL__SCAN__TRAITS_HPP_
#define LIDAR_INTERFACES__MSG__DETAIL__SCAN__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "lidar_interfaces/msg/detail/scan__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace lidar_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Scan & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: angle_min
  {
    out << "angle_min: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_min, out);
    out << ", ";
  }

  // member: angle_max
  {
    out << "angle_max: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_max, out);
    out << ", ";
  }

  // member: angle_increment
  {
    out << "angle_increment: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_increment, out);
    out << ", ";
  }

  // member: time_increment
  {
    out << "time_increment: ";
    rosidl_generator_traits::value_to_yaml(msg.time_increment, out);
    out << ", ";
  }

  // member: scan_time
  {
    out << "scan_time: ";
    rosidl_generator_traits::value_to_yaml(msg.scan_time, out);
    out << ", ";
  }

  // member: range_min
  {
    out << "range_min: ";
    rosidl_generator_traits::value_to_yaml(msg.range_min, out);
    out << ", ";
  }

  // member: range_max
  {
    out << "range_max: ";
    rosidl_generator_traits::value_to_yaml(msg.range_max, out);
    out << ", ";
  }

  // member: ranges
  {
    if (msg.ranges.size() == 0) {
      out << "ranges: []";
    } else {
      out << "ranges: [";
      size_t pending_items = msg.ranges.size();
      for (auto item : msg.ranges) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: intensities
  {
    if (msg.intensities.size() == 0) {
      out << "intensities: []";
    } else {
      out << "intensities: [";
      size_t pending_items = msg.intensities.size();
      for (auto item : msg.intensities) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Scan & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: angle_min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle_min: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_min, out);
    out << "\n";
  }

  // member: angle_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle_max: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_max, out);
    out << "\n";
  }

  // member: angle_increment
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle_increment: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_increment, out);
    out << "\n";
  }

  // member: time_increment
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_increment: ";
    rosidl_generator_traits::value_to_yaml(msg.time_increment, out);
    out << "\n";
  }

  // member: scan_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scan_time: ";
    rosidl_generator_traits::value_to_yaml(msg.scan_time, out);
    out << "\n";
  }

  // member: range_min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "range_min: ";
    rosidl_generator_traits::value_to_yaml(msg.range_min, out);
    out << "\n";
  }

  // member: range_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "range_max: ";
    rosidl_generator_traits::value_to_yaml(msg.range_max, out);
    out << "\n";
  }

  // member: ranges
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ranges.size() == 0) {
      out << "ranges: []\n";
    } else {
      out << "ranges:\n";
      for (auto item : msg.ranges) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: intensities
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.intensities.size() == 0) {
      out << "intensities: []\n";
    } else {
      out << "intensities:\n";
      for (auto item : msg.intensities) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Scan & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace lidar_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use lidar_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const lidar_interfaces::msg::Scan & msg,
  std::ostream & out, size_t indentation = 0)
{
  lidar_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lidar_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const lidar_interfaces::msg::Scan & msg)
{
  return lidar_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<lidar_interfaces::msg::Scan>()
{
  return "lidar_interfaces::msg::Scan";
}

template<>
inline const char * name<lidar_interfaces::msg::Scan>()
{
  return "lidar_interfaces/msg/Scan";
}

template<>
struct has_fixed_size<lidar_interfaces::msg::Scan>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<lidar_interfaces::msg::Scan>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<lidar_interfaces::msg::Scan>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LIDAR_INTERFACES__MSG__DETAIL__SCAN__TRAITS_HPP_
