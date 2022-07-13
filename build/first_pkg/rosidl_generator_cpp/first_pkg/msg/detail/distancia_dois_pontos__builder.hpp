// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from first_pkg:msg/DistanciaDoisPontos.idl
// generated code does not contain a copyright notice

#ifndef FIRST_PKG__MSG__DETAIL__DISTANCIA_DOIS_PONTOS__BUILDER_HPP_
#define FIRST_PKG__MSG__DETAIL__DISTANCIA_DOIS_PONTOS__BUILDER_HPP_

#include "first_pkg/msg/detail/distancia_dois_pontos__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace first_pkg
{

namespace msg
{

namespace builder
{

class Init_DistanciaDoisPontos_distanciay
{
public:
  explicit Init_DistanciaDoisPontos_distanciay(::first_pkg::msg::DistanciaDoisPontos & msg)
  : msg_(msg)
  {}
  ::first_pkg::msg::DistanciaDoisPontos distanciay(::first_pkg::msg::DistanciaDoisPontos::_distanciay_type arg)
  {
    msg_.distanciay = std::move(arg);
    return std::move(msg_);
  }

private:
  ::first_pkg::msg::DistanciaDoisPontos msg_;
};

class Init_DistanciaDoisPontos_distanciax
{
public:
  Init_DistanciaDoisPontos_distanciax()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DistanciaDoisPontos_distanciay distanciax(::first_pkg::msg::DistanciaDoisPontos::_distanciax_type arg)
  {
    msg_.distanciax = std::move(arg);
    return Init_DistanciaDoisPontos_distanciay(msg_);
  }

private:
  ::first_pkg::msg::DistanciaDoisPontos msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::first_pkg::msg::DistanciaDoisPontos>()
{
  return first_pkg::msg::builder::Init_DistanciaDoisPontos_distanciax();
}

}  // namespace first_pkg

#endif  // FIRST_PKG__MSG__DETAIL__DISTANCIA_DOIS_PONTOS__BUILDER_HPP_
