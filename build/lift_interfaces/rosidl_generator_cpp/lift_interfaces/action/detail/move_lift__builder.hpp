// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lift_interfaces:action/MoveLift.idl
// generated code does not contain a copyright notice

#ifndef LIFT_INTERFACES__ACTION__DETAIL__MOVE_LIFT__BUILDER_HPP_
#define LIFT_INTERFACES__ACTION__DETAIL__MOVE_LIFT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lift_interfaces/action/detail/move_lift__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lift_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveLift_Goal_goal_position
{
public:
  Init_MoveLift_Goal_goal_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::lift_interfaces::action::MoveLift_Goal goal_position(::lift_interfaces::action::MoveLift_Goal::_goal_position_type arg)
  {
    msg_.goal_position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lift_interfaces::action::MoveLift_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::lift_interfaces::action::MoveLift_Goal>()
{
  return lift_interfaces::action::builder::Init_MoveLift_Goal_goal_position();
}

}  // namespace lift_interfaces


namespace lift_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveLift_Result_success
{
public:
  Init_MoveLift_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::lift_interfaces::action::MoveLift_Result success(::lift_interfaces::action::MoveLift_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lift_interfaces::action::MoveLift_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::lift_interfaces::action::MoveLift_Result>()
{
  return lift_interfaces::action::builder::Init_MoveLift_Result_success();
}

}  // namespace lift_interfaces


namespace lift_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveLift_Feedback_current_position
{
public:
  Init_MoveLift_Feedback_current_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::lift_interfaces::action::MoveLift_Feedback current_position(::lift_interfaces::action::MoveLift_Feedback::_current_position_type arg)
  {
    msg_.current_position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lift_interfaces::action::MoveLift_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::lift_interfaces::action::MoveLift_Feedback>()
{
  return lift_interfaces::action::builder::Init_MoveLift_Feedback_current_position();
}

}  // namespace lift_interfaces


namespace lift_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveLift_SendGoal_Request_goal
{
public:
  explicit Init_MoveLift_SendGoal_Request_goal(::lift_interfaces::action::MoveLift_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::lift_interfaces::action::MoveLift_SendGoal_Request goal(::lift_interfaces::action::MoveLift_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lift_interfaces::action::MoveLift_SendGoal_Request msg_;
};

class Init_MoveLift_SendGoal_Request_goal_id
{
public:
  Init_MoveLift_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveLift_SendGoal_Request_goal goal_id(::lift_interfaces::action::MoveLift_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MoveLift_SendGoal_Request_goal(msg_);
  }

private:
  ::lift_interfaces::action::MoveLift_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::lift_interfaces::action::MoveLift_SendGoal_Request>()
{
  return lift_interfaces::action::builder::Init_MoveLift_SendGoal_Request_goal_id();
}

}  // namespace lift_interfaces


namespace lift_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveLift_SendGoal_Response_stamp
{
public:
  explicit Init_MoveLift_SendGoal_Response_stamp(::lift_interfaces::action::MoveLift_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::lift_interfaces::action::MoveLift_SendGoal_Response stamp(::lift_interfaces::action::MoveLift_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lift_interfaces::action::MoveLift_SendGoal_Response msg_;
};

class Init_MoveLift_SendGoal_Response_accepted
{
public:
  Init_MoveLift_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveLift_SendGoal_Response_stamp accepted(::lift_interfaces::action::MoveLift_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_MoveLift_SendGoal_Response_stamp(msg_);
  }

private:
  ::lift_interfaces::action::MoveLift_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::lift_interfaces::action::MoveLift_SendGoal_Response>()
{
  return lift_interfaces::action::builder::Init_MoveLift_SendGoal_Response_accepted();
}

}  // namespace lift_interfaces


namespace lift_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveLift_GetResult_Request_goal_id
{
public:
  Init_MoveLift_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::lift_interfaces::action::MoveLift_GetResult_Request goal_id(::lift_interfaces::action::MoveLift_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lift_interfaces::action::MoveLift_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::lift_interfaces::action::MoveLift_GetResult_Request>()
{
  return lift_interfaces::action::builder::Init_MoveLift_GetResult_Request_goal_id();
}

}  // namespace lift_interfaces


namespace lift_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveLift_GetResult_Response_result
{
public:
  explicit Init_MoveLift_GetResult_Response_result(::lift_interfaces::action::MoveLift_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::lift_interfaces::action::MoveLift_GetResult_Response result(::lift_interfaces::action::MoveLift_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lift_interfaces::action::MoveLift_GetResult_Response msg_;
};

class Init_MoveLift_GetResult_Response_status
{
public:
  Init_MoveLift_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveLift_GetResult_Response_result status(::lift_interfaces::action::MoveLift_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_MoveLift_GetResult_Response_result(msg_);
  }

private:
  ::lift_interfaces::action::MoveLift_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::lift_interfaces::action::MoveLift_GetResult_Response>()
{
  return lift_interfaces::action::builder::Init_MoveLift_GetResult_Response_status();
}

}  // namespace lift_interfaces


namespace lift_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveLift_FeedbackMessage_feedback
{
public:
  explicit Init_MoveLift_FeedbackMessage_feedback(::lift_interfaces::action::MoveLift_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::lift_interfaces::action::MoveLift_FeedbackMessage feedback(::lift_interfaces::action::MoveLift_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lift_interfaces::action::MoveLift_FeedbackMessage msg_;
};

class Init_MoveLift_FeedbackMessage_goal_id
{
public:
  Init_MoveLift_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveLift_FeedbackMessage_feedback goal_id(::lift_interfaces::action::MoveLift_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MoveLift_FeedbackMessage_feedback(msg_);
  }

private:
  ::lift_interfaces::action::MoveLift_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::lift_interfaces::action::MoveLift_FeedbackMessage>()
{
  return lift_interfaces::action::builder::Init_MoveLift_FeedbackMessage_goal_id();
}

}  // namespace lift_interfaces

#endif  // LIFT_INTERFACES__ACTION__DETAIL__MOVE_LIFT__BUILDER_HPP_
