// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ur_msgs:action/FollowJointTrajectoryUntil.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ur_msgs/action/follow_joint_trajectory_until.hpp"


#ifndef UR_MSGS__ACTION__DETAIL__FOLLOW_JOINT_TRAJECTORY_UNTIL__BUILDER_HPP_
#define UR_MSGS__ACTION__DETAIL__FOLLOW_JOINT_TRAJECTORY_UNTIL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ur_msgs/action/detail/follow_joint_trajectory_until__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ur_msgs
{

namespace action
{

namespace builder
{

class Init_FollowJointTrajectoryUntil_Goal_until_type
{
public:
  explicit Init_FollowJointTrajectoryUntil_Goal_until_type(::ur_msgs::action::FollowJointTrajectoryUntil_Goal & msg)
  : msg_(msg)
  {}
  ::ur_msgs::action::FollowJointTrajectoryUntil_Goal until_type(::ur_msgs::action::FollowJointTrajectoryUntil_Goal::_until_type_type arg)
  {
    msg_.until_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur_msgs::action::FollowJointTrajectoryUntil_Goal msg_;
};

class Init_FollowJointTrajectoryUntil_Goal_goal_time_tolerance
{
public:
  explicit Init_FollowJointTrajectoryUntil_Goal_goal_time_tolerance(::ur_msgs::action::FollowJointTrajectoryUntil_Goal & msg)
  : msg_(msg)
  {}
  Init_FollowJointTrajectoryUntil_Goal_until_type goal_time_tolerance(::ur_msgs::action::FollowJointTrajectoryUntil_Goal::_goal_time_tolerance_type arg)
  {
    msg_.goal_time_tolerance = std::move(arg);
    return Init_FollowJointTrajectoryUntil_Goal_until_type(msg_);
  }

private:
  ::ur_msgs::action::FollowJointTrajectoryUntil_Goal msg_;
};

class Init_FollowJointTrajectoryUntil_Goal_goal_tolerance
{
public:
  explicit Init_FollowJointTrajectoryUntil_Goal_goal_tolerance(::ur_msgs::action::FollowJointTrajectoryUntil_Goal & msg)
  : msg_(msg)
  {}
  Init_FollowJointTrajectoryUntil_Goal_goal_time_tolerance goal_tolerance(::ur_msgs::action::FollowJointTrajectoryUntil_Goal::_goal_tolerance_type arg)
  {
    msg_.goal_tolerance = std::move(arg);
    return Init_FollowJointTrajectoryUntil_Goal_goal_time_tolerance(msg_);
  }

private:
  ::ur_msgs::action::FollowJointTrajectoryUntil_Goal msg_;
};

class Init_FollowJointTrajectoryUntil_Goal_path_tolerance
{
public:
  explicit Init_FollowJointTrajectoryUntil_Goal_path_tolerance(::ur_msgs::action::FollowJointTrajectoryUntil_Goal & msg)
  : msg_(msg)
  {}
  Init_FollowJointTrajectoryUntil_Goal_goal_tolerance path_tolerance(::ur_msgs::action::FollowJointTrajectoryUntil_Goal::_path_tolerance_type arg)
  {
    msg_.path_tolerance = std::move(arg);
    return Init_FollowJointTrajectoryUntil_Goal_goal_tolerance(msg_);
  }

private:
  ::ur_msgs::action::FollowJointTrajectoryUntil_Goal msg_;
};

class Init_FollowJointTrajectoryUntil_Goal_trajectory
{
public:
  Init_FollowJointTrajectoryUntil_Goal_trajectory()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FollowJointTrajectoryUntil_Goal_path_tolerance trajectory(::ur_msgs::action::FollowJointTrajectoryUntil_Goal::_trajectory_type arg)
  {
    msg_.trajectory = std::move(arg);
    return Init_FollowJointTrajectoryUntil_Goal_path_tolerance(msg_);
  }

private:
  ::ur_msgs::action::FollowJointTrajectoryUntil_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur_msgs::action::FollowJointTrajectoryUntil_Goal>()
{
  return ur_msgs::action::builder::Init_FollowJointTrajectoryUntil_Goal_trajectory();
}

}  // namespace ur_msgs


namespace ur_msgs
{

namespace action
{

namespace builder
{

class Init_FollowJointTrajectoryUntil_Result_error_string
{
public:
  explicit Init_FollowJointTrajectoryUntil_Result_error_string(::ur_msgs::action::FollowJointTrajectoryUntil_Result & msg)
  : msg_(msg)
  {}
  ::ur_msgs::action::FollowJointTrajectoryUntil_Result error_string(::ur_msgs::action::FollowJointTrajectoryUntil_Result::_error_string_type arg)
  {
    msg_.error_string = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur_msgs::action::FollowJointTrajectoryUntil_Result msg_;
};

class Init_FollowJointTrajectoryUntil_Result_until_condition_result
{
public:
  explicit Init_FollowJointTrajectoryUntil_Result_until_condition_result(::ur_msgs::action::FollowJointTrajectoryUntil_Result & msg)
  : msg_(msg)
  {}
  Init_FollowJointTrajectoryUntil_Result_error_string until_condition_result(::ur_msgs::action::FollowJointTrajectoryUntil_Result::_until_condition_result_type arg)
  {
    msg_.until_condition_result = std::move(arg);
    return Init_FollowJointTrajectoryUntil_Result_error_string(msg_);
  }

private:
  ::ur_msgs::action::FollowJointTrajectoryUntil_Result msg_;
};

class Init_FollowJointTrajectoryUntil_Result_error_code
{
public:
  Init_FollowJointTrajectoryUntil_Result_error_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FollowJointTrajectoryUntil_Result_until_condition_result error_code(::ur_msgs::action::FollowJointTrajectoryUntil_Result::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return Init_FollowJointTrajectoryUntil_Result_until_condition_result(msg_);
  }

private:
  ::ur_msgs::action::FollowJointTrajectoryUntil_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur_msgs::action::FollowJointTrajectoryUntil_Result>()
{
  return ur_msgs::action::builder::Init_FollowJointTrajectoryUntil_Result_error_code();
}

}  // namespace ur_msgs


namespace ur_msgs
{

namespace action
{

namespace builder
{

class Init_FollowJointTrajectoryUntil_Feedback_error
{
public:
  explicit Init_FollowJointTrajectoryUntil_Feedback_error(::ur_msgs::action::FollowJointTrajectoryUntil_Feedback & msg)
  : msg_(msg)
  {}
  ::ur_msgs::action::FollowJointTrajectoryUntil_Feedback error(::ur_msgs::action::FollowJointTrajectoryUntil_Feedback::_error_type arg)
  {
    msg_.error = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur_msgs::action::FollowJointTrajectoryUntil_Feedback msg_;
};

class Init_FollowJointTrajectoryUntil_Feedback_actual
{
public:
  explicit Init_FollowJointTrajectoryUntil_Feedback_actual(::ur_msgs::action::FollowJointTrajectoryUntil_Feedback & msg)
  : msg_(msg)
  {}
  Init_FollowJointTrajectoryUntil_Feedback_error actual(::ur_msgs::action::FollowJointTrajectoryUntil_Feedback::_actual_type arg)
  {
    msg_.actual = std::move(arg);
    return Init_FollowJointTrajectoryUntil_Feedback_error(msg_);
  }

private:
  ::ur_msgs::action::FollowJointTrajectoryUntil_Feedback msg_;
};

class Init_FollowJointTrajectoryUntil_Feedback_desired
{
public:
  explicit Init_FollowJointTrajectoryUntil_Feedback_desired(::ur_msgs::action::FollowJointTrajectoryUntil_Feedback & msg)
  : msg_(msg)
  {}
  Init_FollowJointTrajectoryUntil_Feedback_actual desired(::ur_msgs::action::FollowJointTrajectoryUntil_Feedback::_desired_type arg)
  {
    msg_.desired = std::move(arg);
    return Init_FollowJointTrajectoryUntil_Feedback_actual(msg_);
  }

private:
  ::ur_msgs::action::FollowJointTrajectoryUntil_Feedback msg_;
};

class Init_FollowJointTrajectoryUntil_Feedback_joint_names
{
public:
  explicit Init_FollowJointTrajectoryUntil_Feedback_joint_names(::ur_msgs::action::FollowJointTrajectoryUntil_Feedback & msg)
  : msg_(msg)
  {}
  Init_FollowJointTrajectoryUntil_Feedback_desired joint_names(::ur_msgs::action::FollowJointTrajectoryUntil_Feedback::_joint_names_type arg)
  {
    msg_.joint_names = std::move(arg);
    return Init_FollowJointTrajectoryUntil_Feedback_desired(msg_);
  }

private:
  ::ur_msgs::action::FollowJointTrajectoryUntil_Feedback msg_;
};

class Init_FollowJointTrajectoryUntil_Feedback_header
{
public:
  Init_FollowJointTrajectoryUntil_Feedback_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FollowJointTrajectoryUntil_Feedback_joint_names header(::ur_msgs::action::FollowJointTrajectoryUntil_Feedback::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_FollowJointTrajectoryUntil_Feedback_joint_names(msg_);
  }

private:
  ::ur_msgs::action::FollowJointTrajectoryUntil_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur_msgs::action::FollowJointTrajectoryUntil_Feedback>()
{
  return ur_msgs::action::builder::Init_FollowJointTrajectoryUntil_Feedback_header();
}

}  // namespace ur_msgs


namespace ur_msgs
{

namespace action
{

namespace builder
{

class Init_FollowJointTrajectoryUntil_SendGoal_Request_goal
{
public:
  explicit Init_FollowJointTrajectoryUntil_SendGoal_Request_goal(::ur_msgs::action::FollowJointTrajectoryUntil_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::ur_msgs::action::FollowJointTrajectoryUntil_SendGoal_Request goal(::ur_msgs::action::FollowJointTrajectoryUntil_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur_msgs::action::FollowJointTrajectoryUntil_SendGoal_Request msg_;
};

class Init_FollowJointTrajectoryUntil_SendGoal_Request_goal_id
{
public:
  Init_FollowJointTrajectoryUntil_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FollowJointTrajectoryUntil_SendGoal_Request_goal goal_id(::ur_msgs::action::FollowJointTrajectoryUntil_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_FollowJointTrajectoryUntil_SendGoal_Request_goal(msg_);
  }

private:
  ::ur_msgs::action::FollowJointTrajectoryUntil_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur_msgs::action::FollowJointTrajectoryUntil_SendGoal_Request>()
{
  return ur_msgs::action::builder::Init_FollowJointTrajectoryUntil_SendGoal_Request_goal_id();
}

}  // namespace ur_msgs


namespace ur_msgs
{

namespace action
{

namespace builder
{

class Init_FollowJointTrajectoryUntil_SendGoal_Response_stamp
{
public:
  explicit Init_FollowJointTrajectoryUntil_SendGoal_Response_stamp(::ur_msgs::action::FollowJointTrajectoryUntil_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::ur_msgs::action::FollowJointTrajectoryUntil_SendGoal_Response stamp(::ur_msgs::action::FollowJointTrajectoryUntil_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur_msgs::action::FollowJointTrajectoryUntil_SendGoal_Response msg_;
};

class Init_FollowJointTrajectoryUntil_SendGoal_Response_accepted
{
public:
  Init_FollowJointTrajectoryUntil_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FollowJointTrajectoryUntil_SendGoal_Response_stamp accepted(::ur_msgs::action::FollowJointTrajectoryUntil_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_FollowJointTrajectoryUntil_SendGoal_Response_stamp(msg_);
  }

private:
  ::ur_msgs::action::FollowJointTrajectoryUntil_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur_msgs::action::FollowJointTrajectoryUntil_SendGoal_Response>()
{
  return ur_msgs::action::builder::Init_FollowJointTrajectoryUntil_SendGoal_Response_accepted();
}

}  // namespace ur_msgs


namespace ur_msgs
{

namespace action
{

namespace builder
{

class Init_FollowJointTrajectoryUntil_SendGoal_Event_response
{
public:
  explicit Init_FollowJointTrajectoryUntil_SendGoal_Event_response(::ur_msgs::action::FollowJointTrajectoryUntil_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::ur_msgs::action::FollowJointTrajectoryUntil_SendGoal_Event response(::ur_msgs::action::FollowJointTrajectoryUntil_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur_msgs::action::FollowJointTrajectoryUntil_SendGoal_Event msg_;
};

class Init_FollowJointTrajectoryUntil_SendGoal_Event_request
{
public:
  explicit Init_FollowJointTrajectoryUntil_SendGoal_Event_request(::ur_msgs::action::FollowJointTrajectoryUntil_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_FollowJointTrajectoryUntil_SendGoal_Event_response request(::ur_msgs::action::FollowJointTrajectoryUntil_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_FollowJointTrajectoryUntil_SendGoal_Event_response(msg_);
  }

private:
  ::ur_msgs::action::FollowJointTrajectoryUntil_SendGoal_Event msg_;
};

class Init_FollowJointTrajectoryUntil_SendGoal_Event_info
{
public:
  Init_FollowJointTrajectoryUntil_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FollowJointTrajectoryUntil_SendGoal_Event_request info(::ur_msgs::action::FollowJointTrajectoryUntil_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_FollowJointTrajectoryUntil_SendGoal_Event_request(msg_);
  }

private:
  ::ur_msgs::action::FollowJointTrajectoryUntil_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur_msgs::action::FollowJointTrajectoryUntil_SendGoal_Event>()
{
  return ur_msgs::action::builder::Init_FollowJointTrajectoryUntil_SendGoal_Event_info();
}

}  // namespace ur_msgs


namespace ur_msgs
{

namespace action
{

namespace builder
{

class Init_FollowJointTrajectoryUntil_GetResult_Request_goal_id
{
public:
  Init_FollowJointTrajectoryUntil_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ur_msgs::action::FollowJointTrajectoryUntil_GetResult_Request goal_id(::ur_msgs::action::FollowJointTrajectoryUntil_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur_msgs::action::FollowJointTrajectoryUntil_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur_msgs::action::FollowJointTrajectoryUntil_GetResult_Request>()
{
  return ur_msgs::action::builder::Init_FollowJointTrajectoryUntil_GetResult_Request_goal_id();
}

}  // namespace ur_msgs


namespace ur_msgs
{

namespace action
{

namespace builder
{

class Init_FollowJointTrajectoryUntil_GetResult_Response_result
{
public:
  explicit Init_FollowJointTrajectoryUntil_GetResult_Response_result(::ur_msgs::action::FollowJointTrajectoryUntil_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::ur_msgs::action::FollowJointTrajectoryUntil_GetResult_Response result(::ur_msgs::action::FollowJointTrajectoryUntil_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur_msgs::action::FollowJointTrajectoryUntil_GetResult_Response msg_;
};

class Init_FollowJointTrajectoryUntil_GetResult_Response_status
{
public:
  Init_FollowJointTrajectoryUntil_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FollowJointTrajectoryUntil_GetResult_Response_result status(::ur_msgs::action::FollowJointTrajectoryUntil_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_FollowJointTrajectoryUntil_GetResult_Response_result(msg_);
  }

private:
  ::ur_msgs::action::FollowJointTrajectoryUntil_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur_msgs::action::FollowJointTrajectoryUntil_GetResult_Response>()
{
  return ur_msgs::action::builder::Init_FollowJointTrajectoryUntil_GetResult_Response_status();
}

}  // namespace ur_msgs


namespace ur_msgs
{

namespace action
{

namespace builder
{

class Init_FollowJointTrajectoryUntil_GetResult_Event_response
{
public:
  explicit Init_FollowJointTrajectoryUntil_GetResult_Event_response(::ur_msgs::action::FollowJointTrajectoryUntil_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::ur_msgs::action::FollowJointTrajectoryUntil_GetResult_Event response(::ur_msgs::action::FollowJointTrajectoryUntil_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur_msgs::action::FollowJointTrajectoryUntil_GetResult_Event msg_;
};

class Init_FollowJointTrajectoryUntil_GetResult_Event_request
{
public:
  explicit Init_FollowJointTrajectoryUntil_GetResult_Event_request(::ur_msgs::action::FollowJointTrajectoryUntil_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_FollowJointTrajectoryUntil_GetResult_Event_response request(::ur_msgs::action::FollowJointTrajectoryUntil_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_FollowJointTrajectoryUntil_GetResult_Event_response(msg_);
  }

private:
  ::ur_msgs::action::FollowJointTrajectoryUntil_GetResult_Event msg_;
};

class Init_FollowJointTrajectoryUntil_GetResult_Event_info
{
public:
  Init_FollowJointTrajectoryUntil_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FollowJointTrajectoryUntil_GetResult_Event_request info(::ur_msgs::action::FollowJointTrajectoryUntil_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_FollowJointTrajectoryUntil_GetResult_Event_request(msg_);
  }

private:
  ::ur_msgs::action::FollowJointTrajectoryUntil_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur_msgs::action::FollowJointTrajectoryUntil_GetResult_Event>()
{
  return ur_msgs::action::builder::Init_FollowJointTrajectoryUntil_GetResult_Event_info();
}

}  // namespace ur_msgs


namespace ur_msgs
{

namespace action
{

namespace builder
{

class Init_FollowJointTrajectoryUntil_FeedbackMessage_feedback
{
public:
  explicit Init_FollowJointTrajectoryUntil_FeedbackMessage_feedback(::ur_msgs::action::FollowJointTrajectoryUntil_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::ur_msgs::action::FollowJointTrajectoryUntil_FeedbackMessage feedback(::ur_msgs::action::FollowJointTrajectoryUntil_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur_msgs::action::FollowJointTrajectoryUntil_FeedbackMessage msg_;
};

class Init_FollowJointTrajectoryUntil_FeedbackMessage_goal_id
{
public:
  Init_FollowJointTrajectoryUntil_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FollowJointTrajectoryUntil_FeedbackMessage_feedback goal_id(::ur_msgs::action::FollowJointTrajectoryUntil_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_FollowJointTrajectoryUntil_FeedbackMessage_feedback(msg_);
  }

private:
  ::ur_msgs::action::FollowJointTrajectoryUntil_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur_msgs::action::FollowJointTrajectoryUntil_FeedbackMessage>()
{
  return ur_msgs::action::builder::Init_FollowJointTrajectoryUntil_FeedbackMessage_goal_id();
}

}  // namespace ur_msgs

#endif  // UR_MSGS__ACTION__DETAIL__FOLLOW_JOINT_TRAJECTORY_UNTIL__BUILDER_HPP_
