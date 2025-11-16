// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ur_msgs:action/FollowJointTrajectoryUntil.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ur_msgs/action/follow_joint_trajectory_until.h"


#ifndef UR_MSGS__ACTION__DETAIL__FOLLOW_JOINT_TRAJECTORY_UNTIL__STRUCT_H_
#define UR_MSGS__ACTION__DETAIL__FOLLOW_JOINT_TRAJECTORY_UNTIL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'TOOL_CONTACT'.
enum
{
  ur_msgs__action__FollowJointTrajectoryUntil_Goal__TOOL_CONTACT = 0
};

// Include directives for member types
// Member 'trajectory'
#include "trajectory_msgs/msg/detail/joint_trajectory__struct.h"
// Member 'path_tolerance'
// Member 'goal_tolerance'
#include "control_msgs/msg/detail/joint_tolerance__struct.h"
// Member 'goal_time_tolerance'
#include "builtin_interfaces/msg/detail/duration__struct.h"

/// Struct defined in action/FollowJointTrajectoryUntil in the package ur_msgs.
typedef struct ur_msgs__action__FollowJointTrajectoryUntil_Goal
{
  trajectory_msgs__msg__JointTrajectory trajectory;
  /// The tolerances for the trajectory, while it is executing
  control_msgs__msg__JointTolerance__Sequence path_tolerance;
  /// The tolerances for the goal, when the trajectory is finished.
  control_msgs__msg__JointTolerance__Sequence goal_tolerance;
  builtin_interfaces__msg__Duration goal_time_tolerance;
  /// The condition until which the trajectory should run.
  uint8_t until_type;
} ur_msgs__action__FollowJointTrajectoryUntil_Goal;

// Struct for a sequence of ur_msgs__action__FollowJointTrajectoryUntil_Goal.
typedef struct ur_msgs__action__FollowJointTrajectoryUntil_Goal__Sequence
{
  ur_msgs__action__FollowJointTrajectoryUntil_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur_msgs__action__FollowJointTrajectoryUntil_Goal__Sequence;

// Constants defined in the message

/// Constant 'SUCCESSFUL'.
enum
{
  ur_msgs__action__FollowJointTrajectoryUntil_Result__SUCCESSFUL = 0l
};

/// Constant 'INVALID_GOAL'.
enum
{
  ur_msgs__action__FollowJointTrajectoryUntil_Result__INVALID_GOAL = -1l
};

/// Constant 'INVALID_JOINTS'.
enum
{
  ur_msgs__action__FollowJointTrajectoryUntil_Result__INVALID_JOINTS = -2l
};

/// Constant 'OLD_HEADER_TIMESTAMP'.
enum
{
  ur_msgs__action__FollowJointTrajectoryUntil_Result__OLD_HEADER_TIMESTAMP = -3l
};

/// Constant 'PATH_TOLERANCE_VIOLATED'.
enum
{
  ur_msgs__action__FollowJointTrajectoryUntil_Result__PATH_TOLERANCE_VIOLATED = -4l
};

/// Constant 'GOAL_TOLERANCE_VIOLATED'.
enum
{
  ur_msgs__action__FollowJointTrajectoryUntil_Result__GOAL_TOLERANCE_VIOLATED = -5l
};

/// Constant 'TRIGGERED'.
enum
{
  ur_msgs__action__FollowJointTrajectoryUntil_Result__TRIGGERED = 0l
};

/// Constant 'NOT_TRIGGERED'.
enum
{
  ur_msgs__action__FollowJointTrajectoryUntil_Result__NOT_TRIGGERED = 1l
};

// Include directives for member types
// Member 'error_string'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/FollowJointTrajectoryUntil in the package ur_msgs.
typedef struct ur_msgs__action__FollowJointTrajectoryUntil_Result
{
  int32_t error_code;
  int32_t until_condition_result;
  /// The error string will contain information about the final state of the trajectory execution.
  rosidl_runtime_c__String error_string;
} ur_msgs__action__FollowJointTrajectoryUntil_Result;

// Struct for a sequence of ur_msgs__action__FollowJointTrajectoryUntil_Result.
typedef struct ur_msgs__action__FollowJointTrajectoryUntil_Result__Sequence
{
  ur_msgs__action__FollowJointTrajectoryUntil_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur_msgs__action__FollowJointTrajectoryUntil_Result__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'joint_names'
// already included above
// #include "rosidl_runtime_c/string.h"
// Member 'desired'
// Member 'actual'
// Member 'error'
#include "trajectory_msgs/msg/detail/joint_trajectory_point__struct.h"

/// Struct defined in action/FollowJointTrajectoryUntil in the package ur_msgs.
typedef struct ur_msgs__action__FollowJointTrajectoryUntil_Feedback
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String__Sequence joint_names;
  trajectory_msgs__msg__JointTrajectoryPoint desired;
  trajectory_msgs__msg__JointTrajectoryPoint actual;
  trajectory_msgs__msg__JointTrajectoryPoint error;
} ur_msgs__action__FollowJointTrajectoryUntil_Feedback;

// Struct for a sequence of ur_msgs__action__FollowJointTrajectoryUntil_Feedback.
typedef struct ur_msgs__action__FollowJointTrajectoryUntil_Feedback__Sequence
{
  ur_msgs__action__FollowJointTrajectoryUntil_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur_msgs__action__FollowJointTrajectoryUntil_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "ur_msgs/action/detail/follow_joint_trajectory_until__struct.h"

/// Struct defined in action/FollowJointTrajectoryUntil in the package ur_msgs.
typedef struct ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  ur_msgs__action__FollowJointTrajectoryUntil_Goal goal;
} ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Request;

// Struct for a sequence of ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Request.
typedef struct ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Request__Sequence
{
  ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/FollowJointTrajectoryUntil in the package ur_msgs.
typedef struct ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Response;

// Struct for a sequence of ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Response.
typedef struct ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Response__Sequence
{
  ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/FollowJointTrajectoryUntil in the package ur_msgs.
typedef struct ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Request__Sequence request;
  ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Response__Sequence response;
} ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Event;

// Struct for a sequence of ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Event.
typedef struct ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Event__Sequence
{
  ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur_msgs__action__FollowJointTrajectoryUntil_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/FollowJointTrajectoryUntil in the package ur_msgs.
typedef struct ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Request;

// Struct for a sequence of ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Request.
typedef struct ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Request__Sequence
{
  ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "ur_msgs/action/detail/follow_joint_trajectory_until__struct.h"

/// Struct defined in action/FollowJointTrajectoryUntil in the package ur_msgs.
typedef struct ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Response
{
  int8_t status;
  ur_msgs__action__FollowJointTrajectoryUntil_Result result;
} ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Response;

// Struct for a sequence of ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Response.
typedef struct ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Response__Sequence
{
  ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/FollowJointTrajectoryUntil in the package ur_msgs.
typedef struct ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Request__Sequence request;
  ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Response__Sequence response;
} ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Event;

// Struct for a sequence of ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Event.
typedef struct ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Event__Sequence
{
  ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur_msgs__action__FollowJointTrajectoryUntil_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "ur_msgs/action/detail/follow_joint_trajectory_until__struct.h"

/// Struct defined in action/FollowJointTrajectoryUntil in the package ur_msgs.
typedef struct ur_msgs__action__FollowJointTrajectoryUntil_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  ur_msgs__action__FollowJointTrajectoryUntil_Feedback feedback;
} ur_msgs__action__FollowJointTrajectoryUntil_FeedbackMessage;

// Struct for a sequence of ur_msgs__action__FollowJointTrajectoryUntil_FeedbackMessage.
typedef struct ur_msgs__action__FollowJointTrajectoryUntil_FeedbackMessage__Sequence
{
  ur_msgs__action__FollowJointTrajectoryUntil_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur_msgs__action__FollowJointTrajectoryUntil_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UR_MSGS__ACTION__DETAIL__FOLLOW_JOINT_TRAJECTORY_UNTIL__STRUCT_H_
