// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from myword_650610841:srv/SumFourInt.idl
// generated code does not contain a copyright notice

#ifndef MYWORD_650610841__SRV__DETAIL__SUM_FOUR_INT__BUILDER_HPP_
#define MYWORD_650610841__SRV__DETAIL__SUM_FOUR_INT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "myword_650610841/srv/detail/sum_four_int__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace myword_650610841
{

namespace srv
{

namespace builder
{

class Init_SumFourInt_Request_d
{
public:
  explicit Init_SumFourInt_Request_d(::myword_650610841::srv::SumFourInt_Request & msg)
  : msg_(msg)
  {}
  ::myword_650610841::srv::SumFourInt_Request d(::myword_650610841::srv::SumFourInt_Request::_d_type arg)
  {
    msg_.d = std::move(arg);
    return std::move(msg_);
  }

private:
  ::myword_650610841::srv::SumFourInt_Request msg_;
};

class Init_SumFourInt_Request_c
{
public:
  explicit Init_SumFourInt_Request_c(::myword_650610841::srv::SumFourInt_Request & msg)
  : msg_(msg)
  {}
  Init_SumFourInt_Request_d c(::myword_650610841::srv::SumFourInt_Request::_c_type arg)
  {
    msg_.c = std::move(arg);
    return Init_SumFourInt_Request_d(msg_);
  }

private:
  ::myword_650610841::srv::SumFourInt_Request msg_;
};

class Init_SumFourInt_Request_b
{
public:
  explicit Init_SumFourInt_Request_b(::myword_650610841::srv::SumFourInt_Request & msg)
  : msg_(msg)
  {}
  Init_SumFourInt_Request_c b(::myword_650610841::srv::SumFourInt_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return Init_SumFourInt_Request_c(msg_);
  }

private:
  ::myword_650610841::srv::SumFourInt_Request msg_;
};

class Init_SumFourInt_Request_a
{
public:
  Init_SumFourInt_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SumFourInt_Request_b a(::myword_650610841::srv::SumFourInt_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_SumFourInt_Request_b(msg_);
  }

private:
  ::myword_650610841::srv::SumFourInt_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::myword_650610841::srv::SumFourInt_Request>()
{
  return myword_650610841::srv::builder::Init_SumFourInt_Request_a();
}

}  // namespace myword_650610841


namespace myword_650610841
{

namespace srv
{

namespace builder
{

class Init_SumFourInt_Response_i
{
public:
  Init_SumFourInt_Response_i()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::myword_650610841::srv::SumFourInt_Response i(::myword_650610841::srv::SumFourInt_Response::_i_type arg)
  {
    msg_.i = std::move(arg);
    return std::move(msg_);
  }

private:
  ::myword_650610841::srv::SumFourInt_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::myword_650610841::srv::SumFourInt_Response>()
{
  return myword_650610841::srv::builder::Init_SumFourInt_Response_i();
}

}  // namespace myword_650610841

#endif  // MYWORD_650610841__SRV__DETAIL__SUM_FOUR_INT__BUILDER_HPP_
