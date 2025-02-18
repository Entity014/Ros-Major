// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lidar_interfaces:srv/Break.idl
// generated code does not contain a copyright notice

#ifndef LIDAR_INTERFACES__SRV__DETAIL__BREAK__TRAITS_HPP_
#define LIDAR_INTERFACES__SRV__DETAIL__BREAK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "lidar_interfaces/srv/detail/break__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace lidar_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Break_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: angles
  {
    if (msg.angles.size() == 0) {
      out << "angles: []";
    } else {
      out << "angles: [";
      size_t pending_items = msg.angles.size();
      for (auto item : msg.angles) {
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
  const Break_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: angles
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.angles.size() == 0) {
      out << "angles: []\n";
    } else {
      out << "angles:\n";
      for (auto item : msg.angles) {
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

inline std::string to_yaml(const Break_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace lidar_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use lidar_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const lidar_interfaces::srv::Break_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  lidar_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lidar_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const lidar_interfaces::srv::Break_Request & msg)
{
  return lidar_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<lidar_interfaces::srv::Break_Request>()
{
  return "lidar_interfaces::srv::Break_Request";
}

template<>
inline const char * name<lidar_interfaces::srv::Break_Request>()
{
  return "lidar_interfaces/srv/Break_Request";
}

template<>
struct has_fixed_size<lidar_interfaces::srv::Break_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<lidar_interfaces::srv::Break_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<lidar_interfaces::srv::Break_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace lidar_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Break_Response & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Break_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Break_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace lidar_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use lidar_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const lidar_interfaces::srv::Break_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  lidar_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lidar_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const lidar_interfaces::srv::Break_Response & msg)
{
  return lidar_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<lidar_interfaces::srv::Break_Response>()
{
  return "lidar_interfaces::srv::Break_Response";
}

template<>
inline const char * name<lidar_interfaces::srv::Break_Response>()
{
  return "lidar_interfaces/srv/Break_Response";
}

template<>
struct has_fixed_size<lidar_interfaces::srv::Break_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<lidar_interfaces::srv::Break_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<lidar_interfaces::srv::Break_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<lidar_interfaces::srv::Break>()
{
  return "lidar_interfaces::srv::Break";
}

template<>
inline const char * name<lidar_interfaces::srv::Break>()
{
  return "lidar_interfaces/srv/Break";
}

template<>
struct has_fixed_size<lidar_interfaces::srv::Break>
  : std::integral_constant<
    bool,
    has_fixed_size<lidar_interfaces::srv::Break_Request>::value &&
    has_fixed_size<lidar_interfaces::srv::Break_Response>::value
  >
{
};

template<>
struct has_bounded_size<lidar_interfaces::srv::Break>
  : std::integral_constant<
    bool,
    has_bounded_size<lidar_interfaces::srv::Break_Request>::value &&
    has_bounded_size<lidar_interfaces::srv::Break_Response>::value
  >
{
};

template<>
struct is_service<lidar_interfaces::srv::Break>
  : std::true_type
{
};

template<>
struct is_service_request<lidar_interfaces::srv::Break_Request>
  : std::true_type
{
};

template<>
struct is_service_response<lidar_interfaces::srv::Break_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LIDAR_INTERFACES__SRV__DETAIL__BREAK__TRAITS_HPP_
