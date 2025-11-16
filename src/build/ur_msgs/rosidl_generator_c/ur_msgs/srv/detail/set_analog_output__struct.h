// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ur_msgs:srv/SetAnalogOutput.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ur_msgs/srv/set_analog_output.h"


#ifndef UR_MSGS__SRV__DETAIL__SET_ANALOG_OUTPUT__STRUCT_H_
#define UR_MSGS__SRV__DETAIL__SET_ANALOG_OUTPUT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "ur_msgs/msg/detail/analog__struct.h"

/// Struct defined in srv/SetAnalogOutput in the package ur_msgs.
typedef struct ur_msgs__srv__SetAnalogOutput_Request
{
  ur_msgs__msg__Analog data;
} ur_msgs__srv__SetAnalogOutput_Request;

// Struct for a sequence of ur_msgs__srv__SetAnalogOutput_Request.
typedef struct ur_msgs__srv__SetAnalogOutput_Request__Sequence
{
  ur_msgs__srv__SetAnalogOutput_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur_msgs__srv__SetAnalogOutput_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/SetAnalogOutput in the package ur_msgs.
typedef struct ur_msgs__srv__SetAnalogOutput_Response
{
  bool success;
} ur_msgs__srv__SetAnalogOutput_Response;

// Struct for a sequence of ur_msgs__srv__SetAnalogOutput_Response.
typedef struct ur_msgs__srv__SetAnalogOutput_Response__Sequence
{
  ur_msgs__srv__SetAnalogOutput_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur_msgs__srv__SetAnalogOutput_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  ur_msgs__srv__SetAnalogOutput_Event__request__MAX_SIZE = 1
};
// response
enum
{
  ur_msgs__srv__SetAnalogOutput_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SetAnalogOutput in the package ur_msgs.
typedef struct ur_msgs__srv__SetAnalogOutput_Event
{
  service_msgs__msg__ServiceEventInfo info;
  ur_msgs__srv__SetAnalogOutput_Request__Sequence request;
  ur_msgs__srv__SetAnalogOutput_Response__Sequence response;
} ur_msgs__srv__SetAnalogOutput_Event;

// Struct for a sequence of ur_msgs__srv__SetAnalogOutput_Event.
typedef struct ur_msgs__srv__SetAnalogOutput_Event__Sequence
{
  ur_msgs__srv__SetAnalogOutput_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur_msgs__srv__SetAnalogOutput_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UR_MSGS__SRV__DETAIL__SET_ANALOG_OUTPUT__STRUCT_H_
