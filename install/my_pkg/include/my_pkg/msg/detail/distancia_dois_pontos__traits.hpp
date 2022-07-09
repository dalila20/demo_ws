// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_pkg:msg/DistanciaDoisPontos.idl
// generated code does not contain a copyright notice

#ifndef MY_PKG__MSG__DETAIL__DISTANCIA_DOIS_PONTOS__TRAITS_HPP_
#define MY_PKG__MSG__DETAIL__DISTANCIA_DOIS_PONTOS__TRAITS_HPP_

#include "my_pkg/msg/detail/distancia_dois_pontos__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_pkg::msg::DistanciaDoisPontos>()
{
  return "my_pkg::msg::DistanciaDoisPontos";
}

template<>
inline const char * name<my_pkg::msg::DistanciaDoisPontos>()
{
  return "my_pkg/msg/DistanciaDoisPontos";
}

template<>
struct has_fixed_size<my_pkg::msg::DistanciaDoisPontos>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<my_pkg::msg::DistanciaDoisPontos>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<my_pkg::msg::DistanciaDoisPontos>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MY_PKG__MSG__DETAIL__DISTANCIA_DOIS_PONTOS__TRAITS_HPP_
