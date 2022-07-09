// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from my_pkg:srv/DistanciaEuclidiana.idl
// generated code does not contain a copyright notice

#ifndef MY_PKG__SRV__DETAIL__DISTANCIA_EUCLIDIANA__FUNCTIONS_H_
#define MY_PKG__SRV__DETAIL__DISTANCIA_EUCLIDIANA__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "my_pkg/msg/rosidl_generator_c__visibility_control.h"

#include "my_pkg/srv/detail/distancia_euclidiana__struct.h"

/// Initialize srv/DistanciaEuclidiana message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * my_pkg__srv__DistanciaEuclidiana_Request
 * )) before or use
 * my_pkg__srv__DistanciaEuclidiana_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_my_pkg
bool
my_pkg__srv__DistanciaEuclidiana_Request__init(my_pkg__srv__DistanciaEuclidiana_Request * msg);

/// Finalize srv/DistanciaEuclidiana message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_pkg
void
my_pkg__srv__DistanciaEuclidiana_Request__fini(my_pkg__srv__DistanciaEuclidiana_Request * msg);

/// Create srv/DistanciaEuclidiana message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * my_pkg__srv__DistanciaEuclidiana_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_pkg
my_pkg__srv__DistanciaEuclidiana_Request *
my_pkg__srv__DistanciaEuclidiana_Request__create();

/// Destroy srv/DistanciaEuclidiana message.
/**
 * It calls
 * my_pkg__srv__DistanciaEuclidiana_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_pkg
void
my_pkg__srv__DistanciaEuclidiana_Request__destroy(my_pkg__srv__DistanciaEuclidiana_Request * msg);


/// Initialize array of srv/DistanciaEuclidiana messages.
/**
 * It allocates the memory for the number of elements and calls
 * my_pkg__srv__DistanciaEuclidiana_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_pkg
bool
my_pkg__srv__DistanciaEuclidiana_Request__Sequence__init(my_pkg__srv__DistanciaEuclidiana_Request__Sequence * array, size_t size);

/// Finalize array of srv/DistanciaEuclidiana messages.
/**
 * It calls
 * my_pkg__srv__DistanciaEuclidiana_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_pkg
void
my_pkg__srv__DistanciaEuclidiana_Request__Sequence__fini(my_pkg__srv__DistanciaEuclidiana_Request__Sequence * array);

/// Create array of srv/DistanciaEuclidiana messages.
/**
 * It allocates the memory for the array and calls
 * my_pkg__srv__DistanciaEuclidiana_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_pkg
my_pkg__srv__DistanciaEuclidiana_Request__Sequence *
my_pkg__srv__DistanciaEuclidiana_Request__Sequence__create(size_t size);

/// Destroy array of srv/DistanciaEuclidiana messages.
/**
 * It calls
 * my_pkg__srv__DistanciaEuclidiana_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_pkg
void
my_pkg__srv__DistanciaEuclidiana_Request__Sequence__destroy(my_pkg__srv__DistanciaEuclidiana_Request__Sequence * array);

/// Initialize srv/DistanciaEuclidiana message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * my_pkg__srv__DistanciaEuclidiana_Response
 * )) before or use
 * my_pkg__srv__DistanciaEuclidiana_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_my_pkg
bool
my_pkg__srv__DistanciaEuclidiana_Response__init(my_pkg__srv__DistanciaEuclidiana_Response * msg);

/// Finalize srv/DistanciaEuclidiana message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_pkg
void
my_pkg__srv__DistanciaEuclidiana_Response__fini(my_pkg__srv__DistanciaEuclidiana_Response * msg);

/// Create srv/DistanciaEuclidiana message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * my_pkg__srv__DistanciaEuclidiana_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_pkg
my_pkg__srv__DistanciaEuclidiana_Response *
my_pkg__srv__DistanciaEuclidiana_Response__create();

/// Destroy srv/DistanciaEuclidiana message.
/**
 * It calls
 * my_pkg__srv__DistanciaEuclidiana_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_pkg
void
my_pkg__srv__DistanciaEuclidiana_Response__destroy(my_pkg__srv__DistanciaEuclidiana_Response * msg);


/// Initialize array of srv/DistanciaEuclidiana messages.
/**
 * It allocates the memory for the number of elements and calls
 * my_pkg__srv__DistanciaEuclidiana_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_pkg
bool
my_pkg__srv__DistanciaEuclidiana_Response__Sequence__init(my_pkg__srv__DistanciaEuclidiana_Response__Sequence * array, size_t size);

/// Finalize array of srv/DistanciaEuclidiana messages.
/**
 * It calls
 * my_pkg__srv__DistanciaEuclidiana_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_pkg
void
my_pkg__srv__DistanciaEuclidiana_Response__Sequence__fini(my_pkg__srv__DistanciaEuclidiana_Response__Sequence * array);

/// Create array of srv/DistanciaEuclidiana messages.
/**
 * It allocates the memory for the array and calls
 * my_pkg__srv__DistanciaEuclidiana_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_pkg
my_pkg__srv__DistanciaEuclidiana_Response__Sequence *
my_pkg__srv__DistanciaEuclidiana_Response__Sequence__create(size_t size);

/// Destroy array of srv/DistanciaEuclidiana messages.
/**
 * It calls
 * my_pkg__srv__DistanciaEuclidiana_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_pkg
void
my_pkg__srv__DistanciaEuclidiana_Response__Sequence__destroy(my_pkg__srv__DistanciaEuclidiana_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // MY_PKG__SRV__DETAIL__DISTANCIA_EUCLIDIANA__FUNCTIONS_H_
