// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from first_pkg:msg/DistanciaDoisPontos.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "first_pkg/msg/detail/distancia_dois_pontos__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace first_pkg
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void DistanciaDoisPontos_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) first_pkg::msg::DistanciaDoisPontos(_init);
}

void DistanciaDoisPontos_fini_function(void * message_memory)
{
  auto typed_message = static_cast<first_pkg::msg::DistanciaDoisPontos *>(message_memory);
  typed_message->~DistanciaDoisPontos();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DistanciaDoisPontos_message_member_array[2] = {
  {
    "distanciax",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(first_pkg::msg::DistanciaDoisPontos, distanciax),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "distanciay",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(first_pkg::msg::DistanciaDoisPontos, distanciay),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DistanciaDoisPontos_message_members = {
  "first_pkg::msg",  // message namespace
  "DistanciaDoisPontos",  // message name
  2,  // number of fields
  sizeof(first_pkg::msg::DistanciaDoisPontos),
  DistanciaDoisPontos_message_member_array,  // message members
  DistanciaDoisPontos_init_function,  // function to initialize message memory (memory has to be allocated)
  DistanciaDoisPontos_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DistanciaDoisPontos_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DistanciaDoisPontos_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace first_pkg


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<first_pkg::msg::DistanciaDoisPontos>()
{
  return &::first_pkg::msg::rosidl_typesupport_introspection_cpp::DistanciaDoisPontos_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, first_pkg, msg, DistanciaDoisPontos)() {
  return &::first_pkg::msg::rosidl_typesupport_introspection_cpp::DistanciaDoisPontos_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
