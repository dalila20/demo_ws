// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from my_pkg:srv/DistanciaEuclidiana.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "my_pkg/srv/detail/distancia_euclidiana__rosidl_typesupport_introspection_c.h"
#include "my_pkg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "my_pkg/srv/detail/distancia_euclidiana__functions.h"
#include "my_pkg/srv/detail/distancia_euclidiana__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void DistanciaEuclidiana_Request__rosidl_typesupport_introspection_c__DistanciaEuclidiana_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_pkg__srv__DistanciaEuclidiana_Request__init(message_memory);
}

void DistanciaEuclidiana_Request__rosidl_typesupport_introspection_c__DistanciaEuclidiana_Request_fini_function(void * message_memory)
{
  my_pkg__srv__DistanciaEuclidiana_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember DistanciaEuclidiana_Request__rosidl_typesupport_introspection_c__DistanciaEuclidiana_Request_message_member_array[2] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_pkg__srv__DistanciaEuclidiana_Request, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_pkg__srv__DistanciaEuclidiana_Request, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DistanciaEuclidiana_Request__rosidl_typesupport_introspection_c__DistanciaEuclidiana_Request_message_members = {
  "my_pkg__srv",  // message namespace
  "DistanciaEuclidiana_Request",  // message name
  2,  // number of fields
  sizeof(my_pkg__srv__DistanciaEuclidiana_Request),
  DistanciaEuclidiana_Request__rosidl_typesupport_introspection_c__DistanciaEuclidiana_Request_message_member_array,  // message members
  DistanciaEuclidiana_Request__rosidl_typesupport_introspection_c__DistanciaEuclidiana_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  DistanciaEuclidiana_Request__rosidl_typesupport_introspection_c__DistanciaEuclidiana_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DistanciaEuclidiana_Request__rosidl_typesupport_introspection_c__DistanciaEuclidiana_Request_message_type_support_handle = {
  0,
  &DistanciaEuclidiana_Request__rosidl_typesupport_introspection_c__DistanciaEuclidiana_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_pkg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_pkg, srv, DistanciaEuclidiana_Request)() {
  if (!DistanciaEuclidiana_Request__rosidl_typesupport_introspection_c__DistanciaEuclidiana_Request_message_type_support_handle.typesupport_identifier) {
    DistanciaEuclidiana_Request__rosidl_typesupport_introspection_c__DistanciaEuclidiana_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DistanciaEuclidiana_Request__rosidl_typesupport_introspection_c__DistanciaEuclidiana_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "my_pkg/srv/detail/distancia_euclidiana__rosidl_typesupport_introspection_c.h"
// already included above
// #include "my_pkg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "my_pkg/srv/detail/distancia_euclidiana__functions.h"
// already included above
// #include "my_pkg/srv/detail/distancia_euclidiana__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void DistanciaEuclidiana_Response__rosidl_typesupport_introspection_c__DistanciaEuclidiana_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_pkg__srv__DistanciaEuclidiana_Response__init(message_memory);
}

void DistanciaEuclidiana_Response__rosidl_typesupport_introspection_c__DistanciaEuclidiana_Response_fini_function(void * message_memory)
{
  my_pkg__srv__DistanciaEuclidiana_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember DistanciaEuclidiana_Response__rosidl_typesupport_introspection_c__DistanciaEuclidiana_Response_message_member_array[1] = {
  {
    "dis",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_pkg__srv__DistanciaEuclidiana_Response, dis),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DistanciaEuclidiana_Response__rosidl_typesupport_introspection_c__DistanciaEuclidiana_Response_message_members = {
  "my_pkg__srv",  // message namespace
  "DistanciaEuclidiana_Response",  // message name
  1,  // number of fields
  sizeof(my_pkg__srv__DistanciaEuclidiana_Response),
  DistanciaEuclidiana_Response__rosidl_typesupport_introspection_c__DistanciaEuclidiana_Response_message_member_array,  // message members
  DistanciaEuclidiana_Response__rosidl_typesupport_introspection_c__DistanciaEuclidiana_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  DistanciaEuclidiana_Response__rosidl_typesupport_introspection_c__DistanciaEuclidiana_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DistanciaEuclidiana_Response__rosidl_typesupport_introspection_c__DistanciaEuclidiana_Response_message_type_support_handle = {
  0,
  &DistanciaEuclidiana_Response__rosidl_typesupport_introspection_c__DistanciaEuclidiana_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_pkg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_pkg, srv, DistanciaEuclidiana_Response)() {
  if (!DistanciaEuclidiana_Response__rosidl_typesupport_introspection_c__DistanciaEuclidiana_Response_message_type_support_handle.typesupport_identifier) {
    DistanciaEuclidiana_Response__rosidl_typesupport_introspection_c__DistanciaEuclidiana_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DistanciaEuclidiana_Response__rosidl_typesupport_introspection_c__DistanciaEuclidiana_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "my_pkg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "my_pkg/srv/detail/distancia_euclidiana__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers my_pkg__srv__detail__distancia_euclidiana__rosidl_typesupport_introspection_c__DistanciaEuclidiana_service_members = {
  "my_pkg__srv",  // service namespace
  "DistanciaEuclidiana",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // my_pkg__srv__detail__distancia_euclidiana__rosidl_typesupport_introspection_c__DistanciaEuclidiana_Request_message_type_support_handle,
  NULL  // response message
  // my_pkg__srv__detail__distancia_euclidiana__rosidl_typesupport_introspection_c__DistanciaEuclidiana_Response_message_type_support_handle
};

static rosidl_service_type_support_t my_pkg__srv__detail__distancia_euclidiana__rosidl_typesupport_introspection_c__DistanciaEuclidiana_service_type_support_handle = {
  0,
  &my_pkg__srv__detail__distancia_euclidiana__rosidl_typesupport_introspection_c__DistanciaEuclidiana_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_pkg, srv, DistanciaEuclidiana_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_pkg, srv, DistanciaEuclidiana_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_pkg
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_pkg, srv, DistanciaEuclidiana)() {
  if (!my_pkg__srv__detail__distancia_euclidiana__rosidl_typesupport_introspection_c__DistanciaEuclidiana_service_type_support_handle.typesupport_identifier) {
    my_pkg__srv__detail__distancia_euclidiana__rosidl_typesupport_introspection_c__DistanciaEuclidiana_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)my_pkg__srv__detail__distancia_euclidiana__rosidl_typesupport_introspection_c__DistanciaEuclidiana_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_pkg, srv, DistanciaEuclidiana_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_pkg, srv, DistanciaEuclidiana_Response)()->data;
  }

  return &my_pkg__srv__detail__distancia_euclidiana__rosidl_typesupport_introspection_c__DistanciaEuclidiana_service_type_support_handle;
}
