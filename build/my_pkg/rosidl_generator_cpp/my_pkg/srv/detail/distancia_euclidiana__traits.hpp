// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_pkg:srv/DistanciaEuclidiana.idl
// generated code does not contain a copyright notice

#ifndef MY_PKG__SRV__DETAIL__DISTANCIA_EUCLIDIANA__TRAITS_HPP_
#define MY_PKG__SRV__DETAIL__DISTANCIA_EUCLIDIANA__TRAITS_HPP_

#include "my_pkg/srv/detail/distancia_euclidiana__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_pkg::srv::DistanciaEuclidiana_Request>()
{
  return "my_pkg::srv::DistanciaEuclidiana_Request";
}

template<>
inline const char * name<my_pkg::srv::DistanciaEuclidiana_Request>()
{
  return "my_pkg/srv/DistanciaEuclidiana_Request";
}

template<>
struct has_fixed_size<my_pkg::srv::DistanciaEuclidiana_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<my_pkg::srv::DistanciaEuclidiana_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<my_pkg::srv::DistanciaEuclidiana_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_pkg::srv::DistanciaEuclidiana_Response>()
{
  return "my_pkg::srv::DistanciaEuclidiana_Response";
}

template<>
inline const char * name<my_pkg::srv::DistanciaEuclidiana_Response>()
{
  return "my_pkg/srv/DistanciaEuclidiana_Response";
}

template<>
struct has_fixed_size<my_pkg::srv::DistanciaEuclidiana_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<my_pkg::srv::DistanciaEuclidiana_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<my_pkg::srv::DistanciaEuclidiana_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_pkg::srv::DistanciaEuclidiana>()
{
  return "my_pkg::srv::DistanciaEuclidiana";
}

template<>
inline const char * name<my_pkg::srv::DistanciaEuclidiana>()
{
  return "my_pkg/srv/DistanciaEuclidiana";
}

template<>
struct has_fixed_size<my_pkg::srv::DistanciaEuclidiana>
  : std::integral_constant<
    bool,
    has_fixed_size<my_pkg::srv::DistanciaEuclidiana_Request>::value &&
    has_fixed_size<my_pkg::srv::DistanciaEuclidiana_Response>::value
  >
{
};

template<>
struct has_bounded_size<my_pkg::srv::DistanciaEuclidiana>
  : std::integral_constant<
    bool,
    has_bounded_size<my_pkg::srv::DistanciaEuclidiana_Request>::value &&
    has_bounded_size<my_pkg::srv::DistanciaEuclidiana_Response>::value
  >
{
};

template<>
struct is_service<my_pkg::srv::DistanciaEuclidiana>
  : std::true_type
{
};

template<>
struct is_service_request<my_pkg::srv::DistanciaEuclidiana_Request>
  : std::true_type
{
};

template<>
struct is_service_response<my_pkg::srv::DistanciaEuclidiana_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MY_PKG__SRV__DETAIL__DISTANCIA_EUCLIDIANA__TRAITS_HPP_
