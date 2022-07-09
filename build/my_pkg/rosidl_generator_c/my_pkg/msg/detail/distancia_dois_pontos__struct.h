// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_pkg:msg/DistanciaDoisPontos.idl
// generated code does not contain a copyright notice

#ifndef MY_PKG__MSG__DETAIL__DISTANCIA_DOIS_PONTOS__STRUCT_H_
#define MY_PKG__MSG__DETAIL__DISTANCIA_DOIS_PONTOS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/DistanciaDoisPontos in the package my_pkg.
typedef struct my_pkg__msg__DistanciaDoisPontos
{
  double distanciax;
  double distanciay;
} my_pkg__msg__DistanciaDoisPontos;

// Struct for a sequence of my_pkg__msg__DistanciaDoisPontos.
typedef struct my_pkg__msg__DistanciaDoisPontos__Sequence
{
  my_pkg__msg__DistanciaDoisPontos * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_pkg__msg__DistanciaDoisPontos__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_PKG__MSG__DETAIL__DISTANCIA_DOIS_PONTOS__STRUCT_H_
