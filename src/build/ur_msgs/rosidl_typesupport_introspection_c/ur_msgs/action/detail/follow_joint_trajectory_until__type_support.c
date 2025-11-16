// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ur_msgs:action/FollowJointTrajectoryUntil.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ur_msgs/action/detail/follow_joint_trajectory_until__rosidl_typesupport_introspection_c.h"
#include "ur_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ur_msgs/action/detail/follow_joint_trajectory_until__functions.h"
#include "ur_msgs/action/detail/follow_joint_trajectory_until__struct.h"


// Include directives for member types
// Member `trajectory`
#include "trajectory_msgs/msg/joint_trajectory.h"
// Member `trajectory`
#include "trajectory_msgs/msg/detail/joint_trajectory__rosidl_typesupport_introspection_c.h"
// Member `path_tolerance`
// Member `goal_tolerance`
#include "control_msgs/msg/joint_tolerance.h"
// Member `path_tolerance`
// Member `goal_tolerance`
#include "control_msgs/msg/detail/joint_tolerance__rosidl_typesupport_introspection_c.h"
// Member `goal_time_tolerance`
#include "builtin_interfaces/msg/duration.h"
// Member `goal_time_tolerance`
#include "builtin_interfaces/msg/detail/duration__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ur_msgs__action__FollowJointTrajectoryUntil_Goal__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ur_msgs__action__FollowJointTrajectoryUntil_Goal__init(message_memory);
}

void ur_msgs__action__FollowJointTrajectoryUntil_Goal__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_Goal_fini_function(void * message_memory)
{
  ur_msgs__action__FollowJointTrajectoryUntil_Goal__fini(message_memory);
}

size_t ur_msgs__action__FollowJointTrajectoryUntil_Goal__rosidl_typesupport_introspection_c__size_function__FollowJointTrajectoryUntil_Goal__path_tolerance(
  const void * untyped_member)
{
  const control_msgs__msg__JointTolerance__Sequence * member =
    (const control_msgs__msg__JointTolerance__Sequence *)(untyped_member);
  return member->size;
}

const void * ur_msgs__action__FollowJointTrajectoryUntil_Goal__rosidl_typesupport_introspection_c__get_const_function__FollowJointTrajectoryUntil_Goal__path_tolerance(
  const void * untyped_member, size_t index)
{
  const control_msgs__msg__JointTolerance__Sequence * member =
    (const control_msgs__msg__JointTolerance__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ur_msgs__action__FollowJointTrajectoryUntil_Goal__rosidl_typesupport_introspection_c__get_function__FollowJointTrajectoryUntil_Goal__path_tolerance(
  void * untyped_member, size_t index)
{
  control_msgs__msg__JointTolerance__Sequence * member =
    (control_msgs__msg__JointTolerance__Sequence *)(untyped_member);
  return &member->data[index];
}

void ur_msgs__action__FollowJointTrajectoryUntil_Goal__rosidl_typesupport_introspection_c__fetch_function__FollowJointTrajectoryUntil_Goal__path_tolerance(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const control_msgs__msg__JointTolerance * item =
    ((const control_msgs__msg__JointTolerance *)
    ur_msgs__action__FollowJointTrajectoryUntil_Goal__rosidl_typesupport_introspection_c__get_const_function__FollowJointTrajectoryUntil_Goal__path_tolerance(untyped_member, index));
  control_msgs__msg__JointTolerance * value =
    (control_msgs__msg__JointTolerance *)(untyped_value);
  *value = *item;
}

void ur_msgs__action__FollowJointTrajectoryUntil_Goal__rosidl_typesupport_introspection_c__assign_function__FollowJointTrajectoryUntil_Goal__path_tolerance(
  void * untyped_member, size_t index, const void * untyped_value)
{
  control_msgs__msg__JointTolerance * item =
    ((control_msgs__msg__JointTolerance *)
    ur_msgs__action__FollowJointTrajectoryUntil_Goal__rosidl_typesupport_introspection_c__get_function__FollowJointTrajectoryUntil_Goal__path_tolerance(untyped_member, index));
  const control_msgs__msg__JointTolerance * value =
    (const control_msgs__msg__JointTolerance *)(untyped_value);
  *item = *value;
}

bool ur_msgs__action__FollowJointTrajectoryUntil_Goal__rosidl_typesupport_introspection_c__resize_function__FollowJointTrajectoryUntil_Goal__path_tolerance(
  void * untyped_member, size_t size)
{
  control_msgs__msg__JointTolerance__Sequence * member =
    (control_msgs__msg__JointTolerance__Sequence *)(untyped_member);
  control_msgs__msg__JointTolerance__Sequence__fini(member);
  return control_msgs__msg__JointTolerance__Sequence__init(member, size);
}

size_t ur_msgs__action__FollowJointTrajectoryUntil_Goal__rosidl_typesupport_introspection_c__size_function__FollowJointTrajectoryUntil_Goal__goal_tolerance(
  const void * untyped_member)
{
  const control_msgs__msg__JointTolerance__Sequence * member =
    (const control_msgs__msg__JointTolerance__Sequence *)(untyped_member);
  return member->size;
}

const void * ur_msgs__action__FollowJointTrajectoryUntil_Goal__rosidl_typesupport_introspection_c__get_const_function__FollowJointTrajectoryUntil_Goal__goal_tolerance(
  const void * untyped_member, size_t index)
{
  const control_msgs__msg__JointTolerance__Sequence * member =
    (const control_msgs__msg__JointTolerance__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ur_msgs__action__FollowJointTrajectoryUntil_Goal__rosidl_typesupport_introspection_c__get_function__FollowJointTrajectoryUntil_Goal__goal_tolerance(
  void * untyped_member, size_t index)
{
  control_msgs__msg__JointTolerance__Sequence * member =
    (control_msgs__msg__JointTolerance__Sequence *)(untyped_member);
  return &member->data[index];
}

void ur_msgs__action__FollowJointTrajectoryUntil_Goal__rosidl_typesupport_introspection_c__fetch_function__FollowJointTrajectoryUntil_Goal__goal_tolerance(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const control_msgs__msg__JointTolerance * item =
    ((const control_msgs__msg__JointTolerance *)
    ur_msgs__action__FollowJointTrajectoryUntil_Goal__rosidl_typesupport_introspection_c__get_const_function__FollowJointTrajectoryUntil_Goal__goal_tolerance(untyped_member, index));
  control_msgs__msg__JointTolerance * value =
    (control_msgs__msg__JointTolerance *)(untyped_value);
  *value = *item;
}

void ur_msgs__action__FollowJointTrajectoryUntil_Goal__rosidl_typesupport_introspection_c__assign_function__FollowJointTrajectoryUntil_Goal__goal_tolerance(
  void * untyped_member, size_t index, const void * untyped_value)
{
  control_msgs__msg__JointTolerance * item =
    ((control_msgs__msg__JointTolerance *)
    ur_msgs__action__FollowJointTrajectoryUntil_Goal__rosidl_typesupport_introspection_c__get_function__FollowJointTrajectoryUntil_Goal__goal_tolerance(untyped_member, index));
  const control_msgs__msg__JointTolerance * value =
    (const control_msgs__msg__JointTolerance *)(untyped_value);
  *item = *value;
}

bool ur_msgs__action__FollowJointTrajectoryUntil_Goal__rosidl_typesupport_introspection_c__resize_function__FollowJointTrajectoryUntil_Goal__goal_tolerance(
  void * untyped_member, size_t size)
{
  control_msgs__msg__JointTolerance__Sequence * member =
    (control_msgs__msg__JointTolerance__Sequence *)(untyped_member);
  control_msgs__msg__JointTolerance__Sequence__fini(member);
  return control_msgs__msg__JointTolerance__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ur_msgs__action__FollowJointTrajectoryUntil_Goal__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_Goal_message_member_array[5] = {
  {
    "trajectory",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_msgs__action__FollowJointTrajectoryUntil_Goal, trajectory),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "path_tolerance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_msgs__action__FollowJointTrajectoryUntil_Goal, path_tolerance),  // bytes offset in struct
    NULL,  // default value
    ur_msgs__action__FollowJointTrajectoryUntil_Goal__rosidl_typesupport_introspection_c__size_function__FollowJointTrajectoryUntil_Goal__path_tolerance,  // size() function pointer
    ur_msgs__action__FollowJointTrajectoryUntil_Goal__rosidl_typesupport_introspection_c__get_const_function__FollowJointTrajectoryUntil_Goal__path_tolerance,  // get_const(index) function pointer
    ur_msgs__action__FollowJointTrajectoryUntil_Goal__rosidl_typesupport_introspection_c__get_function__FollowJointTrajectoryUntil_Goal__path_tolerance,  // get(index) function pointer
    ur_msgs__action__FollowJointTrajectoryUntil_Goal__rosidl_typesupport_introspection_c__fetch_function__FollowJointTrajectoryUntil_Goal__path_tolerance,  // fetch(index, &value) function pointer
    ur_msgs__action__FollowJointTrajectoryUntil_Goal__rosidl_typesupport_introspection_c__assign_function__FollowJointTrajectoryUntil_Goal__path_tolerance,  // assign(index, value) function pointer
    ur_msgs__action__FollowJointTrajectoryUntil_Goal__rosidl_typesupport_introspection_c__resize_function__FollowJointTrajectoryUntil_Goal__path_tolerance  // resize(index) function pointer
  },
  {
    "goal_tolerance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_msgs__action__FollowJointTrajectoryUntil_Goal, goal_tolerance),  // bytes offset in struct
    NULL,  // default value
    ur_msgs__action__FollowJointTrajectoryUntil_Goal__rosidl_typesupport_introspection_c__size_function__FollowJointTrajectoryUntil_Goal__goal_tolerance,  // size() function pointer
    ur_msgs__action__FollowJointTrajectoryUntil_Goal__rosidl_typesupport_introspection_c__get_const_function__FollowJointTrajectoryUntil_Goal__goal_tolerance,  // get_const(index) function pointer
    ur_msgs__action__FollowJointTrajectoryUntil_Goal__rosidl_typesupport_introspection_c__get_function__FollowJointTrajectoryUntil_Goal__goal_tolerance,  // get(index) function pointer
    ur_msgs__action__FollowJointTrajectoryUntil_Goal__rosidl_typesupport_introspection_c__fetch_function__FollowJointTrajectoryUntil_Goal__goal_tolerance,  // fetch(index, &value) function pointer
    ur_msgs__action__FollowJointTrajectoryUntil_Goal__rosidl_typesupport_introspection_c__assign_function__FollowJointTrajectoryUntil_Goal__goal_tolerance,  // assign(index, value) function pointer
    ur_msgs__action__FollowJointTrajectoryUntil_Goal__rosidl_typesupport_introspection_c__resize_function__FollowJointTrajectoryUntil_Goal__goal_tolerance  // resize(index) function pointer
  },
  {
    "goal_time_tolerance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_msgs__action__FollowJointTrajectoryUntil_Goal, goal_time_tolerance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "until_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_msgs__action__FollowJointTrajectoryUntil_Goal, until_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ur_msgs__action__FollowJointTrajectoryUntil_Goal__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_Goal_message_members = {
  "ur_msgs__action",  // message namespace
  "FollowJointTrajectoryUntil_Goal",  // message name
  5,  // number of fields
  sizeof(ur_msgs__action__FollowJointTrajectoryUntil_Goal),
  false,  // has_any_key_member_
  ur_msgs__action__FollowJointTrajectoryUntil_Goal__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_Goal_message_member_array,  // message members
  ur_msgs__action__FollowJointTrajectoryUntil_Goal__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  ur_msgs__action__FollowJointTrajectoryUntil_Goal__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ur_msgs__action__FollowJointTrajectoryUntil_Goal__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_Goal_message_type_support_handle = {
  0,
  &ur_msgs__action__FollowJointTrajectoryUntil_Goal__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_Goal_message_members,
  get_message_typesupport_handle_function,
  &ur_msgs__action__FollowJointTrajectoryUntil_Goal__get_type_hash,
  &ur_msgs__action__FollowJointTrajectoryUntil_Goal__get_type_description,
  &ur_msgs__action__FollowJointTrajectoryUntil_Goal__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ur_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_msgs, action, FollowJointTrajectoryUntil_Goal)() {
  ur_msgs__action__FollowJointTrajectoryUntil_Goal__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_Goal_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, trajectory_msgs, msg, JointTrajectory)();
  ur_msgs__action__FollowJointTrajectoryUntil_Goal__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_Goal_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_msgs, msg, JointTolerance)();
  ur_msgs__action__FollowJointTrajectoryUntil_Goal__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_Goal_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_msgs, msg, JointTolerance)();
  ur_msgs__action__FollowJointTrajectoryUntil_Goal__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_Goal_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Duration)();
  if (!ur_msgs__action__FollowJointTrajectoryUntil_Goal__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_Goal_message_type_support_handle.typesupport_identifier) {
    ur_msgs__action__FollowJointTrajectoryUntil_Goal__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ur_msgs__action__FollowJointTrajectoryUntil_Goal__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ur_msgs/action/detail/follow_joint_trajectory_until__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ur_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ur_msgs/action/detail/follow_joint_trajectory_until__functions.h"
// already included above
// #include "ur_msgs/action/detail/follow_joint_trajectory_until__struct.h"


// Include directives for member types
// Member `error_string`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ur_msgs__action__FollowJointTrajectoryUntil_Result__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ur_msgs__action__FollowJointTrajectoryUntil_Result__init(message_memory);
}

void ur_msgs__action__FollowJointTrajectoryUntil_Result__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_Result_fini_function(void * message_memory)
{
  ur_msgs__action__FollowJointTrajectoryUntil_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ur_msgs__action__FollowJointTrajectoryUntil_Result__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_Result_message_member_array[3] = {
  {
    "error_code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_msgs__action__FollowJointTrajectoryUntil_Result, error_code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "until_condition_result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_msgs__action__FollowJointTrajectoryUntil_Result, until_condition_result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error_string",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_msgs__action__FollowJointTrajectoryUntil_Result, error_string),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ur_msgs__action__FollowJointTrajectoryUntil_Result__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_Result_message_members = {
  "ur_msgs__action",  // message namespace
  "FollowJointTrajectoryUntil_Result",  // message name
  3,  // number of fields
  sizeof(ur_msgs__action__FollowJointTrajectoryUntil_Result),
  false,  // has_any_key_member_
  ur_msgs__action__FollowJointTrajectoryUntil_Result__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_Result_message_member_array,  // message members
  ur_msgs__action__FollowJointTrajectoryUntil_Result__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  ur_msgs__action__FollowJointTrajectoryUntil_Result__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ur_msgs__action__FollowJointTrajectoryUntil_Result__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_Result_message_type_support_handle = {
  0,
  &ur_msgs__action__FollowJointTrajectoryUntil_Result__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_Result_message_members,
  get_message_typesupport_handle_function,
  &ur_msgs__action__FollowJointTrajectoryUntil_Result__get_type_hash,
  &ur_msgs__action__FollowJointTrajectoryUntil_Result__get_type_description,
  &ur_msgs__action__FollowJointTrajectoryUntil_Result__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ur_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_msgs, action, FollowJointTrajectoryUntil_Result)() {
  if (!ur_msgs__action__FollowJointTrajectoryUntil_Result__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_Result_message_type_support_handle.typesupport_identifier) {
    ur_msgs__action__FollowJointTrajectoryUntil_Result__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ur_msgs__action__FollowJointTrajectoryUntil_Result__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ur_msgs/action/detail/follow_joint_trajectory_until__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ur_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ur_msgs/action/detail/follow_joint_trajectory_until__functions.h"
// already included above
// #include "ur_msgs/action/detail/follow_joint_trajectory_until__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `joint_names`
// already included above
// #include "rosidl_runtime_c/string_functions.h"
// Member `desired`
// Member `actual`
// Member `error`
#include "trajectory_msgs/msg/joint_trajectory_point.h"
// Member `desired`
// Member `actual`
// Member `error`
#include "trajectory_msgs/msg/detail/joint_trajectory_point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ur_msgs__action__FollowJointTrajectoryUntil_Feedback__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ur_msgs__action__FollowJointTrajectoryUntil_Feedback__init(message_memory);
}

void ur_msgs__action__FollowJointTrajectoryUntil_Feedback__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_Feedback_fini_function(void * message_memory)
{
  ur_msgs__action__FollowJointTrajectoryUntil_Feedback__fini(message_memory);
}

size_t ur_msgs__action__FollowJointTrajectoryUntil_Feedback__rosidl_typesupport_introspection_c__size_function__FollowJointTrajectoryUntil_Feedback__joint_names(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * ur_msgs__action__FollowJointTrajectoryUntil_Feedback__rosidl_typesupport_introspection_c__get_const_function__FollowJointTrajectoryUntil_Feedback__joint_names(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ur_msgs__action__FollowJointTrajectoryUntil_Feedback__rosidl_typesupport_introspection_c__get_function__FollowJointTrajectoryUntil_Feedback__joint_names(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void ur_msgs__action__FollowJointTrajectoryUntil_Feedback__rosidl_typesupport_introspection_c__fetch_function__FollowJointTrajectoryUntil_Feedback__joint_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    ur_msgs__action__FollowJointTrajectoryUntil_Feedback__rosidl_typesupport_introspection_c__get_const_function__FollowJointTrajectoryUntil_Feedback__joint_names(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void ur_msgs__action__FollowJointTrajectoryUntil_Feedback__rosidl_typesupport_introspection_c__assign_function__FollowJointTrajectoryUntil_Feedback__joint_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    ur_msgs__action__FollowJointTrajectoryUntil_Feedback__rosidl_typesupport_introspection_c__get_function__FollowJointTrajectoryUntil_Feedback__joint_names(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool ur_msgs__action__FollowJointTrajectoryUntil_Feedback__rosidl_typesupport_introspection_c__resize_function__FollowJointTrajectoryUntil_Feedback__joint_names(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ur_msgs__action__FollowJointTrajectoryUntil_Feedback__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_Feedback_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_msgs__action__FollowJointTrajectoryUntil_Feedback, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint_names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_msgs__action__FollowJointTrajectoryUntil_Feedback, joint_names),  // bytes offset in struct
    NULL,  // default value
    ur_msgs__action__FollowJointTrajectoryUntil_Feedback__rosidl_typesupport_introspection_c__size_function__FollowJointTrajectoryUntil_Feedback__joint_names,  // size() function pointer
    ur_msgs__action__FollowJointTrajectoryUntil_Feedback__rosidl_typesupport_introspection_c__get_const_function__FollowJointTrajectoryUntil_Feedback__joint_names,  // get_const(index) function pointer
    ur_msgs__action__FollowJointTrajectoryUntil_Feedback__rosidl_typesupport_introspection_c__get_function__FollowJointTrajectoryUntil_Feedback__joint_names,  // get(index) function pointer
    ur_msgs__action__FollowJointTrajectoryUntil_Feedback__rosidl_typesupport_introspection_c__fetch_function__FollowJointTrajectoryUntil_Feedback__joint_names,  // fetch(index, &value) function pointer
    ur_msgs__action__FollowJointTrajectoryUntil_Feedback__rosidl_typesupport_introspection_c__assign_function__FollowJointTrajectoryUntil_Feedback__joint_names,  // assign(index, value) function pointer
    ur_msgs__action__FollowJointTrajectoryUntil_Feedback__rosidl_typesupport_introspection_c__resize_function__FollowJointTrajectoryUntil_Feedback__joint_names  // resize(index) function pointer
  },
  {
    "desired",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_msgs__action__FollowJointTrajectoryUntil_Feedback, desired),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "actual",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_msgs__action__FollowJointTrajectoryUntil_Feedback, actual),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_msgs__action__FollowJointTrajectoryUntil_Feedback, error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ur_msgs__action__FollowJointTrajectoryUntil_Feedback__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_Feedback_message_members = {
  "ur_msgs__action",  // message namespace
  "FollowJointTrajectoryUntil_Feedback",  // message name
  5,  // number of fields
  sizeof(ur_msgs__action__FollowJointTrajectoryUntil_Feedback),
  false,  // has_any_key_member_
  ur_msgs__action__FollowJointTrajectoryUntil_Feedback__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_Feedback_message_member_array,  // message members
  ur_msgs__action__FollowJointTrajectoryUntil_Feedback__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  ur_msgs__action__FollowJointTrajectoryUntil_Feedback__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ur_msgs__action__FollowJointTrajectoryUntil_Feedback__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_Feedback_message_type_support_handle = {
  0,
  &ur_msgs__action__FollowJointTrajectoryUntil_Feedback__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_Feedback_message_members,
  get_message_typesupport_handle_function,
  &ur_msgs__action__FollowJointTrajectoryUntil_Feedback__get_type_hash,
  &ur_msgs__action__FollowJointTrajectoryUntil_Feedback__get_type_description,
  &ur_msgs__action__FollowJointTrajectoryUntil_Feedback__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ur_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_msgs, action, FollowJointTrajectoryUntil_Feedback)() {
  ur_msgs__action__FollowJointTrajectoryUntil_Feedback__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_Feedback_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  ur_msgs__action__FollowJointTrajectoryUntil_Feedback__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_Feedback_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, trajectory_msgs, msg, JointTrajectoryPoint)();
  ur_msgs__action__FollowJointTrajectoryUntil_Feedback__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_Feedback_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, trajectory_msgs, msg, JointTrajectoryPoint)();
  ur_msgs__action__FollowJointTrajectoryUntil_Feedback__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_Feedback_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, trajectory_msgs, msg, JointTrajectoryPoint)();
  if (!ur_msgs__action__FollowJointTrajectoryUntil_Feedback__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_Feedback_message_type_support_handle.typesupport_identifier) {
    ur_msgs__action__FollowJointTrajectoryUntil_Feedback__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ur_msgs__action__FollowJointTrajectoryUntil_Feedback__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ur_msgs/action/detail/follow_joint_trajectory_until__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ur_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ur_msgs/action/detail/follow_joint_trajectory_until__functions.h"
// already included above
// #include "ur_msgs/action/detail/follow_joint_trajectory_until__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "ur_msgs/action/follow_joint_trajectory_until.h"
// Member `goal`
// already included above
// #include "ur_msgs/action/detail/follow_joint_trajectory_until__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Request__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Request__init(message_memory);
}

void ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Request__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_SendGoal_Request_fini_function(void * message_memory)
{
  ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Request__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Request__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_SendGoal_Request_message_members = {
  "ur_msgs__action",  // message namespace
  "FollowJointTrajectoryUntil_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Request),
  false,  // has_any_key_member_
  ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Request__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_SendGoal_Request_message_member_array,  // message members
  ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Request__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Request__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Request__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_SendGoal_Request_message_type_support_handle = {
  0,
  &ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Request__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
  &ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Request__get_type_hash,
  &ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Request__get_type_description,
  &ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ur_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_msgs, action, FollowJointTrajectoryUntil_SendGoal_Request)() {
  ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Request__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Request__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_msgs, action, FollowJointTrajectoryUntil_Goal)();
  if (!ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Request__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Request__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Request__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ur_msgs/action/detail/follow_joint_trajectory_until__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ur_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ur_msgs/action/detail/follow_joint_trajectory_until__functions.h"
// already included above
// #include "ur_msgs/action/detail/follow_joint_trajectory_until__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Response__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Response__init(message_memory);
}

void ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Response__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_SendGoal_Response_fini_function(void * message_memory)
{
  ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Response__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Response__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_SendGoal_Response_message_members = {
  "ur_msgs__action",  // message namespace
  "FollowJointTrajectoryUntil_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Response),
  false,  // has_any_key_member_
  ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Response__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_SendGoal_Response_message_member_array,  // message members
  ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Response__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Response__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Response__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_SendGoal_Response_message_type_support_handle = {
  0,
  &ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Response__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
  &ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Response__get_type_hash,
  &ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Response__get_type_description,
  &ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ur_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_msgs, action, FollowJointTrajectoryUntil_SendGoal_Response)() {
  ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Response__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Response__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Response__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Response__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ur_msgs/action/detail/follow_joint_trajectory_until__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ur_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ur_msgs/action/detail/follow_joint_trajectory_until__functions.h"
// already included above
// #include "ur_msgs/action/detail/follow_joint_trajectory_until__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
// already included above
// #include "ur_msgs/action/follow_joint_trajectory_until.h"
// Member `request`
// Member `response`
// already included above
// #include "ur_msgs/action/detail/follow_joint_trajectory_until__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Event__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_SendGoal_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Event__init(message_memory);
}

void ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Event__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_SendGoal_Event_fini_function(void * message_memory)
{
  ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Event__fini(message_memory);
}

size_t ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Event__rosidl_typesupport_introspection_c__size_function__FollowJointTrajectoryUntil_SendGoal_Event__request(
  const void * untyped_member)
{
  const ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Request__Sequence * member =
    (const ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__FollowJointTrajectoryUntil_SendGoal_Event__request(
  const void * untyped_member, size_t index)
{
  const ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Request__Sequence * member =
    (const ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__FollowJointTrajectoryUntil_SendGoal_Event__request(
  void * untyped_member, size_t index)
{
  ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Request__Sequence * member =
    (ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Event__rosidl_typesupport_introspection_c__fetch_function__FollowJointTrajectoryUntil_SendGoal_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Request * item =
    ((const ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Request *)
    ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__FollowJointTrajectoryUntil_SendGoal_Event__request(untyped_member, index));
  ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Request * value =
    (ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Request *)(untyped_value);
  *value = *item;
}

void ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Event__rosidl_typesupport_introspection_c__assign_function__FollowJointTrajectoryUntil_SendGoal_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Request * item =
    ((ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Request *)
    ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__FollowJointTrajectoryUntil_SendGoal_Event__request(untyped_member, index));
  const ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Request * value =
    (const ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Request *)(untyped_value);
  *item = *value;
}

bool ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Event__rosidl_typesupport_introspection_c__resize_function__FollowJointTrajectoryUntil_SendGoal_Event__request(
  void * untyped_member, size_t size)
{
  ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Request__Sequence * member =
    (ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Request__Sequence *)(untyped_member);
  ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Request__Sequence__fini(member);
  return ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Request__Sequence__init(member, size);
}

size_t ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Event__rosidl_typesupport_introspection_c__size_function__FollowJointTrajectoryUntil_SendGoal_Event__response(
  const void * untyped_member)
{
  const ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Response__Sequence * member =
    (const ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__FollowJointTrajectoryUntil_SendGoal_Event__response(
  const void * untyped_member, size_t index)
{
  const ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Response__Sequence * member =
    (const ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__FollowJointTrajectoryUntil_SendGoal_Event__response(
  void * untyped_member, size_t index)
{
  ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Response__Sequence * member =
    (ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Event__rosidl_typesupport_introspection_c__fetch_function__FollowJointTrajectoryUntil_SendGoal_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Response * item =
    ((const ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Response *)
    ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__FollowJointTrajectoryUntil_SendGoal_Event__response(untyped_member, index));
  ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Response * value =
    (ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Response *)(untyped_value);
  *value = *item;
}

void ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Event__rosidl_typesupport_introspection_c__assign_function__FollowJointTrajectoryUntil_SendGoal_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Response * item =
    ((ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Response *)
    ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__FollowJointTrajectoryUntil_SendGoal_Event__response(untyped_member, index));
  const ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Response * value =
    (const ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Response *)(untyped_value);
  *item = *value;
}

bool ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Event__rosidl_typesupport_introspection_c__resize_function__FollowJointTrajectoryUntil_SendGoal_Event__response(
  void * untyped_member, size_t size)
{
  ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Response__Sequence * member =
    (ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Response__Sequence *)(untyped_member);
  ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Response__Sequence__fini(member);
  return ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Event__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_SendGoal_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Event, info),  // bytes offset in struct
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
    offsetof(ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Event, request),  // bytes offset in struct
    NULL,  // default value
    ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Event__rosidl_typesupport_introspection_c__size_function__FollowJointTrajectoryUntil_SendGoal_Event__request,  // size() function pointer
    ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__FollowJointTrajectoryUntil_SendGoal_Event__request,  // get_const(index) function pointer
    ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__FollowJointTrajectoryUntil_SendGoal_Event__request,  // get(index) function pointer
    ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Event__rosidl_typesupport_introspection_c__fetch_function__FollowJointTrajectoryUntil_SendGoal_Event__request,  // fetch(index, &value) function pointer
    ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Event__rosidl_typesupport_introspection_c__assign_function__FollowJointTrajectoryUntil_SendGoal_Event__request,  // assign(index, value) function pointer
    ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Event__rosidl_typesupport_introspection_c__resize_function__FollowJointTrajectoryUntil_SendGoal_Event__request  // resize(index) function pointer
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
    offsetof(ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Event, response),  // bytes offset in struct
    NULL,  // default value
    ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Event__rosidl_typesupport_introspection_c__size_function__FollowJointTrajectoryUntil_SendGoal_Event__response,  // size() function pointer
    ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__FollowJointTrajectoryUntil_SendGoal_Event__response,  // get_const(index) function pointer
    ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__FollowJointTrajectoryUntil_SendGoal_Event__response,  // get(index) function pointer
    ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Event__rosidl_typesupport_introspection_c__fetch_function__FollowJointTrajectoryUntil_SendGoal_Event__response,  // fetch(index, &value) function pointer
    ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Event__rosidl_typesupport_introspection_c__assign_function__FollowJointTrajectoryUntil_SendGoal_Event__response,  // assign(index, value) function pointer
    ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Event__rosidl_typesupport_introspection_c__resize_function__FollowJointTrajectoryUntil_SendGoal_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Event__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_SendGoal_Event_message_members = {
  "ur_msgs__action",  // message namespace
  "FollowJointTrajectoryUntil_SendGoal_Event",  // message name
  3,  // number of fields
  sizeof(ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Event),
  false,  // has_any_key_member_
  ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Event__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_SendGoal_Event_message_member_array,  // message members
  ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Event__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_SendGoal_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Event__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_SendGoal_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Event__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_SendGoal_Event_message_type_support_handle = {
  0,
  &ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Event__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_SendGoal_Event_message_members,
  get_message_typesupport_handle_function,
  &ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Event__get_type_hash,
  &ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Event__get_type_description,
  &ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ur_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_msgs, action, FollowJointTrajectoryUntil_SendGoal_Event)() {
  ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Event__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_SendGoal_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Event__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_SendGoal_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_msgs, action, FollowJointTrajectoryUntil_SendGoal_Request)();
  ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Event__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_SendGoal_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_msgs, action, FollowJointTrajectoryUntil_SendGoal_Response)();
  if (!ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Event__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_SendGoal_Event_message_type_support_handle.typesupport_identifier) {
    ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Event__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_SendGoal_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Event__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_SendGoal_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ur_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "ur_msgs/action/detail/follow_joint_trajectory_until__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers ur_msgs__action__detail__follow_joint_trajectory_until__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_SendGoal_service_members = {
  "ur_msgs__action",  // service namespace
  "FollowJointTrajectoryUntil_SendGoal",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // ur_msgs__action__detail__follow_joint_trajectory_until__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_SendGoal_Request_message_type_support_handle,
  NULL,  // response message
  // ur_msgs__action__detail__follow_joint_trajectory_until__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_SendGoal_Response_message_type_support_handle
  NULL  // event_message
  // ur_msgs__action__detail__follow_joint_trajectory_until__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_SendGoal_Response_message_type_support_handle
};


static rosidl_service_type_support_t ur_msgs__action__detail__follow_joint_trajectory_until__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_SendGoal_service_type_support_handle = {
  0,
  &ur_msgs__action__detail__follow_joint_trajectory_until__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_SendGoal_service_members,
  get_service_typesupport_handle_function,
  &ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Request__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_SendGoal_Request_message_type_support_handle,
  &ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Response__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_SendGoal_Response_message_type_support_handle,
  &ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Event__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_SendGoal_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    ur_msgs,
    action,
    FollowJointTrajectoryUntil_SendGoal
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    ur_msgs,
    action,
    FollowJointTrajectoryUntil_SendGoal
  ),
  &ur_msgs__action__FollowJointTrajectoryUntil_SendGoal__get_type_hash,
  &ur_msgs__action__FollowJointTrajectoryUntil_SendGoal__get_type_description,
  &ur_msgs__action__FollowJointTrajectoryUntil_SendGoal__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_msgs, action, FollowJointTrajectoryUntil_SendGoal_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_msgs, action, FollowJointTrajectoryUntil_SendGoal_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_msgs, action, FollowJointTrajectoryUntil_SendGoal_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ur_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_msgs, action, FollowJointTrajectoryUntil_SendGoal)(void) {
  if (!ur_msgs__action__detail__follow_joint_trajectory_until__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_SendGoal_service_type_support_handle.typesupport_identifier) {
    ur_msgs__action__detail__follow_joint_trajectory_until__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)ur_msgs__action__detail__follow_joint_trajectory_until__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_msgs, action, FollowJointTrajectoryUntil_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_msgs, action, FollowJointTrajectoryUntil_SendGoal_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_msgs, action, FollowJointTrajectoryUntil_SendGoal_Event)()->data;
  }

  return &ur_msgs__action__detail__follow_joint_trajectory_until__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "ur_msgs/action/detail/follow_joint_trajectory_until__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ur_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ur_msgs/action/detail/follow_joint_trajectory_until__functions.h"
// already included above
// #include "ur_msgs/action/detail/follow_joint_trajectory_until__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Request__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Request__init(message_memory);
}

void ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Request__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_GetResult_Request_fini_function(void * message_memory)
{
  ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Request__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Request__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_GetResult_Request_message_members = {
  "ur_msgs__action",  // message namespace
  "FollowJointTrajectoryUntil_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Request),
  false,  // has_any_key_member_
  ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Request__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_GetResult_Request_message_member_array,  // message members
  ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Request__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Request__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Request__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_GetResult_Request_message_type_support_handle = {
  0,
  &ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Request__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
  &ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Request__get_type_hash,
  &ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Request__get_type_description,
  &ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ur_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_msgs, action, FollowJointTrajectoryUntil_GetResult_Request)() {
  ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Request__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Request__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Request__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Request__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ur_msgs/action/detail/follow_joint_trajectory_until__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ur_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ur_msgs/action/detail/follow_joint_trajectory_until__functions.h"
// already included above
// #include "ur_msgs/action/detail/follow_joint_trajectory_until__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "ur_msgs/action/follow_joint_trajectory_until.h"
// Member `result`
// already included above
// #include "ur_msgs/action/detail/follow_joint_trajectory_until__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Response__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Response__init(message_memory);
}

void ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Response__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_GetResult_Response_fini_function(void * message_memory)
{
  ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Response__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Response__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_GetResult_Response_message_members = {
  "ur_msgs__action",  // message namespace
  "FollowJointTrajectoryUntil_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Response),
  false,  // has_any_key_member_
  ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Response__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_GetResult_Response_message_member_array,  // message members
  ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Response__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Response__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Response__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_GetResult_Response_message_type_support_handle = {
  0,
  &ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Response__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
  &ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Response__get_type_hash,
  &ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Response__get_type_description,
  &ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ur_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_msgs, action, FollowJointTrajectoryUntil_GetResult_Response)() {
  ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Response__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_msgs, action, FollowJointTrajectoryUntil_Result)();
  if (!ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Response__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Response__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Response__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ur_msgs/action/detail/follow_joint_trajectory_until__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ur_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ur_msgs/action/detail/follow_joint_trajectory_until__functions.h"
// already included above
// #include "ur_msgs/action/detail/follow_joint_trajectory_until__struct.h"


// Include directives for member types
// Member `info`
// already included above
// #include "service_msgs/msg/service_event_info.h"
// Member `info`
// already included above
// #include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
// already included above
// #include "ur_msgs/action/follow_joint_trajectory_until.h"
// Member `request`
// Member `response`
// already included above
// #include "ur_msgs/action/detail/follow_joint_trajectory_until__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Event__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_GetResult_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Event__init(message_memory);
}

void ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Event__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_GetResult_Event_fini_function(void * message_memory)
{
  ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Event__fini(message_memory);
}

size_t ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Event__rosidl_typesupport_introspection_c__size_function__FollowJointTrajectoryUntil_GetResult_Event__request(
  const void * untyped_member)
{
  const ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Request__Sequence * member =
    (const ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__FollowJointTrajectoryUntil_GetResult_Event__request(
  const void * untyped_member, size_t index)
{
  const ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Request__Sequence * member =
    (const ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Event__rosidl_typesupport_introspection_c__get_function__FollowJointTrajectoryUntil_GetResult_Event__request(
  void * untyped_member, size_t index)
{
  ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Request__Sequence * member =
    (ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Event__rosidl_typesupport_introspection_c__fetch_function__FollowJointTrajectoryUntil_GetResult_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Request * item =
    ((const ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Request *)
    ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__FollowJointTrajectoryUntil_GetResult_Event__request(untyped_member, index));
  ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Request * value =
    (ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Request *)(untyped_value);
  *value = *item;
}

void ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Event__rosidl_typesupport_introspection_c__assign_function__FollowJointTrajectoryUntil_GetResult_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Request * item =
    ((ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Request *)
    ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Event__rosidl_typesupport_introspection_c__get_function__FollowJointTrajectoryUntil_GetResult_Event__request(untyped_member, index));
  const ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Request * value =
    (const ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Request *)(untyped_value);
  *item = *value;
}

bool ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Event__rosidl_typesupport_introspection_c__resize_function__FollowJointTrajectoryUntil_GetResult_Event__request(
  void * untyped_member, size_t size)
{
  ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Request__Sequence * member =
    (ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Request__Sequence *)(untyped_member);
  ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Request__Sequence__fini(member);
  return ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Request__Sequence__init(member, size);
}

size_t ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Event__rosidl_typesupport_introspection_c__size_function__FollowJointTrajectoryUntil_GetResult_Event__response(
  const void * untyped_member)
{
  const ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Response__Sequence * member =
    (const ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__FollowJointTrajectoryUntil_GetResult_Event__response(
  const void * untyped_member, size_t index)
{
  const ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Response__Sequence * member =
    (const ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Event__rosidl_typesupport_introspection_c__get_function__FollowJointTrajectoryUntil_GetResult_Event__response(
  void * untyped_member, size_t index)
{
  ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Response__Sequence * member =
    (ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Event__rosidl_typesupport_introspection_c__fetch_function__FollowJointTrajectoryUntil_GetResult_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Response * item =
    ((const ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Response *)
    ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__FollowJointTrajectoryUntil_GetResult_Event__response(untyped_member, index));
  ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Response * value =
    (ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Response *)(untyped_value);
  *value = *item;
}

void ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Event__rosidl_typesupport_introspection_c__assign_function__FollowJointTrajectoryUntil_GetResult_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Response * item =
    ((ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Response *)
    ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Event__rosidl_typesupport_introspection_c__get_function__FollowJointTrajectoryUntil_GetResult_Event__response(untyped_member, index));
  const ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Response * value =
    (const ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Response *)(untyped_value);
  *item = *value;
}

bool ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Event__rosidl_typesupport_introspection_c__resize_function__FollowJointTrajectoryUntil_GetResult_Event__response(
  void * untyped_member, size_t size)
{
  ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Response__Sequence * member =
    (ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Response__Sequence *)(untyped_member);
  ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Response__Sequence__fini(member);
  return ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Event__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_GetResult_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Event, info),  // bytes offset in struct
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
    offsetof(ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Event, request),  // bytes offset in struct
    NULL,  // default value
    ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Event__rosidl_typesupport_introspection_c__size_function__FollowJointTrajectoryUntil_GetResult_Event__request,  // size() function pointer
    ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__FollowJointTrajectoryUntil_GetResult_Event__request,  // get_const(index) function pointer
    ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Event__rosidl_typesupport_introspection_c__get_function__FollowJointTrajectoryUntil_GetResult_Event__request,  // get(index) function pointer
    ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Event__rosidl_typesupport_introspection_c__fetch_function__FollowJointTrajectoryUntil_GetResult_Event__request,  // fetch(index, &value) function pointer
    ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Event__rosidl_typesupport_introspection_c__assign_function__FollowJointTrajectoryUntil_GetResult_Event__request,  // assign(index, value) function pointer
    ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Event__rosidl_typesupport_introspection_c__resize_function__FollowJointTrajectoryUntil_GetResult_Event__request  // resize(index) function pointer
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
    offsetof(ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Event, response),  // bytes offset in struct
    NULL,  // default value
    ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Event__rosidl_typesupport_introspection_c__size_function__FollowJointTrajectoryUntil_GetResult_Event__response,  // size() function pointer
    ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__FollowJointTrajectoryUntil_GetResult_Event__response,  // get_const(index) function pointer
    ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Event__rosidl_typesupport_introspection_c__get_function__FollowJointTrajectoryUntil_GetResult_Event__response,  // get(index) function pointer
    ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Event__rosidl_typesupport_introspection_c__fetch_function__FollowJointTrajectoryUntil_GetResult_Event__response,  // fetch(index, &value) function pointer
    ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Event__rosidl_typesupport_introspection_c__assign_function__FollowJointTrajectoryUntil_GetResult_Event__response,  // assign(index, value) function pointer
    ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Event__rosidl_typesupport_introspection_c__resize_function__FollowJointTrajectoryUntil_GetResult_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Event__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_GetResult_Event_message_members = {
  "ur_msgs__action",  // message namespace
  "FollowJointTrajectoryUntil_GetResult_Event",  // message name
  3,  // number of fields
  sizeof(ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Event),
  false,  // has_any_key_member_
  ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Event__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_GetResult_Event_message_member_array,  // message members
  ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Event__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_GetResult_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Event__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_GetResult_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Event__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_GetResult_Event_message_type_support_handle = {
  0,
  &ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Event__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_GetResult_Event_message_members,
  get_message_typesupport_handle_function,
  &ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Event__get_type_hash,
  &ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Event__get_type_description,
  &ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ur_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_msgs, action, FollowJointTrajectoryUntil_GetResult_Event)() {
  ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Event__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_GetResult_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Event__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_GetResult_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_msgs, action, FollowJointTrajectoryUntil_GetResult_Request)();
  ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Event__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_GetResult_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_msgs, action, FollowJointTrajectoryUntil_GetResult_Response)();
  if (!ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Event__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_GetResult_Event_message_type_support_handle.typesupport_identifier) {
    ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Event__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_GetResult_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Event__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_GetResult_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ur_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "ur_msgs/action/detail/follow_joint_trajectory_until__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers ur_msgs__action__detail__follow_joint_trajectory_until__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_GetResult_service_members = {
  "ur_msgs__action",  // service namespace
  "FollowJointTrajectoryUntil_GetResult",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // ur_msgs__action__detail__follow_joint_trajectory_until__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_GetResult_Request_message_type_support_handle,
  NULL,  // response message
  // ur_msgs__action__detail__follow_joint_trajectory_until__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_GetResult_Response_message_type_support_handle
  NULL  // event_message
  // ur_msgs__action__detail__follow_joint_trajectory_until__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_GetResult_Response_message_type_support_handle
};


static rosidl_service_type_support_t ur_msgs__action__detail__follow_joint_trajectory_until__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_GetResult_service_type_support_handle = {
  0,
  &ur_msgs__action__detail__follow_joint_trajectory_until__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_GetResult_service_members,
  get_service_typesupport_handle_function,
  &ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Request__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_GetResult_Request_message_type_support_handle,
  &ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Response__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_GetResult_Response_message_type_support_handle,
  &ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Event__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_GetResult_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    ur_msgs,
    action,
    FollowJointTrajectoryUntil_GetResult
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    ur_msgs,
    action,
    FollowJointTrajectoryUntil_GetResult
  ),
  &ur_msgs__action__FollowJointTrajectoryUntil_GetResult__get_type_hash,
  &ur_msgs__action__FollowJointTrajectoryUntil_GetResult__get_type_description,
  &ur_msgs__action__FollowJointTrajectoryUntil_GetResult__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_msgs, action, FollowJointTrajectoryUntil_GetResult_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_msgs, action, FollowJointTrajectoryUntil_GetResult_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_msgs, action, FollowJointTrajectoryUntil_GetResult_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ur_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_msgs, action, FollowJointTrajectoryUntil_GetResult)(void) {
  if (!ur_msgs__action__detail__follow_joint_trajectory_until__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_GetResult_service_type_support_handle.typesupport_identifier) {
    ur_msgs__action__detail__follow_joint_trajectory_until__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)ur_msgs__action__detail__follow_joint_trajectory_until__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_msgs, action, FollowJointTrajectoryUntil_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_msgs, action, FollowJointTrajectoryUntil_GetResult_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_msgs, action, FollowJointTrajectoryUntil_GetResult_Event)()->data;
  }

  return &ur_msgs__action__detail__follow_joint_trajectory_until__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "ur_msgs/action/detail/follow_joint_trajectory_until__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ur_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ur_msgs/action/detail/follow_joint_trajectory_until__functions.h"
// already included above
// #include "ur_msgs/action/detail/follow_joint_trajectory_until__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "ur_msgs/action/follow_joint_trajectory_until.h"
// Member `feedback`
// already included above
// #include "ur_msgs/action/detail/follow_joint_trajectory_until__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ur_msgs__action__FollowJointTrajectoryUntil_FeedbackMessage__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ur_msgs__action__FollowJointTrajectoryUntil_FeedbackMessage__init(message_memory);
}

void ur_msgs__action__FollowJointTrajectoryUntil_FeedbackMessage__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_FeedbackMessage_fini_function(void * message_memory)
{
  ur_msgs__action__FollowJointTrajectoryUntil_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ur_msgs__action__FollowJointTrajectoryUntil_FeedbackMessage__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_msgs__action__FollowJointTrajectoryUntil_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_msgs__action__FollowJointTrajectoryUntil_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ur_msgs__action__FollowJointTrajectoryUntil_FeedbackMessage__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_FeedbackMessage_message_members = {
  "ur_msgs__action",  // message namespace
  "FollowJointTrajectoryUntil_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(ur_msgs__action__FollowJointTrajectoryUntil_FeedbackMessage),
  false,  // has_any_key_member_
  ur_msgs__action__FollowJointTrajectoryUntil_FeedbackMessage__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_FeedbackMessage_message_member_array,  // message members
  ur_msgs__action__FollowJointTrajectoryUntil_FeedbackMessage__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  ur_msgs__action__FollowJointTrajectoryUntil_FeedbackMessage__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ur_msgs__action__FollowJointTrajectoryUntil_FeedbackMessage__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_FeedbackMessage_message_type_support_handle = {
  0,
  &ur_msgs__action__FollowJointTrajectoryUntil_FeedbackMessage__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
  &ur_msgs__action__FollowJointTrajectoryUntil_FeedbackMessage__get_type_hash,
  &ur_msgs__action__FollowJointTrajectoryUntil_FeedbackMessage__get_type_description,
  &ur_msgs__action__FollowJointTrajectoryUntil_FeedbackMessage__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ur_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_msgs, action, FollowJointTrajectoryUntil_FeedbackMessage)() {
  ur_msgs__action__FollowJointTrajectoryUntil_FeedbackMessage__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  ur_msgs__action__FollowJointTrajectoryUntil_FeedbackMessage__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_msgs, action, FollowJointTrajectoryUntil_Feedback)();
  if (!ur_msgs__action__FollowJointTrajectoryUntil_FeedbackMessage__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    ur_msgs__action__FollowJointTrajectoryUntil_FeedbackMessage__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ur_msgs__action__FollowJointTrajectoryUntil_FeedbackMessage__rosidl_typesupport_introspection_c__FollowJointTrajectoryUntil_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
