// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from myword_650610841:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef MYWORD_650610841__MSG__DETAIL__NUM__TRAITS_HPP_
#define MYWORD_650610841__MSG__DETAIL__NUM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "myword_650610841/msg/detail/num__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace myword_650610841
{

namespace msg
{

inline void to_flow_style_yaml(
  const Num & msg,
  std::ostream & out)
{
  out << "{";
  // member: n
  {
    out << "n: ";
    rosidl_generator_traits::value_to_yaml(msg.n, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Num & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: n
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "n: ";
    rosidl_generator_traits::value_to_yaml(msg.n, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Num & msg, bool use_flow_style = false)
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

}  // namespace myword_650610841

namespace rosidl_generator_traits
{

[[deprecated("use myword_650610841::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const myword_650610841::msg::Num & msg,
  std::ostream & out, size_t indentation = 0)
{
  myword_650610841::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use myword_650610841::msg::to_yaml() instead")]]
inline std::string to_yaml(const myword_650610841::msg::Num & msg)
{
  return myword_650610841::msg::to_yaml(msg);
}

template<>
inline const char * data_type<myword_650610841::msg::Num>()
{
  return "myword_650610841::msg::Num";
}

template<>
inline const char * name<myword_650610841::msg::Num>()
{
  return "myword_650610841/msg/Num";
}

template<>
struct has_fixed_size<myword_650610841::msg::Num>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<myword_650610841::msg::Num>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<myword_650610841::msg::Num>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MYWORD_650610841__MSG__DETAIL__NUM__TRAITS_HPP_
