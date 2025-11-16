// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ur_msgs:srv/GetRobotSoftwareVersion.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ur_msgs/srv/get_robot_software_version.h"


#ifndef UR_MSGS__SRV__DETAIL__GET_ROBOT_SOFTWARE_VERSION__STRUCT_H_
#define UR_MSGS__SRV__DETAIL__GET_ROBOT_SOFTWARE_VERSION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetRobotSoftwareVersion in the package ur_msgs.
typedef struct ur_msgs__srv__GetRobotSoftwareVersion_Request
{
  uint8_t structure_needs_at_least_one_member;
} ur_msgs__srv__GetRobotSoftwareVersion_Request;

// Struct for a sequence of ur_msgs__srv__GetRobotSoftwareVersion_Request.
typedef struct ur_msgs__srv__GetRobotSoftwareVersion_Request__Sequence
{
  ur_msgs__srv__GetRobotSoftwareVersion_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur_msgs__srv__GetRobotSoftwareVersion_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/GetRobotSoftwareVersion in the package ur_msgs.
typedef struct ur_msgs__srv__GetRobotSoftwareVersion_Response
{
  /// Major version number
  uint32_t major;
  /// Minor version number
  uint32_t minor;
  /// Bugfix version number
  uint32_t bugfix;
  /// Build number
  uint32_t build;
} ur_msgs__srv__GetRobotSoftwareVersion_Response;

// Struct for a sequence of ur_msgs__srv__GetRobotSoftwareVersion_Response.
typedef struct ur_msgs__srv__GetRobotSoftwareVersion_Response__Sequence
{
  ur_msgs__srv__GetRobotSoftwareVersion_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur_msgs__srv__GetRobotSoftwareVersion_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  ur_msgs__srv__GetRobotSoftwareVersion_Event__request__MAX_SIZE = 1
};
// response
enum
{
  ur_msgs__srv__GetRobotSoftwareVersion_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/GetRobotSoftwareVersion in the package ur_msgs.
typedef struct ur_msgs__srv__GetRobotSoftwareVersion_Event
{
  service_msgs__msg__ServiceEventInfo info;
  ur_msgs__srv__GetRobotSoftwareVersion_Request__Sequence request;
  ur_msgs__srv__GetRobotSoftwareVersion_Response__Sequence response;
} ur_msgs__srv__GetRobotSoftwareVersion_Event;

// Struct for a sequence of ur_msgs__srv__GetRobotSoftwareVersion_Event.
typedef struct ur_msgs__srv__GetRobotSoftwareVersion_Event__Sequence
{
  ur_msgs__srv__GetRobotSoftwareVersion_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur_msgs__srv__GetRobotSoftwareVersion_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UR_MSGS__SRV__DETAIL__GET_ROBOT_SOFTWARE_VERSION__STRUCT_H_
