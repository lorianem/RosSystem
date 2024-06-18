// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from beckhoff_interfaces:action/Move.idl
// generated code does not contain a copyright notice

#ifndef BECKHOFF_INTERFACES__ACTION__DETAIL__MOVE__BUILDER_HPP_
#define BECKHOFF_INTERFACES__ACTION__DETAIL__MOVE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "beckhoff_interfaces/action/detail/move__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace beckhoff_interfaces
{

namespace action
{

namespace builder
{

class Init_Move_Goal_velocity
{
public:
  explicit Init_Move_Goal_velocity(::beckhoff_interfaces::action::Move_Goal & msg)
  : msg_(msg)
  {}
  ::beckhoff_interfaces::action::Move_Goal velocity(::beckhoff_interfaces::action::Move_Goal::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::beckhoff_interfaces::action::Move_Goal msg_;
};

class Init_Move_Goal_r
{
public:
  explicit Init_Move_Goal_r(::beckhoff_interfaces::action::Move_Goal & msg)
  : msg_(msg)
  {}
  Init_Move_Goal_velocity r(::beckhoff_interfaces::action::Move_Goal::_r_type arg)
  {
    msg_.r = std::move(arg);
    return Init_Move_Goal_velocity(msg_);
  }

private:
  ::beckhoff_interfaces::action::Move_Goal msg_;
};

class Init_Move_Goal_y
{
public:
  explicit Init_Move_Goal_y(::beckhoff_interfaces::action::Move_Goal & msg)
  : msg_(msg)
  {}
  Init_Move_Goal_r y(::beckhoff_interfaces::action::Move_Goal::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Move_Goal_r(msg_);
  }

private:
  ::beckhoff_interfaces::action::Move_Goal msg_;
};

class Init_Move_Goal_x
{
public:
  Init_Move_Goal_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_Goal_y x(::beckhoff_interfaces::action::Move_Goal::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Move_Goal_y(msg_);
  }

private:
  ::beckhoff_interfaces::action::Move_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::beckhoff_interfaces::action::Move_Goal>()
{
  return beckhoff_interfaces::action::builder::Init_Move_Goal_x();
}

}  // namespace beckhoff_interfaces


namespace beckhoff_interfaces
{

namespace action
{

namespace builder
{

class Init_Move_Result_pos_r
{
public:
  explicit Init_Move_Result_pos_r(::beckhoff_interfaces::action::Move_Result & msg)
  : msg_(msg)
  {}
  ::beckhoff_interfaces::action::Move_Result pos_r(::beckhoff_interfaces::action::Move_Result::_pos_r_type arg)
  {
    msg_.pos_r = std::move(arg);
    return std::move(msg_);
  }

private:
  ::beckhoff_interfaces::action::Move_Result msg_;
};

class Init_Move_Result_pos_y
{
public:
  explicit Init_Move_Result_pos_y(::beckhoff_interfaces::action::Move_Result & msg)
  : msg_(msg)
  {}
  Init_Move_Result_pos_r pos_y(::beckhoff_interfaces::action::Move_Result::_pos_y_type arg)
  {
    msg_.pos_y = std::move(arg);
    return Init_Move_Result_pos_r(msg_);
  }

private:
  ::beckhoff_interfaces::action::Move_Result msg_;
};

class Init_Move_Result_pos_x
{
public:
  Init_Move_Result_pos_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_Result_pos_y pos_x(::beckhoff_interfaces::action::Move_Result::_pos_x_type arg)
  {
    msg_.pos_x = std::move(arg);
    return Init_Move_Result_pos_y(msg_);
  }

private:
  ::beckhoff_interfaces::action::Move_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::beckhoff_interfaces::action::Move_Result>()
{
  return beckhoff_interfaces::action::builder::Init_Move_Result_pos_x();
}

}  // namespace beckhoff_interfaces


namespace beckhoff_interfaces
{

namespace action
{

namespace builder
{

class Init_Move_Feedback_val_r
{
public:
  explicit Init_Move_Feedback_val_r(::beckhoff_interfaces::action::Move_Feedback & msg)
  : msg_(msg)
  {}
  ::beckhoff_interfaces::action::Move_Feedback val_r(::beckhoff_interfaces::action::Move_Feedback::_val_r_type arg)
  {
    msg_.val_r = std::move(arg);
    return std::move(msg_);
  }

private:
  ::beckhoff_interfaces::action::Move_Feedback msg_;
};

class Init_Move_Feedback_val_y
{
public:
  explicit Init_Move_Feedback_val_y(::beckhoff_interfaces::action::Move_Feedback & msg)
  : msg_(msg)
  {}
  Init_Move_Feedback_val_r val_y(::beckhoff_interfaces::action::Move_Feedback::_val_y_type arg)
  {
    msg_.val_y = std::move(arg);
    return Init_Move_Feedback_val_r(msg_);
  }

private:
  ::beckhoff_interfaces::action::Move_Feedback msg_;
};

class Init_Move_Feedback_val_x
{
public:
  explicit Init_Move_Feedback_val_x(::beckhoff_interfaces::action::Move_Feedback & msg)
  : msg_(msg)
  {}
  Init_Move_Feedback_val_y val_x(::beckhoff_interfaces::action::Move_Feedback::_val_x_type arg)
  {
    msg_.val_x = std::move(arg);
    return Init_Move_Feedback_val_y(msg_);
  }

private:
  ::beckhoff_interfaces::action::Move_Feedback msg_;
};

class Init_Move_Feedback_err
{
public:
  Init_Move_Feedback_err()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_Feedback_val_x err(::beckhoff_interfaces::action::Move_Feedback::_err_type arg)
  {
    msg_.err = std::move(arg);
    return Init_Move_Feedback_val_x(msg_);
  }

private:
  ::beckhoff_interfaces::action::Move_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::beckhoff_interfaces::action::Move_Feedback>()
{
  return beckhoff_interfaces::action::builder::Init_Move_Feedback_err();
}

}  // namespace beckhoff_interfaces


namespace beckhoff_interfaces
{

namespace action
{

namespace builder
{

class Init_Move_SendGoal_Request_goal
{
public:
  explicit Init_Move_SendGoal_Request_goal(::beckhoff_interfaces::action::Move_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::beckhoff_interfaces::action::Move_SendGoal_Request goal(::beckhoff_interfaces::action::Move_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::beckhoff_interfaces::action::Move_SendGoal_Request msg_;
};

class Init_Move_SendGoal_Request_goal_id
{
public:
  Init_Move_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_SendGoal_Request_goal goal_id(::beckhoff_interfaces::action::Move_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Move_SendGoal_Request_goal(msg_);
  }

private:
  ::beckhoff_interfaces::action::Move_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::beckhoff_interfaces::action::Move_SendGoal_Request>()
{
  return beckhoff_interfaces::action::builder::Init_Move_SendGoal_Request_goal_id();
}

}  // namespace beckhoff_interfaces


namespace beckhoff_interfaces
{

namespace action
{

namespace builder
{

class Init_Move_SendGoal_Response_stamp
{
public:
  explicit Init_Move_SendGoal_Response_stamp(::beckhoff_interfaces::action::Move_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::beckhoff_interfaces::action::Move_SendGoal_Response stamp(::beckhoff_interfaces::action::Move_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::beckhoff_interfaces::action::Move_SendGoal_Response msg_;
};

class Init_Move_SendGoal_Response_accepted
{
public:
  Init_Move_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_SendGoal_Response_stamp accepted(::beckhoff_interfaces::action::Move_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Move_SendGoal_Response_stamp(msg_);
  }

private:
  ::beckhoff_interfaces::action::Move_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::beckhoff_interfaces::action::Move_SendGoal_Response>()
{
  return beckhoff_interfaces::action::builder::Init_Move_SendGoal_Response_accepted();
}

}  // namespace beckhoff_interfaces


namespace beckhoff_interfaces
{

namespace action
{

namespace builder
{

class Init_Move_GetResult_Request_goal_id
{
public:
  Init_Move_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::beckhoff_interfaces::action::Move_GetResult_Request goal_id(::beckhoff_interfaces::action::Move_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::beckhoff_interfaces::action::Move_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::beckhoff_interfaces::action::Move_GetResult_Request>()
{
  return beckhoff_interfaces::action::builder::Init_Move_GetResult_Request_goal_id();
}

}  // namespace beckhoff_interfaces


namespace beckhoff_interfaces
{

namespace action
{

namespace builder
{

class Init_Move_GetResult_Response_result
{
public:
  explicit Init_Move_GetResult_Response_result(::beckhoff_interfaces::action::Move_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::beckhoff_interfaces::action::Move_GetResult_Response result(::beckhoff_interfaces::action::Move_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::beckhoff_interfaces::action::Move_GetResult_Response msg_;
};

class Init_Move_GetResult_Response_status
{
public:
  Init_Move_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_GetResult_Response_result status(::beckhoff_interfaces::action::Move_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Move_GetResult_Response_result(msg_);
  }

private:
  ::beckhoff_interfaces::action::Move_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::beckhoff_interfaces::action::Move_GetResult_Response>()
{
  return beckhoff_interfaces::action::builder::Init_Move_GetResult_Response_status();
}

}  // namespace beckhoff_interfaces


namespace beckhoff_interfaces
{

namespace action
{

namespace builder
{

class Init_Move_FeedbackMessage_feedback
{
public:
  explicit Init_Move_FeedbackMessage_feedback(::beckhoff_interfaces::action::Move_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::beckhoff_interfaces::action::Move_FeedbackMessage feedback(::beckhoff_interfaces::action::Move_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::beckhoff_interfaces::action::Move_FeedbackMessage msg_;
};

class Init_Move_FeedbackMessage_goal_id
{
public:
  Init_Move_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_FeedbackMessage_feedback goal_id(::beckhoff_interfaces::action::Move_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Move_FeedbackMessage_feedback(msg_);
  }

private:
  ::beckhoff_interfaces::action::Move_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::beckhoff_interfaces::action::Move_FeedbackMessage>()
{
  return beckhoff_interfaces::action::builder::Init_Move_FeedbackMessage_goal_id();
}

}  // namespace beckhoff_interfaces

#endif  // BECKHOFF_INTERFACES__ACTION__DETAIL__MOVE__BUILDER_HPP_
