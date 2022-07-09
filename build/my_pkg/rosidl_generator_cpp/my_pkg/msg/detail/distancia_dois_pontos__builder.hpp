// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_pkg:msg/DistanciaDoisPontos.idl
// generated code does not contain a copyright notice

#ifndef MY_PKG__MSG__DETAIL__DISTANCIA_DOIS_PONTOS__BUILDER_HPP_
#define MY_PKG__MSG__DETAIL__DISTANCIA_DOIS_PONTOS__BUILDER_HPP_

#include "my_pkg/msg/detail/distancia_dois_pontos__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace my_pkg
{

namespace msg
{

namespace builder
{

class Init_DistanciaDoisPontos_distanciay
{
public:
  explicit Init_DistanciaDoisPontos_distanciay(::my_pkg::msg::DistanciaDoisPontos & msg)
  : msg_(msg)
  {}
  ::my_pkg::msg::DistanciaDoisPontos distanciay(::my_pkg::msg::DistanciaDoisPontos::_distanciay_type arg)
  {
    msg_.distanciay = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_pkg::msg::DistanciaDoisPontos msg_;
};

class Init_DistanciaDoisPontos_distanciax
{
public:
  Init_DistanciaDoisPontos_distanciax()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DistanciaDoisPontos_distanciay distanciax(::my_pkg::msg::DistanciaDoisPontos::_distanciax_type arg)
  {
    msg_.distanciax = std::move(arg);
    return Init_DistanciaDoisPontos_distanciay(msg_);
  }

private:
  ::my_pkg::msg::DistanciaDoisPontos msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_pkg::msg::DistanciaDoisPontos>()
{
  return my_pkg::msg::builder::Init_DistanciaDoisPontos_distanciax();
}

}  // namespace my_pkg

#endif  // MY_PKG__MSG__DETAIL__DISTANCIA_DOIS_PONTOS__BUILDER_HPP_
