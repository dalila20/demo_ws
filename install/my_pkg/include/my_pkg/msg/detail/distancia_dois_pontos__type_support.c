// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from my_pkg:msg/DistanciaDoisPontos.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "my_pkg/msg/detail/distancia_dois_pontos__rosidl_typesupport_introspection_c.h"
#include "my_pkg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "my_pkg/msg/detail/distancia_dois_pontos__functions.h"
#include "my_pkg/msg/detail/distancia_dois_pontos__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void DistanciaDoisPontos__rosidl_typesupport_introspection_c__DistanciaDoisPontos_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_pkg__msg__DistanciaDoisPontos__init(message_memory);
}

void DistanciaDoisPontos__rosidl_typesupport_introspection_c__DistanciaDoisPontos_fini_function(void * message_memory)
{
  my_pkg__msg__DistanciaDoisPontos__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember DistanciaDoisPontos__rosidl_typesupport_introspection_c__DistanciaDoisPontos_message_member_array[2] = {
  {
    "distanciax",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_pkg__msg__DistanciaDoisPontos, distanciax),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "distanciay",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_pkg__msg__DistanciaDoisPontos, distanciay),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DistanciaDoisPontos__rosidl_typesupport_introspection_c__DistanciaDoisPontos_message_members = {
  "my_pkg__msg",  // message namespace
  "DistanciaDoisPontos",  // message name
  2,  // number of fields
  sizeof(my_pkg__msg__DistanciaDoisPontos),
  DistanciaDoisPontos__rosidl_typesupport_introspection_c__DistanciaDoisPontos_message_member_array,  // message members
  DistanciaDoisPontos__rosidl_typesupport_introspection_c__DistanciaDoisPontos_init_function,  // function to initialize message memory (memory has to be allocated)
  DistanciaDoisPontos__rosidl_typesupport_introspection_c__DistanciaDoisPontos_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DistanciaDoisPontos__rosidl_typesupport_introspection_c__DistanciaDoisPontos_message_type_support_handle = {
  0,
  &DistanciaDoisPontos__rosidl_typesupport_introspection_c__DistanciaDoisPontos_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_pkg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_pkg, msg, DistanciaDoisPontos)() {
  if (!DistanciaDoisPontos__rosidl_typesupport_introspection_c__DistanciaDoisPontos_message_type_support_handle.typesupport_identifier) {
    DistanciaDoisPontos__rosidl_typesupport_introspection_c__DistanciaDoisPontos_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DistanciaDoisPontos__rosidl_typesupport_introspection_c__DistanciaDoisPontos_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
