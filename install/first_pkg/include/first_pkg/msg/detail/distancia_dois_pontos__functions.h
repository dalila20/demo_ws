// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from first_pkg:msg/DistanciaDoisPontos.idl
// generated code does not contain a copyright notice

#ifndef FIRST_PKG__MSG__DETAIL__DISTANCIA_DOIS_PONTOS__FUNCTIONS_H_
#define FIRST_PKG__MSG__DETAIL__DISTANCIA_DOIS_PONTOS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "first_pkg/msg/rosidl_generator_c__visibility_control.h"

#include "first_pkg/msg/detail/distancia_dois_pontos__struct.h"

/// Initialize msg/DistanciaDoisPontos message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * first_pkg__msg__DistanciaDoisPontos
 * )) before or use
 * first_pkg__msg__DistanciaDoisPontos__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_first_pkg
bool
first_pkg__msg__DistanciaDoisPontos__init(first_pkg__msg__DistanciaDoisPontos * msg);

/// Finalize msg/DistanciaDoisPontos message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_pkg
void
first_pkg__msg__DistanciaDoisPontos__fini(first_pkg__msg__DistanciaDoisPontos * msg);

/// Create msg/DistanciaDoisPontos message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * first_pkg__msg__DistanciaDoisPontos__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_first_pkg
first_pkg__msg__DistanciaDoisPontos *
first_pkg__msg__DistanciaDoisPontos__create();

/// Destroy msg/DistanciaDoisPontos message.
/**
 * It calls
 * first_pkg__msg__DistanciaDoisPontos__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_pkg
void
first_pkg__msg__DistanciaDoisPontos__destroy(first_pkg__msg__DistanciaDoisPontos * msg);


/// Initialize array of msg/DistanciaDoisPontos messages.
/**
 * It allocates the memory for the number of elements and calls
 * first_pkg__msg__DistanciaDoisPontos__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_pkg
bool
first_pkg__msg__DistanciaDoisPontos__Sequence__init(first_pkg__msg__DistanciaDoisPontos__Sequence * array, size_t size);

/// Finalize array of msg/DistanciaDoisPontos messages.
/**
 * It calls
 * first_pkg__msg__DistanciaDoisPontos__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_pkg
void
first_pkg__msg__DistanciaDoisPontos__Sequence__fini(first_pkg__msg__DistanciaDoisPontos__Sequence * array);

/// Create array of msg/DistanciaDoisPontos messages.
/**
 * It allocates the memory for the array and calls
 * first_pkg__msg__DistanciaDoisPontos__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_first_pkg
first_pkg__msg__DistanciaDoisPontos__Sequence *
first_pkg__msg__DistanciaDoisPontos__Sequence__create(size_t size);

/// Destroy array of msg/DistanciaDoisPontos messages.
/**
 * It calls
 * first_pkg__msg__DistanciaDoisPontos__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_pkg
void
first_pkg__msg__DistanciaDoisPontos__Sequence__destroy(first_pkg__msg__DistanciaDoisPontos__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // FIRST_PKG__MSG__DETAIL__DISTANCIA_DOIS_PONTOS__FUNCTIONS_H_
