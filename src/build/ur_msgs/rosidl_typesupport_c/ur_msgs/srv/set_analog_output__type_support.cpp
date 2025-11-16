// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from ur_msgs:srv/SetAnalogOutput.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "ur_msgs/srv/detail/set_analog_output__struct.h"
#include "ur_msgs/srv/detail/set_analog_output__type_support.h"
#include "ur_msgs/srv/detail/set_analog_output__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace ur_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SetAnalogOutput_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetAnalogOutput_Request_type_support_ids_t;

static const _SetAnalogOutput_Request_type_support_ids_t _SetAnalogOutput_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetAnalogOutput_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetAnalogOutput_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetAnalogOutput_Request_type_support_symbol_names_t _SetAnalogOutput_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ur_msgs, srv, SetAnalogOutput_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_msgs, srv, SetAnalogOutput_Request)),
  }
};

typedef struct _SetAnalogOutput_Request_type_support_data_t
{
  void * data[2];
} _SetAnalogOutput_Request_type_support_data_t;

static _SetAnalogOutput_Request_type_support_data_t _SetAnalogOutput_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetAnalogOutput_Request_message_typesupport_map = {
  2,
  "ur_msgs",
  &_SetAnalogOutput_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SetAnalogOutput_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SetAnalogOutput_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetAnalogOutput_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetAnalogOutput_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &ur_msgs__srv__SetAnalogOutput_Request__get_type_hash,
  &ur_msgs__srv__SetAnalogOutput_Request__get_type_description,
  &ur_msgs__srv__SetAnalogOutput_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace ur_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ur_msgs, srv, SetAnalogOutput_Request)() {
  return &::ur_msgs::srv::rosidl_typesupport_c::SetAnalogOutput_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ur_msgs/srv/detail/set_analog_output__struct.h"
// already included above
// #include "ur_msgs/srv/detail/set_analog_output__type_support.h"
// already included above
// #include "ur_msgs/srv/detail/set_analog_output__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ur_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SetAnalogOutput_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetAnalogOutput_Response_type_support_ids_t;

static const _SetAnalogOutput_Response_type_support_ids_t _SetAnalogOutput_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetAnalogOutput_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetAnalogOutput_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetAnalogOutput_Response_type_support_symbol_names_t _SetAnalogOutput_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ur_msgs, srv, SetAnalogOutput_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_msgs, srv, SetAnalogOutput_Response)),
  }
};

typedef struct _SetAnalogOutput_Response_type_support_data_t
{
  void * data[2];
} _SetAnalogOutput_Response_type_support_data_t;

static _SetAnalogOutput_Response_type_support_data_t _SetAnalogOutput_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetAnalogOutput_Response_message_typesupport_map = {
  2,
  "ur_msgs",
  &_SetAnalogOutput_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SetAnalogOutput_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SetAnalogOutput_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetAnalogOutput_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetAnalogOutput_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &ur_msgs__srv__SetAnalogOutput_Response__get_type_hash,
  &ur_msgs__srv__SetAnalogOutput_Response__get_type_description,
  &ur_msgs__srv__SetAnalogOutput_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace ur_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ur_msgs, srv, SetAnalogOutput_Response)() {
  return &::ur_msgs::srv::rosidl_typesupport_c::SetAnalogOutput_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ur_msgs/srv/detail/set_analog_output__struct.h"
// already included above
// #include "ur_msgs/srv/detail/set_analog_output__type_support.h"
// already included above
// #include "ur_msgs/srv/detail/set_analog_output__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ur_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SetAnalogOutput_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetAnalogOutput_Event_type_support_ids_t;

static const _SetAnalogOutput_Event_type_support_ids_t _SetAnalogOutput_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetAnalogOutput_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetAnalogOutput_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetAnalogOutput_Event_type_support_symbol_names_t _SetAnalogOutput_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ur_msgs, srv, SetAnalogOutput_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_msgs, srv, SetAnalogOutput_Event)),
  }
};

typedef struct _SetAnalogOutput_Event_type_support_data_t
{
  void * data[2];
} _SetAnalogOutput_Event_type_support_data_t;

static _SetAnalogOutput_Event_type_support_data_t _SetAnalogOutput_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetAnalogOutput_Event_message_typesupport_map = {
  2,
  "ur_msgs",
  &_SetAnalogOutput_Event_message_typesupport_ids.typesupport_identifier[0],
  &_SetAnalogOutput_Event_message_typesupport_symbol_names.symbol_name[0],
  &_SetAnalogOutput_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetAnalogOutput_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetAnalogOutput_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &ur_msgs__srv__SetAnalogOutput_Event__get_type_hash,
  &ur_msgs__srv__SetAnalogOutput_Event__get_type_description,
  &ur_msgs__srv__SetAnalogOutput_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace ur_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ur_msgs, srv, SetAnalogOutput_Event)() {
  return &::ur_msgs::srv::rosidl_typesupport_c::SetAnalogOutput_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ur_msgs/srv/detail/set_analog_output__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace ur_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _SetAnalogOutput_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetAnalogOutput_type_support_ids_t;

static const _SetAnalogOutput_type_support_ids_t _SetAnalogOutput_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetAnalogOutput_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetAnalogOutput_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetAnalogOutput_type_support_symbol_names_t _SetAnalogOutput_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ur_msgs, srv, SetAnalogOutput)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_msgs, srv, SetAnalogOutput)),
  }
};

typedef struct _SetAnalogOutput_type_support_data_t
{
  void * data[2];
} _SetAnalogOutput_type_support_data_t;

static _SetAnalogOutput_type_support_data_t _SetAnalogOutput_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetAnalogOutput_service_typesupport_map = {
  2,
  "ur_msgs",
  &_SetAnalogOutput_service_typesupport_ids.typesupport_identifier[0],
  &_SetAnalogOutput_service_typesupport_symbol_names.symbol_name[0],
  &_SetAnalogOutput_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SetAnalogOutput_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetAnalogOutput_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &SetAnalogOutput_Request_message_type_support_handle,
  &SetAnalogOutput_Response_message_type_support_handle,
  &SetAnalogOutput_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    ur_msgs,
    srv,
    SetAnalogOutput
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    ur_msgs,
    srv,
    SetAnalogOutput
  ),
  &ur_msgs__srv__SetAnalogOutput__get_type_hash,
  &ur_msgs__srv__SetAnalogOutput__get_type_description,
  &ur_msgs__srv__SetAnalogOutput__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace ur_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, ur_msgs, srv, SetAnalogOutput)() {
  return &::ur_msgs::srv::rosidl_typesupport_c::SetAnalogOutput_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
