// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from myword_650610841:srv/SumFourInt.idl
// generated code does not contain a copyright notice

#ifndef MYWORD_650610841__SRV__DETAIL__SUM_FOUR_INT__TRAITS_HPP_
#define MYWORD_650610841__SRV__DETAIL__SUM_FOUR_INT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "myword_650610841/srv/detail/sum_four_int__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace myword_650610841
{

namespace srv
{

inline void to_flow_style_yaml(
  const SumFourInt_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: a
  {
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << ", ";
  }

  // member: b
  {
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
    out << ", ";
  }

  // member: c
  {
    out << "c: ";
    rosidl_generator_traits::value_to_yaml(msg.c, out);
    out << ", ";
  }

  // member: d
  {
    out << "d: ";
    rosidl_generator_traits::value_to_yaml(msg.d, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SumFourInt_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << "\n";
  }

  // member: b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
    out << "\n";
  }

  // member: c
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "c: ";
    rosidl_generator_traits::value_to_yaml(msg.c, out);
    out << "\n";
  }

  // member: d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "d: ";
    rosidl_generator_traits::value_to_yaml(msg.d, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SumFourInt_Request & msg, bool use_flow_style = false)
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

}  // namespace myword_650610841

namespace rosidl_generator_traits
{

[[deprecated("use myword_650610841::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const myword_650610841::srv::SumFourInt_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  myword_650610841::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use myword_650610841::srv::to_yaml() instead")]]
inline std::string to_yaml(const myword_650610841::srv::SumFourInt_Request & msg)
{
  return myword_650610841::srv::to_yaml(msg);
}

template<>
inline const char * data_type<myword_650610841::srv::SumFourInt_Request>()
{
  return "myword_650610841::srv::SumFourInt_Request";
}

template<>
inline const char * name<myword_650610841::srv::SumFourInt_Request>()
{
  return "myword_650610841/srv/SumFourInt_Request";
}

template<>
struct has_fixed_size<myword_650610841::srv::SumFourInt_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<myword_650610841::srv::SumFourInt_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<myword_650610841::srv::SumFourInt_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace myword_650610841
{

namespace srv
{

inline void to_flow_style_yaml(
  const SumFourInt_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: i
  {
    out << "i: ";
    rosidl_generator_traits::value_to_yaml(msg.i, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SumFourInt_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: i
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "i: ";
    rosidl_generator_traits::value_to_yaml(msg.i, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SumFourInt_Response & msg, bool use_flow_style = false)
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

}  // namespace myword_650610841

namespace rosidl_generator_traits
{

[[deprecated("use myword_650610841::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const myword_650610841::srv::SumFourInt_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  myword_650610841::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use myword_650610841::srv::to_yaml() instead")]]
inline std::string to_yaml(const myword_650610841::srv::SumFourInt_Response & msg)
{
  return myword_650610841::srv::to_yaml(msg);
}

template<>
inline const char * data_type<myword_650610841::srv::SumFourInt_Response>()
{
  return "myword_650610841::srv::SumFourInt_Response";
}

template<>
inline const char * name<myword_650610841::srv::SumFourInt_Response>()
{
  return "myword_650610841/srv/SumFourInt_Response";
}

template<>
struct has_fixed_size<myword_650610841::srv::SumFourInt_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<myword_650610841::srv::SumFourInt_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<myword_650610841::srv::SumFourInt_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<myword_650610841::srv::SumFourInt>()
{
  return "myword_650610841::srv::SumFourInt";
}

template<>
inline const char * name<myword_650610841::srv::SumFourInt>()
{
  return "myword_650610841/srv/SumFourInt";
}

template<>
struct has_fixed_size<myword_650610841::srv::SumFourInt>
  : std::integral_constant<
    bool,
    has_fixed_size<myword_650610841::srv::SumFourInt_Request>::value &&
    has_fixed_size<myword_650610841::srv::SumFourInt_Response>::value
  >
{
};

template<>
struct has_bounded_size<myword_650610841::srv::SumFourInt>
  : std::integral_constant<
    bool,
    has_bounded_size<myword_650610841::srv::SumFourInt_Request>::value &&
    has_bounded_size<myword_650610841::srv::SumFourInt_Response>::value
  >
{
};

template<>
struct is_service<myword_650610841::srv::SumFourInt>
  : std::true_type
{
};

template<>
struct is_service_request<myword_650610841::srv::SumFourInt_Request>
  : std::true_type
{
};

template<>
struct is_service_response<myword_650610841::srv::SumFourInt_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MYWORD_650610841__SRV__DETAIL__SUM_FOUR_INT__TRAITS_HPP_
