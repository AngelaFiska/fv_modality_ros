// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from ur_msgs:action/FollowJointTrajectoryUntil.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "ur_msgs/action/detail/follow_joint_trajectory_until__functions.h"
#include "ur_msgs/action/detail/follow_joint_trajectory_until__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace ur_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _FollowJointTrajectoryUntil_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FollowJointTrajectoryUntil_Goal_type_support_ids_t;

static const _FollowJointTrajectoryUntil_Goal_type_support_ids_t _FollowJointTrajectoryUntil_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _FollowJointTrajectoryUntil_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FollowJointTrajectoryUntil_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FollowJointTrajectoryUntil_Goal_type_support_symbol_names_t _FollowJointTrajectoryUntil_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ur_msgs, action, FollowJointTrajectoryUntil_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ur_msgs, action, FollowJointTrajectoryUntil_Goal)),
  }
};

typedef struct _FollowJointTrajectoryUntil_Goal_type_support_data_t
{
  void * data[2];
} _FollowJointTrajectoryUntil_Goal_type_support_data_t;

static _FollowJointTrajectoryUntil_Goal_type_support_data_t _FollowJointTrajectoryUntil_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FollowJointTrajectoryUntil_Goal_message_typesupport_map = {
  2,
  "ur_msgs",
  &_FollowJointTrajectoryUntil_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_FollowJointTrajectoryUntil_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_FollowJointTrajectoryUntil_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t FollowJointTrajectoryUntil_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FollowJointTrajectoryUntil_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ur_msgs__action__FollowJointTrajectoryUntil_Goal__get_type_hash,
  &ur_msgs__action__FollowJointTrajectoryUntil_Goal__get_type_description,
  &ur_msgs__action__FollowJointTrajectoryUntil_Goal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ur_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ur_msgs::action::FollowJointTrajectoryUntil_Goal>()
{
  return &::ur_msgs::action::rosidl_typesupport_cpp::FollowJointTrajectoryUntil_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ur_msgs, action, FollowJointTrajectoryUntil_Goal)() {
  return get_message_type_support_handle<ur_msgs::action::FollowJointTrajectoryUntil_Goal>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ur_msgs/action/detail/follow_joint_trajectory_until__functions.h"
// already included above
// #include "ur_msgs/action/detail/follow_joint_trajectory_until__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ur_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _FollowJointTrajectoryUntil_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FollowJointTrajectoryUntil_Result_type_support_ids_t;

static const _FollowJointTrajectoryUntil_Result_type_support_ids_t _FollowJointTrajectoryUntil_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _FollowJointTrajectoryUntil_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FollowJointTrajectoryUntil_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FollowJointTrajectoryUntil_Result_type_support_symbol_names_t _FollowJointTrajectoryUntil_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ur_msgs, action, FollowJointTrajectoryUntil_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ur_msgs, action, FollowJointTrajectoryUntil_Result)),
  }
};

typedef struct _FollowJointTrajectoryUntil_Result_type_support_data_t
{
  void * data[2];
} _FollowJointTrajectoryUntil_Result_type_support_data_t;

static _FollowJointTrajectoryUntil_Result_type_support_data_t _FollowJointTrajectoryUntil_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FollowJointTrajectoryUntil_Result_message_typesupport_map = {
  2,
  "ur_msgs",
  &_FollowJointTrajectoryUntil_Result_message_typesupport_ids.typesupport_identifier[0],
  &_FollowJointTrajectoryUntil_Result_message_typesupport_symbol_names.symbol_name[0],
  &_FollowJointTrajectoryUntil_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t FollowJointTrajectoryUntil_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FollowJointTrajectoryUntil_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ur_msgs__action__FollowJointTrajectoryUntil_Result__get_type_hash,
  &ur_msgs__action__FollowJointTrajectoryUntil_Result__get_type_description,
  &ur_msgs__action__FollowJointTrajectoryUntil_Result__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ur_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ur_msgs::action::FollowJointTrajectoryUntil_Result>()
{
  return &::ur_msgs::action::rosidl_typesupport_cpp::FollowJointTrajectoryUntil_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ur_msgs, action, FollowJointTrajectoryUntil_Result)() {
  return get_message_type_support_handle<ur_msgs::action::FollowJointTrajectoryUntil_Result>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ur_msgs/action/detail/follow_joint_trajectory_until__functions.h"
// already included above
// #include "ur_msgs/action/detail/follow_joint_trajectory_until__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ur_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _FollowJointTrajectoryUntil_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FollowJointTrajectoryUntil_Feedback_type_support_ids_t;

static const _FollowJointTrajectoryUntil_Feedback_type_support_ids_t _FollowJointTrajectoryUntil_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _FollowJointTrajectoryUntil_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FollowJointTrajectoryUntil_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FollowJointTrajectoryUntil_Feedback_type_support_symbol_names_t _FollowJointTrajectoryUntil_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ur_msgs, action, FollowJointTrajectoryUntil_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ur_msgs, action, FollowJointTrajectoryUntil_Feedback)),
  }
};

typedef struct _FollowJointTrajectoryUntil_Feedback_type_support_data_t
{
  void * data[2];
} _FollowJointTrajectoryUntil_Feedback_type_support_data_t;

static _FollowJointTrajectoryUntil_Feedback_type_support_data_t _FollowJointTrajectoryUntil_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FollowJointTrajectoryUntil_Feedback_message_typesupport_map = {
  2,
  "ur_msgs",
  &_FollowJointTrajectoryUntil_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_FollowJointTrajectoryUntil_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_FollowJointTrajectoryUntil_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t FollowJointTrajectoryUntil_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FollowJointTrajectoryUntil_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ur_msgs__action__FollowJointTrajectoryUntil_Feedback__get_type_hash,
  &ur_msgs__action__FollowJointTrajectoryUntil_Feedback__get_type_description,
  &ur_msgs__action__FollowJointTrajectoryUntil_Feedback__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ur_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ur_msgs::action::FollowJointTrajectoryUntil_Feedback>()
{
  return &::ur_msgs::action::rosidl_typesupport_cpp::FollowJointTrajectoryUntil_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ur_msgs, action, FollowJointTrajectoryUntil_Feedback)() {
  return get_message_type_support_handle<ur_msgs::action::FollowJointTrajectoryUntil_Feedback>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ur_msgs/action/detail/follow_joint_trajectory_until__functions.h"
// already included above
// #include "ur_msgs/action/detail/follow_joint_trajectory_until__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ur_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _FollowJointTrajectoryUntil_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FollowJointTrajectoryUntil_SendGoal_Request_type_support_ids_t;

static const _FollowJointTrajectoryUntil_SendGoal_Request_type_support_ids_t _FollowJointTrajectoryUntil_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _FollowJointTrajectoryUntil_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FollowJointTrajectoryUntil_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FollowJointTrajectoryUntil_SendGoal_Request_type_support_symbol_names_t _FollowJointTrajectoryUntil_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ur_msgs, action, FollowJointTrajectoryUntil_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ur_msgs, action, FollowJointTrajectoryUntil_SendGoal_Request)),
  }
};

typedef struct _FollowJointTrajectoryUntil_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _FollowJointTrajectoryUntil_SendGoal_Request_type_support_data_t;

static _FollowJointTrajectoryUntil_SendGoal_Request_type_support_data_t _FollowJointTrajectoryUntil_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FollowJointTrajectoryUntil_SendGoal_Request_message_typesupport_map = {
  2,
  "ur_msgs",
  &_FollowJointTrajectoryUntil_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_FollowJointTrajectoryUntil_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_FollowJointTrajectoryUntil_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t FollowJointTrajectoryUntil_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FollowJointTrajectoryUntil_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Request__get_type_hash,
  &ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Request__get_type_description,
  &ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ur_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ur_msgs::action::FollowJointTrajectoryUntil_SendGoal_Request>()
{
  return &::ur_msgs::action::rosidl_typesupport_cpp::FollowJointTrajectoryUntil_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ur_msgs, action, FollowJointTrajectoryUntil_SendGoal_Request)() {
  return get_message_type_support_handle<ur_msgs::action::FollowJointTrajectoryUntil_SendGoal_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ur_msgs/action/detail/follow_joint_trajectory_until__functions.h"
// already included above
// #include "ur_msgs/action/detail/follow_joint_trajectory_until__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ur_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _FollowJointTrajectoryUntil_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FollowJointTrajectoryUntil_SendGoal_Response_type_support_ids_t;

static const _FollowJointTrajectoryUntil_SendGoal_Response_type_support_ids_t _FollowJointTrajectoryUntil_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _FollowJointTrajectoryUntil_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FollowJointTrajectoryUntil_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FollowJointTrajectoryUntil_SendGoal_Response_type_support_symbol_names_t _FollowJointTrajectoryUntil_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ur_msgs, action, FollowJointTrajectoryUntil_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ur_msgs, action, FollowJointTrajectoryUntil_SendGoal_Response)),
  }
};

typedef struct _FollowJointTrajectoryUntil_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _FollowJointTrajectoryUntil_SendGoal_Response_type_support_data_t;

static _FollowJointTrajectoryUntil_SendGoal_Response_type_support_data_t _FollowJointTrajectoryUntil_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FollowJointTrajectoryUntil_SendGoal_Response_message_typesupport_map = {
  2,
  "ur_msgs",
  &_FollowJointTrajectoryUntil_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_FollowJointTrajectoryUntil_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_FollowJointTrajectoryUntil_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t FollowJointTrajectoryUntil_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FollowJointTrajectoryUntil_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Response__get_type_hash,
  &ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Response__get_type_description,
  &ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ur_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ur_msgs::action::FollowJointTrajectoryUntil_SendGoal_Response>()
{
  return &::ur_msgs::action::rosidl_typesupport_cpp::FollowJointTrajectoryUntil_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ur_msgs, action, FollowJointTrajectoryUntil_SendGoal_Response)() {
  return get_message_type_support_handle<ur_msgs::action::FollowJointTrajectoryUntil_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ur_msgs/action/detail/follow_joint_trajectory_until__functions.h"
// already included above
// #include "ur_msgs/action/detail/follow_joint_trajectory_until__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ur_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _FollowJointTrajectoryUntil_SendGoal_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FollowJointTrajectoryUntil_SendGoal_Event_type_support_ids_t;

static const _FollowJointTrajectoryUntil_SendGoal_Event_type_support_ids_t _FollowJointTrajectoryUntil_SendGoal_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _FollowJointTrajectoryUntil_SendGoal_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FollowJointTrajectoryUntil_SendGoal_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FollowJointTrajectoryUntil_SendGoal_Event_type_support_symbol_names_t _FollowJointTrajectoryUntil_SendGoal_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ur_msgs, action, FollowJointTrajectoryUntil_SendGoal_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ur_msgs, action, FollowJointTrajectoryUntil_SendGoal_Event)),
  }
};

typedef struct _FollowJointTrajectoryUntil_SendGoal_Event_type_support_data_t
{
  void * data[2];
} _FollowJointTrajectoryUntil_SendGoal_Event_type_support_data_t;

static _FollowJointTrajectoryUntil_SendGoal_Event_type_support_data_t _FollowJointTrajectoryUntil_SendGoal_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FollowJointTrajectoryUntil_SendGoal_Event_message_typesupport_map = {
  2,
  "ur_msgs",
  &_FollowJointTrajectoryUntil_SendGoal_Event_message_typesupport_ids.typesupport_identifier[0],
  &_FollowJointTrajectoryUntil_SendGoal_Event_message_typesupport_symbol_names.symbol_name[0],
  &_FollowJointTrajectoryUntil_SendGoal_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t FollowJointTrajectoryUntil_SendGoal_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FollowJointTrajectoryUntil_SendGoal_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Event__get_type_hash,
  &ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Event__get_type_description,
  &ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ur_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ur_msgs::action::FollowJointTrajectoryUntil_SendGoal_Event>()
{
  return &::ur_msgs::action::rosidl_typesupport_cpp::FollowJointTrajectoryUntil_SendGoal_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ur_msgs, action, FollowJointTrajectoryUntil_SendGoal_Event)() {
  return get_message_type_support_handle<ur_msgs::action::FollowJointTrajectoryUntil_SendGoal_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "ur_msgs/action/detail/follow_joint_trajectory_until__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ur_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _FollowJointTrajectoryUntil_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FollowJointTrajectoryUntil_SendGoal_type_support_ids_t;

static const _FollowJointTrajectoryUntil_SendGoal_type_support_ids_t _FollowJointTrajectoryUntil_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _FollowJointTrajectoryUntil_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FollowJointTrajectoryUntil_SendGoal_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FollowJointTrajectoryUntil_SendGoal_type_support_symbol_names_t _FollowJointTrajectoryUntil_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ur_msgs, action, FollowJointTrajectoryUntil_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ur_msgs, action, FollowJointTrajectoryUntil_SendGoal)),
  }
};

typedef struct _FollowJointTrajectoryUntil_SendGoal_type_support_data_t
{
  void * data[2];
} _FollowJointTrajectoryUntil_SendGoal_type_support_data_t;

static _FollowJointTrajectoryUntil_SendGoal_type_support_data_t _FollowJointTrajectoryUntil_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FollowJointTrajectoryUntil_SendGoal_service_typesupport_map = {
  2,
  "ur_msgs",
  &_FollowJointTrajectoryUntil_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_FollowJointTrajectoryUntil_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_FollowJointTrajectoryUntil_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t FollowJointTrajectoryUntil_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FollowJointTrajectoryUntil_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ur_msgs::action::FollowJointTrajectoryUntil_SendGoal_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ur_msgs::action::FollowJointTrajectoryUntil_SendGoal_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ur_msgs::action::FollowJointTrajectoryUntil_SendGoal_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<ur_msgs::action::FollowJointTrajectoryUntil_SendGoal>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<ur_msgs::action::FollowJointTrajectoryUntil_SendGoal>,
  &ur_msgs__action__FollowJointTrajectoryUntil_SendGoal__get_type_hash,
  &ur_msgs__action__FollowJointTrajectoryUntil_SendGoal__get_type_description,
  &ur_msgs__action__FollowJointTrajectoryUntil_SendGoal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ur_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<ur_msgs::action::FollowJointTrajectoryUntil_SendGoal>()
{
  return &::ur_msgs::action::rosidl_typesupport_cpp::FollowJointTrajectoryUntil_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, ur_msgs, action, FollowJointTrajectoryUntil_SendGoal)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<ur_msgs::action::FollowJointTrajectoryUntil_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ur_msgs/action/detail/follow_joint_trajectory_until__functions.h"
// already included above
// #include "ur_msgs/action/detail/follow_joint_trajectory_until__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ur_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _FollowJointTrajectoryUntil_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FollowJointTrajectoryUntil_GetResult_Request_type_support_ids_t;

static const _FollowJointTrajectoryUntil_GetResult_Request_type_support_ids_t _FollowJointTrajectoryUntil_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _FollowJointTrajectoryUntil_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FollowJointTrajectoryUntil_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FollowJointTrajectoryUntil_GetResult_Request_type_support_symbol_names_t _FollowJointTrajectoryUntil_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ur_msgs, action, FollowJointTrajectoryUntil_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ur_msgs, action, FollowJointTrajectoryUntil_GetResult_Request)),
  }
};

typedef struct _FollowJointTrajectoryUntil_GetResult_Request_type_support_data_t
{
  void * data[2];
} _FollowJointTrajectoryUntil_GetResult_Request_type_support_data_t;

static _FollowJointTrajectoryUntil_GetResult_Request_type_support_data_t _FollowJointTrajectoryUntil_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FollowJointTrajectoryUntil_GetResult_Request_message_typesupport_map = {
  2,
  "ur_msgs",
  &_FollowJointTrajectoryUntil_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_FollowJointTrajectoryUntil_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_FollowJointTrajectoryUntil_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t FollowJointTrajectoryUntil_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FollowJointTrajectoryUntil_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Request__get_type_hash,
  &ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Request__get_type_description,
  &ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ur_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ur_msgs::action::FollowJointTrajectoryUntil_GetResult_Request>()
{
  return &::ur_msgs::action::rosidl_typesupport_cpp::FollowJointTrajectoryUntil_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ur_msgs, action, FollowJointTrajectoryUntil_GetResult_Request)() {
  return get_message_type_support_handle<ur_msgs::action::FollowJointTrajectoryUntil_GetResult_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ur_msgs/action/detail/follow_joint_trajectory_until__functions.h"
// already included above
// #include "ur_msgs/action/detail/follow_joint_trajectory_until__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ur_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _FollowJointTrajectoryUntil_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FollowJointTrajectoryUntil_GetResult_Response_type_support_ids_t;

static const _FollowJointTrajectoryUntil_GetResult_Response_type_support_ids_t _FollowJointTrajectoryUntil_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _FollowJointTrajectoryUntil_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FollowJointTrajectoryUntil_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FollowJointTrajectoryUntil_GetResult_Response_type_support_symbol_names_t _FollowJointTrajectoryUntil_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ur_msgs, action, FollowJointTrajectoryUntil_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ur_msgs, action, FollowJointTrajectoryUntil_GetResult_Response)),
  }
};

typedef struct _FollowJointTrajectoryUntil_GetResult_Response_type_support_data_t
{
  void * data[2];
} _FollowJointTrajectoryUntil_GetResult_Response_type_support_data_t;

static _FollowJointTrajectoryUntil_GetResult_Response_type_support_data_t _FollowJointTrajectoryUntil_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FollowJointTrajectoryUntil_GetResult_Response_message_typesupport_map = {
  2,
  "ur_msgs",
  &_FollowJointTrajectoryUntil_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_FollowJointTrajectoryUntil_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_FollowJointTrajectoryUntil_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t FollowJointTrajectoryUntil_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FollowJointTrajectoryUntil_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Response__get_type_hash,
  &ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Response__get_type_description,
  &ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ur_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ur_msgs::action::FollowJointTrajectoryUntil_GetResult_Response>()
{
  return &::ur_msgs::action::rosidl_typesupport_cpp::FollowJointTrajectoryUntil_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ur_msgs, action, FollowJointTrajectoryUntil_GetResult_Response)() {
  return get_message_type_support_handle<ur_msgs::action::FollowJointTrajectoryUntil_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ur_msgs/action/detail/follow_joint_trajectory_until__functions.h"
// already included above
// #include "ur_msgs/action/detail/follow_joint_trajectory_until__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ur_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _FollowJointTrajectoryUntil_GetResult_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FollowJointTrajectoryUntil_GetResult_Event_type_support_ids_t;

static const _FollowJointTrajectoryUntil_GetResult_Event_type_support_ids_t _FollowJointTrajectoryUntil_GetResult_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _FollowJointTrajectoryUntil_GetResult_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FollowJointTrajectoryUntil_GetResult_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FollowJointTrajectoryUntil_GetResult_Event_type_support_symbol_names_t _FollowJointTrajectoryUntil_GetResult_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ur_msgs, action, FollowJointTrajectoryUntil_GetResult_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ur_msgs, action, FollowJointTrajectoryUntil_GetResult_Event)),
  }
};

typedef struct _FollowJointTrajectoryUntil_GetResult_Event_type_support_data_t
{
  void * data[2];
} _FollowJointTrajectoryUntil_GetResult_Event_type_support_data_t;

static _FollowJointTrajectoryUntil_GetResult_Event_type_support_data_t _FollowJointTrajectoryUntil_GetResult_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FollowJointTrajectoryUntil_GetResult_Event_message_typesupport_map = {
  2,
  "ur_msgs",
  &_FollowJointTrajectoryUntil_GetResult_Event_message_typesupport_ids.typesupport_identifier[0],
  &_FollowJointTrajectoryUntil_GetResult_Event_message_typesupport_symbol_names.symbol_name[0],
  &_FollowJointTrajectoryUntil_GetResult_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t FollowJointTrajectoryUntil_GetResult_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FollowJointTrajectoryUntil_GetResult_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Event__get_type_hash,
  &ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Event__get_type_description,
  &ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ur_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ur_msgs::action::FollowJointTrajectoryUntil_GetResult_Event>()
{
  return &::ur_msgs::action::rosidl_typesupport_cpp::FollowJointTrajectoryUntil_GetResult_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ur_msgs, action, FollowJointTrajectoryUntil_GetResult_Event)() {
  return get_message_type_support_handle<ur_msgs::action::FollowJointTrajectoryUntil_GetResult_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "ur_msgs/action/detail/follow_joint_trajectory_until__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ur_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _FollowJointTrajectoryUntil_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FollowJointTrajectoryUntil_GetResult_type_support_ids_t;

static const _FollowJointTrajectoryUntil_GetResult_type_support_ids_t _FollowJointTrajectoryUntil_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _FollowJointTrajectoryUntil_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FollowJointTrajectoryUntil_GetResult_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FollowJointTrajectoryUntil_GetResult_type_support_symbol_names_t _FollowJointTrajectoryUntil_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ur_msgs, action, FollowJointTrajectoryUntil_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ur_msgs, action, FollowJointTrajectoryUntil_GetResult)),
  }
};

typedef struct _FollowJointTrajectoryUntil_GetResult_type_support_data_t
{
  void * data[2];
} _FollowJointTrajectoryUntil_GetResult_type_support_data_t;

static _FollowJointTrajectoryUntil_GetResult_type_support_data_t _FollowJointTrajectoryUntil_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FollowJointTrajectoryUntil_GetResult_service_typesupport_map = {
  2,
  "ur_msgs",
  &_FollowJointTrajectoryUntil_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_FollowJointTrajectoryUntil_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_FollowJointTrajectoryUntil_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t FollowJointTrajectoryUntil_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FollowJointTrajectoryUntil_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ur_msgs::action::FollowJointTrajectoryUntil_GetResult_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ur_msgs::action::FollowJointTrajectoryUntil_GetResult_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ur_msgs::action::FollowJointTrajectoryUntil_GetResult_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<ur_msgs::action::FollowJointTrajectoryUntil_GetResult>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<ur_msgs::action::FollowJointTrajectoryUntil_GetResult>,
  &ur_msgs__action__FollowJointTrajectoryUntil_GetResult__get_type_hash,
  &ur_msgs__action__FollowJointTrajectoryUntil_GetResult__get_type_description,
  &ur_msgs__action__FollowJointTrajectoryUntil_GetResult__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ur_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<ur_msgs::action::FollowJointTrajectoryUntil_GetResult>()
{
  return &::ur_msgs::action::rosidl_typesupport_cpp::FollowJointTrajectoryUntil_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, ur_msgs, action, FollowJointTrajectoryUntil_GetResult)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<ur_msgs::action::FollowJointTrajectoryUntil_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ur_msgs/action/detail/follow_joint_trajectory_until__functions.h"
// already included above
// #include "ur_msgs/action/detail/follow_joint_trajectory_until__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ur_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _FollowJointTrajectoryUntil_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FollowJointTrajectoryUntil_FeedbackMessage_type_support_ids_t;

static const _FollowJointTrajectoryUntil_FeedbackMessage_type_support_ids_t _FollowJointTrajectoryUntil_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _FollowJointTrajectoryUntil_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FollowJointTrajectoryUntil_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FollowJointTrajectoryUntil_FeedbackMessage_type_support_symbol_names_t _FollowJointTrajectoryUntil_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ur_msgs, action, FollowJointTrajectoryUntil_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ur_msgs, action, FollowJointTrajectoryUntil_FeedbackMessage)),
  }
};

typedef struct _FollowJointTrajectoryUntil_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _FollowJointTrajectoryUntil_FeedbackMessage_type_support_data_t;

static _FollowJointTrajectoryUntil_FeedbackMessage_type_support_data_t _FollowJointTrajectoryUntil_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FollowJointTrajectoryUntil_FeedbackMessage_message_typesupport_map = {
  2,
  "ur_msgs",
  &_FollowJointTrajectoryUntil_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_FollowJointTrajectoryUntil_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_FollowJointTrajectoryUntil_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t FollowJointTrajectoryUntil_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FollowJointTrajectoryUntil_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ur_msgs__action__FollowJointTrajectoryUntil_FeedbackMessage__get_type_hash,
  &ur_msgs__action__FollowJointTrajectoryUntil_FeedbackMessage__get_type_description,
  &ur_msgs__action__FollowJointTrajectoryUntil_FeedbackMessage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ur_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ur_msgs::action::FollowJointTrajectoryUntil_FeedbackMessage>()
{
  return &::ur_msgs::action::rosidl_typesupport_cpp::FollowJointTrajectoryUntil_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ur_msgs, action, FollowJointTrajectoryUntil_FeedbackMessage)() {
  return get_message_type_support_handle<ur_msgs::action::FollowJointTrajectoryUntil_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "ur_msgs/action/detail/follow_joint_trajectory_until__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace ur_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t FollowJointTrajectoryUntil_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL,
  &ur_msgs__action__FollowJointTrajectoryUntil__get_type_hash,
  &ur_msgs__action__FollowJointTrajectoryUntil__get_type_description,
  &ur_msgs__action__FollowJointTrajectoryUntil__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ur_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<ur_msgs::action::FollowJointTrajectoryUntil>()
{
  using ::ur_msgs::action::rosidl_typesupport_cpp::FollowJointTrajectoryUntil_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  FollowJointTrajectoryUntil_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::ur_msgs::action::FollowJointTrajectoryUntil::Impl::SendGoalService>();
  FollowJointTrajectoryUntil_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::ur_msgs::action::FollowJointTrajectoryUntil::Impl::GetResultService>();
  FollowJointTrajectoryUntil_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::ur_msgs::action::FollowJointTrajectoryUntil::Impl::CancelGoalService>();
  FollowJointTrajectoryUntil_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::ur_msgs::action::FollowJointTrajectoryUntil::Impl::FeedbackMessage>();
  FollowJointTrajectoryUntil_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::ur_msgs::action::FollowJointTrajectoryUntil::Impl::GoalStatusMessage>();
  return &FollowJointTrajectoryUntil_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(rosidl_typesupport_cpp, ur_msgs, action, FollowJointTrajectoryUntil)() {
  return ::rosidl_typesupport_cpp::get_action_type_support_handle<ur_msgs::action::FollowJointTrajectoryUntil>();
}

#ifdef __cplusplus
}
#endif
