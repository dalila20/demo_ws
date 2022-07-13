// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from first_pkg:msg/DistanciaDoisPontos.idl
// generated code does not contain a copyright notice

#ifndef FIRST_PKG__MSG__DETAIL__DISTANCIA_DOIS_PONTOS__TRAITS_HPP_
#define FIRST_PKG__MSG__DETAIL__DISTANCIA_DOIS_PONTOS__TRAITS_HPP_

#include "first_pkg/msg/detail/distancia_dois_pontos__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<first_pkg::msg::DistanciaDoisPontos>()
{
  return "first_pkg::msg::DistanciaDoisPontos";
}

template<>
inline const char * name<first_pkg::msg::DistanciaDoisPontos>()
{
  return "first_pkg/msg/DistanciaDoisPontos";
}

template<>
struct has_fixed_size<first_pkg::msg::DistanciaDoisPontos>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<first_pkg::msg::DistanciaDoisPontos>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<first_pkg::msg::DistanciaDoisPontos>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FIRST_PKG__MSG__DETAIL__DISTANCIA_DOIS_PONTOS__TRAITS_HPP_
