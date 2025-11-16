// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ur_msgs:srv/SetForceMode.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ur_msgs/srv/detail/set_force_mode__rosidl_typesupport_introspection_c.h"
#include "ur_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ur_msgs/srv/detail/set_force_mode__functions.h"
#include "ur_msgs/srv/detail/set_force_mode__struct.h"


// Include directives for member types
// Member `task_frame`
#include "geometry_msgs/msg/pose_stamped.h"
// Member `task_frame`
#include "geometry_msgs/msg/detail/pose_stamped__rosidl_typesupport_introspection_c.h"
// Member `wrench`
#include "geometry_msgs/msg/wrench.h"
// Member `wrench`
#include "geometry_msgs/msg/detail/wrench__rosidl_typesupport_introspection_c.h"
// Member `speed_limits`
#include "geometry_msgs/msg/twist.h"
// Member `speed_limits`
#include "geometry_msgs/msg/detail/twist__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ur_msgs__srv__SetForceMode_Request__rosidl_typesupport_introspection_c__SetForceMode_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ur_msgs__srv__SetForceMode_Request__init(message_memory);
}

void ur_msgs__srv__SetForceMode_Request__rosidl_typesupport_introspection_c__SetForceMode_Request_fini_function(void * message_memory)
{
  ur_msgs__srv__SetForceMode_Request__fini(message_memory);
}

size_t ur_msgs__srv__SetForceMode_Request__rosidl_typesupport_introspection_c__size_function__SetForceMode_Request__deviation_limits(
  const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * ur_msgs__srv__SetForceMode_Request__rosidl_typesupport_introspection_c__get_const_function__SetForceMode_Request__deviation_limits(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * ur_msgs__srv__SetForceMode_Request__rosidl_typesupport_introspection_c__get_function__SetForceMode_Request__deviation_limits(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void ur_msgs__srv__SetForceMode_Request__rosidl_typesupport_introspection_c__fetch_function__SetForceMode_Request__deviation_limits(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    ur_msgs__srv__SetForceMode_Request__rosidl_typesupport_introspection_c__get_const_function__SetForceMode_Request__deviation_limits(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void ur_msgs__srv__SetForceMode_Request__rosidl_typesupport_introspection_c__assign_function__SetForceMode_Request__deviation_limits(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    ur_msgs__srv__SetForceMode_Request__rosidl_typesupport_introspection_c__get_function__SetForceMode_Request__deviation_limits(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember ur_msgs__srv__SetForceMode_Request__rosidl_typesupport_introspection_c__SetForceMode_Request_message_member_array[13] = {
  {
    "task_frame",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_msgs__srv__SetForceMode_Request, task_frame),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "selection_vector_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_msgs__srv__SetForceMode_Request, selection_vector_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "selection_vector_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_msgs__srv__SetForceMode_Request, selection_vector_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "selection_vector_z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_msgs__srv__SetForceMode_Request, selection_vector_z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "selection_vector_rx",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_msgs__srv__SetForceMode_Request, selection_vector_rx),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "selection_vector_ry",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_msgs__srv__SetForceMode_Request, selection_vector_ry),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "selection_vector_rz",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_msgs__srv__SetForceMode_Request, selection_vector_rz),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "wrench",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_msgs__srv__SetForceMode_Request, wrench),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_msgs__srv__SetForceMode_Request, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed_limits",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_msgs__srv__SetForceMode_Request, speed_limits),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "deviation_limits",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(ur_msgs__srv__SetForceMode_Request, deviation_limits),  // bytes offset in struct
    NULL,  // default value
    ur_msgs__srv__SetForceMode_Request__rosidl_typesupport_introspection_c__size_function__SetForceMode_Request__deviation_limits,  // size() function pointer
    ur_msgs__srv__SetForceMode_Request__rosidl_typesupport_introspection_c__get_const_function__SetForceMode_Request__deviation_limits,  // get_const(index) function pointer
    ur_msgs__srv__SetForceMode_Request__rosidl_typesupport_introspection_c__get_function__SetForceMode_Request__deviation_limits,  // get(index) function pointer
    ur_msgs__srv__SetForceMode_Request__rosidl_typesupport_introspection_c__fetch_function__SetForceMode_Request__deviation_limits,  // fetch(index, &value) function pointer
    ur_msgs__srv__SetForceMode_Request__rosidl_typesupport_introspection_c__assign_function__SetForceMode_Request__deviation_limits,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "damping_factor",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_msgs__srv__SetForceMode_Request, damping_factor),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gain_scaling",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_msgs__srv__SetForceMode_Request, gain_scaling),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ur_msgs__srv__SetForceMode_Request__rosidl_typesupport_introspection_c__SetForceMode_Request_message_members = {
  "ur_msgs__srv",  // message namespace
  "SetForceMode_Request",  // message name
  13,  // number of fields
  sizeof(ur_msgs__srv__SetForceMode_Request),
  false,  // has_any_key_member_
  ur_msgs__srv__SetForceMode_Request__rosidl_typesupport_introspection_c__SetForceMode_Request_message_member_array,  // message members
  ur_msgs__srv__SetForceMode_Request__rosidl_typesupport_introspection_c__SetForceMode_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ur_msgs__srv__SetForceMode_Request__rosidl_typesupport_introspection_c__SetForceMode_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ur_msgs__srv__SetForceMode_Request__rosidl_typesupport_introspection_c__SetForceMode_Request_message_type_support_handle = {
  0,
  &ur_msgs__srv__SetForceMode_Request__rosidl_typesupport_introspection_c__SetForceMode_Request_message_members,
  get_message_typesupport_handle_function,
  &ur_msgs__srv__SetForceMode_Request__get_type_hash,
  &ur_msgs__srv__SetForceMode_Request__get_type_description,
  &ur_msgs__srv__SetForceMode_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ur_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_msgs, srv, SetForceMode_Request)() {
  ur_msgs__srv__SetForceMode_Request__rosidl_typesupport_introspection_c__SetForceMode_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseStamped)();
  ur_msgs__srv__SetForceMode_Request__rosidl_typesupport_introspection_c__SetForceMode_Request_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Wrench)();
  ur_msgs__srv__SetForceMode_Request__rosidl_typesupport_introspection_c__SetForceMode_Request_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Twist)();
  if (!ur_msgs__srv__SetForceMode_Request__rosidl_typesupport_introspection_c__SetForceMode_Request_message_type_support_handle.typesupport_identifier) {
    ur_msgs__srv__SetForceMode_Request__rosidl_typesupport_introspection_c__SetForceMode_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ur_msgs__srv__SetForceMode_Request__rosidl_typesupport_introspection_c__SetForceMode_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ur_msgs/srv/detail/set_force_mode__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ur_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ur_msgs/srv/detail/set_force_mode__functions.h"
// already included above
// #include "ur_msgs/srv/detail/set_force_mode__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ur_msgs__srv__SetForceMode_Response__rosidl_typesupport_introspection_c__SetForceMode_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ur_msgs__srv__SetForceMode_Response__init(message_memory);
}

void ur_msgs__srv__SetForceMode_Response__rosidl_typesupport_introspection_c__SetForceMode_Response_fini_function(void * message_memory)
{
  ur_msgs__srv__SetForceMode_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ur_msgs__srv__SetForceMode_Response__rosidl_typesupport_introspection_c__SetForceMode_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_msgs__srv__SetForceMode_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ur_msgs__srv__SetForceMode_Response__rosidl_typesupport_introspection_c__SetForceMode_Response_message_members = {
  "ur_msgs__srv",  // message namespace
  "SetForceMode_Response",  // message name
  1,  // number of fields
  sizeof(ur_msgs__srv__SetForceMode_Response),
  false,  // has_any_key_member_
  ur_msgs__srv__SetForceMode_Response__rosidl_typesupport_introspection_c__SetForceMode_Response_message_member_array,  // message members
  ur_msgs__srv__SetForceMode_Response__rosidl_typesupport_introspection_c__SetForceMode_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ur_msgs__srv__SetForceMode_Response__rosidl_typesupport_introspection_c__SetForceMode_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ur_msgs__srv__SetForceMode_Response__rosidl_typesupport_introspection_c__SetForceMode_Response_message_type_support_handle = {
  0,
  &ur_msgs__srv__SetForceMode_Response__rosidl_typesupport_introspection_c__SetForceMode_Response_message_members,
  get_message_typesupport_handle_function,
  &ur_msgs__srv__SetForceMode_Response__get_type_hash,
  &ur_msgs__srv__SetForceMode_Response__get_type_description,
  &ur_msgs__srv__SetForceMode_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ur_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_msgs, srv, SetForceMode_Response)() {
  if (!ur_msgs__srv__SetForceMode_Response__rosidl_typesupport_introspection_c__SetForceMode_Response_message_type_support_handle.typesupport_identifier) {
    ur_msgs__srv__SetForceMode_Response__rosidl_typesupport_introspection_c__SetForceMode_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ur_msgs__srv__SetForceMode_Response__rosidl_typesupport_introspection_c__SetForceMode_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ur_msgs/srv/detail/set_force_mode__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ur_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ur_msgs/srv/detail/set_force_mode__functions.h"
// already included above
// #include "ur_msgs/srv/detail/set_force_mode__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "ur_msgs/srv/set_force_mode.h"
// Member `request`
// Member `response`
// already included above
// #include "ur_msgs/srv/detail/set_force_mode__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ur_msgs__srv__SetForceMode_Event__rosidl_typesupport_introspection_c__SetForceMode_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ur_msgs__srv__SetForceMode_Event__init(message_memory);
}

void ur_msgs__srv__SetForceMode_Event__rosidl_typesupport_introspection_c__SetForceMode_Event_fini_function(void * message_memory)
{
  ur_msgs__srv__SetForceMode_Event__fini(message_memory);
}

size_t ur_msgs__srv__SetForceMode_Event__rosidl_typesupport_introspection_c__size_function__SetForceMode_Event__request(
  const void * untyped_member)
{
  const ur_msgs__srv__SetForceMode_Request__Sequence * member =
    (const ur_msgs__srv__SetForceMode_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * ur_msgs__srv__SetForceMode_Event__rosidl_typesupport_introspection_c__get_const_function__SetForceMode_Event__request(
  const void * untyped_member, size_t index)
{
  const ur_msgs__srv__SetForceMode_Request__Sequence * member =
    (const ur_msgs__srv__SetForceMode_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ur_msgs__srv__SetForceMode_Event__rosidl_typesupport_introspection_c__get_function__SetForceMode_Event__request(
  void * untyped_member, size_t index)
{
  ur_msgs__srv__SetForceMode_Request__Sequence * member =
    (ur_msgs__srv__SetForceMode_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void ur_msgs__srv__SetForceMode_Event__rosidl_typesupport_introspection_c__fetch_function__SetForceMode_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ur_msgs__srv__SetForceMode_Request * item =
    ((const ur_msgs__srv__SetForceMode_Request *)
    ur_msgs__srv__SetForceMode_Event__rosidl_typesupport_introspection_c__get_const_function__SetForceMode_Event__request(untyped_member, index));
  ur_msgs__srv__SetForceMode_Request * value =
    (ur_msgs__srv__SetForceMode_Request *)(untyped_value);
  *value = *item;
}

void ur_msgs__srv__SetForceMode_Event__rosidl_typesupport_introspection_c__assign_function__SetForceMode_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ur_msgs__srv__SetForceMode_Request * item =
    ((ur_msgs__srv__SetForceMode_Request *)
    ur_msgs__srv__SetForceMode_Event__rosidl_typesupport_introspection_c__get_function__SetForceMode_Event__request(untyped_member, index));
  const ur_msgs__srv__SetForceMode_Request * value =
    (const ur_msgs__srv__SetForceMode_Request *)(untyped_value);
  *item = *value;
}

bool ur_msgs__srv__SetForceMode_Event__rosidl_typesupport_introspection_c__resize_function__SetForceMode_Event__request(
  void * untyped_member, size_t size)
{
  ur_msgs__srv__SetForceMode_Request__Sequence * member =
    (ur_msgs__srv__SetForceMode_Request__Sequence *)(untyped_member);
  ur_msgs__srv__SetForceMode_Request__Sequence__fini(member);
  return ur_msgs__srv__SetForceMode_Request__Sequence__init(member, size);
}

size_t ur_msgs__srv__SetForceMode_Event__rosidl_typesupport_introspection_c__size_function__SetForceMode_Event__response(
  const void * untyped_member)
{
  const ur_msgs__srv__SetForceMode_Response__Sequence * member =
    (const ur_msgs__srv__SetForceMode_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * ur_msgs__srv__SetForceMode_Event__rosidl_typesupport_introspection_c__get_const_function__SetForceMode_Event__response(
  const void * untyped_member, size_t index)
{
  const ur_msgs__srv__SetForceMode_Response__Sequence * member =
    (const ur_msgs__srv__SetForceMode_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ur_msgs__srv__SetForceMode_Event__rosidl_typesupport_introspection_c__get_function__SetForceMode_Event__response(
  void * untyped_member, size_t index)
{
  ur_msgs__srv__SetForceMode_Response__Sequence * member =
    (ur_msgs__srv__SetForceMode_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void ur_msgs__srv__SetForceMode_Event__rosidl_typesupport_introspection_c__fetch_function__SetForceMode_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ur_msgs__srv__SetForceMode_Response * item =
    ((const ur_msgs__srv__SetForceMode_Response *)
    ur_msgs__srv__SetForceMode_Event__rosidl_typesupport_introspection_c__get_const_function__SetForceMode_Event__response(untyped_member, index));
  ur_msgs__srv__SetForceMode_Response * value =
    (ur_msgs__srv__SetForceMode_Response *)(untyped_value);
  *value = *item;
}

void ur_msgs__srv__SetForceMode_Event__rosidl_typesupport_introspection_c__assign_function__SetForceMode_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ur_msgs__srv__SetForceMode_Response * item =
    ((ur_msgs__srv__SetForceMode_Response *)
    ur_msgs__srv__SetForceMode_Event__rosidl_typesupport_introspection_c__get_function__SetForceMode_Event__response(untyped_member, index));
  const ur_msgs__srv__SetForceMode_Response * value =
    (const ur_msgs__srv__SetForceMode_Response *)(untyped_value);
  *item = *value;
}

bool ur_msgs__srv__SetForceMode_Event__rosidl_typesupport_introspection_c__resize_function__SetForceMode_Event__response(
  void * untyped_member, size_t size)
{
  ur_msgs__srv__SetForceMode_Response__Sequence * member =
    (ur_msgs__srv__SetForceMode_Response__Sequence *)(untyped_member);
  ur_msgs__srv__SetForceMode_Response__Sequence__fini(member);
  return ur_msgs__srv__SetForceMode_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ur_msgs__srv__SetForceMode_Event__rosidl_typesupport_introspection_c__SetForceMode_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_msgs__srv__SetForceMode_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(ur_msgs__srv__SetForceMode_Event, request),  // bytes offset in struct
    NULL,  // default value
    ur_msgs__srv__SetForceMode_Event__rosidl_typesupport_introspection_c__size_function__SetForceMode_Event__request,  // size() function pointer
    ur_msgs__srv__SetForceMode_Event__rosidl_typesupport_introspection_c__get_const_function__SetForceMode_Event__request,  // get_const(index) function pointer
    ur_msgs__srv__SetForceMode_Event__rosidl_typesupport_introspection_c__get_function__SetForceMode_Event__request,  // get(index) function pointer
    ur_msgs__srv__SetForceMode_Event__rosidl_typesupport_introspection_c__fetch_function__SetForceMode_Event__request,  // fetch(index, &value) function pointer
    ur_msgs__srv__SetForceMode_Event__rosidl_typesupport_introspection_c__assign_function__SetForceMode_Event__request,  // assign(index, value) function pointer
    ur_msgs__srv__SetForceMode_Event__rosidl_typesupport_introspection_c__resize_function__SetForceMode_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(ur_msgs__srv__SetForceMode_Event, response),  // bytes offset in struct
    NULL,  // default value
    ur_msgs__srv__SetForceMode_Event__rosidl_typesupport_introspection_c__size_function__SetForceMode_Event__response,  // size() function pointer
    ur_msgs__srv__SetForceMode_Event__rosidl_typesupport_introspection_c__get_const_function__SetForceMode_Event__response,  // get_const(index) function pointer
    ur_msgs__srv__SetForceMode_Event__rosidl_typesupport_introspection_c__get_function__SetForceMode_Event__response,  // get(index) function pointer
    ur_msgs__srv__SetForceMode_Event__rosidl_typesupport_introspection_c__fetch_function__SetForceMode_Event__response,  // fetch(index, &value) function pointer
    ur_msgs__srv__SetForceMode_Event__rosidl_typesupport_introspection_c__assign_function__SetForceMode_Event__response,  // assign(index, value) function pointer
    ur_msgs__srv__SetForceMode_Event__rosidl_typesupport_introspection_c__resize_function__SetForceMode_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ur_msgs__srv__SetForceMode_Event__rosidl_typesupport_introspection_c__SetForceMode_Event_message_members = {
  "ur_msgs__srv",  // message namespace
  "SetForceMode_Event",  // message name
  3,  // number of fields
  sizeof(ur_msgs__srv__SetForceMode_Event),
  false,  // has_any_key_member_
  ur_msgs__srv__SetForceMode_Event__rosidl_typesupport_introspection_c__SetForceMode_Event_message_member_array,  // message members
  ur_msgs__srv__SetForceMode_Event__rosidl_typesupport_introspection_c__SetForceMode_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  ur_msgs__srv__SetForceMode_Event__rosidl_typesupport_introspection_c__SetForceMode_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ur_msgs__srv__SetForceMode_Event__rosidl_typesupport_introspection_c__SetForceMode_Event_message_type_support_handle = {
  0,
  &ur_msgs__srv__SetForceMode_Event__rosidl_typesupport_introspection_c__SetForceMode_Event_message_members,
  get_message_typesupport_handle_function,
  &ur_msgs__srv__SetForceMode_Event__get_type_hash,
  &ur_msgs__srv__SetForceMode_Event__get_type_description,
  &ur_msgs__srv__SetForceMode_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ur_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_msgs, srv, SetForceMode_Event)() {
  ur_msgs__srv__SetForceMode_Event__rosidl_typesupport_introspection_c__SetForceMode_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  ur_msgs__srv__SetForceMode_Event__rosidl_typesupport_introspection_c__SetForceMode_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_msgs, srv, SetForceMode_Request)();
  ur_msgs__srv__SetForceMode_Event__rosidl_typesupport_introspection_c__SetForceMode_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_msgs, srv, SetForceMode_Response)();
  if (!ur_msgs__srv__SetForceMode_Event__rosidl_typesupport_introspection_c__SetForceMode_Event_message_type_support_handle.typesupport_identifier) {
    ur_msgs__srv__SetForceMode_Event__rosidl_typesupport_introspection_c__SetForceMode_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ur_msgs__srv__SetForceMode_Event__rosidl_typesupport_introspection_c__SetForceMode_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ur_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "ur_msgs/srv/detail/set_force_mode__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers ur_msgs__srv__detail__set_force_mode__rosidl_typesupport_introspection_c__SetForceMode_service_members = {
  "ur_msgs__srv",  // service namespace
  "SetForceMode",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // ur_msgs__srv__detail__set_force_mode__rosidl_typesupport_introspection_c__SetForceMode_Request_message_type_support_handle,
  NULL,  // response message
  // ur_msgs__srv__detail__set_force_mode__rosidl_typesupport_introspection_c__SetForceMode_Response_message_type_support_handle
  NULL  // event_message
  // ur_msgs__srv__detail__set_force_mode__rosidl_typesupport_introspection_c__SetForceMode_Response_message_type_support_handle
};


static rosidl_service_type_support_t ur_msgs__srv__detail__set_force_mode__rosidl_typesupport_introspection_c__SetForceMode_service_type_support_handle = {
  0,
  &ur_msgs__srv__detail__set_force_mode__rosidl_typesupport_introspection_c__SetForceMode_service_members,
  get_service_typesupport_handle_function,
  &ur_msgs__srv__SetForceMode_Request__rosidl_typesupport_introspection_c__SetForceMode_Request_message_type_support_handle,
  &ur_msgs__srv__SetForceMode_Response__rosidl_typesupport_introspection_c__SetForceMode_Response_message_type_support_handle,
  &ur_msgs__srv__SetForceMode_Event__rosidl_typesupport_introspection_c__SetForceMode_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    ur_msgs,
    srv,
    SetForceMode
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    ur_msgs,
    srv,
    SetForceMode
  ),
  &ur_msgs__srv__SetForceMode__get_type_hash,
  &ur_msgs__srv__SetForceMode__get_type_description,
  &ur_msgs__srv__SetForceMode__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_msgs, srv, SetForceMode_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_msgs, srv, SetForceMode_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_msgs, srv, SetForceMode_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ur_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_msgs, srv, SetForceMode)(void) {
  if (!ur_msgs__srv__detail__set_force_mode__rosidl_typesupport_introspection_c__SetForceMode_service_type_support_handle.typesupport_identifier) {
    ur_msgs__srv__detail__set_force_mode__rosidl_typesupport_introspection_c__SetForceMode_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)ur_msgs__srv__detail__set_force_mode__rosidl_typesupport_introspection_c__SetForceMode_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_msgs, srv, SetForceMode_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_msgs, srv, SetForceMode_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_msgs, srv, SetForceMode_Event)()->data;
  }

  return &ur_msgs__srv__detail__set_force_mode__rosidl_typesupport_introspection_c__SetForceMode_service_type_support_handle;
}
