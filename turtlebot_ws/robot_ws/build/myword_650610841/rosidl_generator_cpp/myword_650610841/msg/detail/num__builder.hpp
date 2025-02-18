// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from myword_650610841:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef MYWORD_650610841__MSG__DETAIL__NUM__BUILDER_HPP_
#define MYWORD_650610841__MSG__DETAIL__NUM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "myword_650610841/msg/detail/num__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace myword_650610841
{

namespace msg
{

namespace builder
{

class Init_Num_n
{
public:
  Init_Num_n()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::myword_650610841::msg::Num n(::myword_650610841::msg::Num::_n_type arg)
  {
    msg_.n = std::move(arg);
    return std::move(msg_);
  }

private:
  ::myword_650610841::msg::Num msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::myword_650610841::msg::Num>()
{
  return myword_650610841::msg::builder::Init_Num_n();
}

}  // namespace myword_650610841

#endif  // MYWORD_650610841__MSG__DETAIL__NUM__BUILDER_HPP_
