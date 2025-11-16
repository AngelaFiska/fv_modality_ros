// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ur_msgs:msg/IOStates.idl
// generated code does not contain a copyright notice
#include "ur_msgs/msg/detail/io_states__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ur_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ur_msgs/msg/detail/io_states__struct.h"
#include "ur_msgs/msg/detail/io_states__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "ur_msgs/msg/detail/analog__functions.h"  // analog_in_states, analog_out_states
#include "ur_msgs/msg/detail/digital__functions.h"  // digital_in_states, digital_out_states, flag_states

// forward declare type support functions

bool cdr_serialize_ur_msgs__msg__Analog(
  const ur_msgs__msg__Analog * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_ur_msgs__msg__Analog(
  eprosima::fastcdr::Cdr & cdr,
  ur_msgs__msg__Analog * ros_message);

size_t get_serialized_size_ur_msgs__msg__Analog(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ur_msgs__msg__Analog(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_ur_msgs__msg__Analog(
  const ur_msgs__msg__Analog * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_ur_msgs__msg__Analog(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_ur_msgs__msg__Analog(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ur_msgs, msg, Analog)();

bool cdr_serialize_ur_msgs__msg__Digital(
  const ur_msgs__msg__Digital * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_ur_msgs__msg__Digital(
  eprosima::fastcdr::Cdr & cdr,
  ur_msgs__msg__Digital * ros_message);

size_t get_serialized_size_ur_msgs__msg__Digital(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ur_msgs__msg__Digital(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_ur_msgs__msg__Digital(
  const ur_msgs__msg__Digital * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_ur_msgs__msg__Digital(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_ur_msgs__msg__Digital(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ur_msgs, msg, Digital)();


using _IOStates__ros_msg_type = ur_msgs__msg__IOStates;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ur_msgs
bool cdr_serialize_ur_msgs__msg__IOStates(
  const ur_msgs__msg__IOStates * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: digital_in_states
  {
    size_t size = ros_message->digital_in_states.size;
    auto array_ptr = ros_message->digital_in_states.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_ur_msgs__msg__Digital(
        &array_ptr[i], cdr);
    }
  }

  // Field name: digital_out_states
  {
    size_t size = ros_message->digital_out_states.size;
    auto array_ptr = ros_message->digital_out_states.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_ur_msgs__msg__Digital(
        &array_ptr[i], cdr);
    }
  }

  // Field name: flag_states
  {
    size_t size = ros_message->flag_states.size;
    auto array_ptr = ros_message->flag_states.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_ur_msgs__msg__Digital(
        &array_ptr[i], cdr);
    }
  }

  // Field name: analog_in_states
  {
    size_t size = ros_message->analog_in_states.size;
    auto array_ptr = ros_message->analog_in_states.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_ur_msgs__msg__Analog(
        &array_ptr[i], cdr);
    }
  }

  // Field name: analog_out_states
  {
    size_t size = ros_message->analog_out_states.size;
    auto array_ptr = ros_message->analog_out_states.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_ur_msgs__msg__Analog(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ur_msgs
bool cdr_deserialize_ur_msgs__msg__IOStates(
  eprosima::fastcdr::Cdr & cdr,
  ur_msgs__msg__IOStates * ros_message)
{
  // Field name: digital_in_states
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->digital_in_states.data) {
      ur_msgs__msg__Digital__Sequence__fini(&ros_message->digital_in_states);
    }
    if (!ur_msgs__msg__Digital__Sequence__init(&ros_message->digital_in_states, size)) {
      fprintf(stderr, "failed to create array for field 'digital_in_states'");
      return false;
    }
    auto array_ptr = ros_message->digital_in_states.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_ur_msgs__msg__Digital(cdr, &array_ptr[i]);
    }
  }

  // Field name: digital_out_states
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->digital_out_states.data) {
      ur_msgs__msg__Digital__Sequence__fini(&ros_message->digital_out_states);
    }
    if (!ur_msgs__msg__Digital__Sequence__init(&ros_message->digital_out_states, size)) {
      fprintf(stderr, "failed to create array for field 'digital_out_states'");
      return false;
    }
    auto array_ptr = ros_message->digital_out_states.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_ur_msgs__msg__Digital(cdr, &array_ptr[i]);
    }
  }

  // Field name: flag_states
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->flag_states.data) {
      ur_msgs__msg__Digital__Sequence__fini(&ros_message->flag_states);
    }
    if (!ur_msgs__msg__Digital__Sequence__init(&ros_message->flag_states, size)) {
      fprintf(stderr, "failed to create array for field 'flag_states'");
      return false;
    }
    auto array_ptr = ros_message->flag_states.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_ur_msgs__msg__Digital(cdr, &array_ptr[i]);
    }
  }

  // Field name: analog_in_states
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->analog_in_states.data) {
      ur_msgs__msg__Analog__Sequence__fini(&ros_message->analog_in_states);
    }
    if (!ur_msgs__msg__Analog__Sequence__init(&ros_message->analog_in_states, size)) {
      fprintf(stderr, "failed to create array for field 'analog_in_states'");
      return false;
    }
    auto array_ptr = ros_message->analog_in_states.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_ur_msgs__msg__Analog(cdr, &array_ptr[i]);
    }
  }

  // Field name: analog_out_states
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->analog_out_states.data) {
      ur_msgs__msg__Analog__Sequence__fini(&ros_message->analog_out_states);
    }
    if (!ur_msgs__msg__Analog__Sequence__init(&ros_message->analog_out_states, size)) {
      fprintf(stderr, "failed to create array for field 'analog_out_states'");
      return false;
    }
    auto array_ptr = ros_message->analog_out_states.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_ur_msgs__msg__Analog(cdr, &array_ptr[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ur_msgs
size_t get_serialized_size_ur_msgs__msg__IOStates(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _IOStates__ros_msg_type * ros_message = static_cast<const _IOStates__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: digital_in_states
  {
    size_t array_size = ros_message->digital_in_states.size;
    auto array_ptr = ros_message->digital_in_states.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_ur_msgs__msg__Digital(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: digital_out_states
  {
    size_t array_size = ros_message->digital_out_states.size;
    auto array_ptr = ros_message->digital_out_states.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_ur_msgs__msg__Digital(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: flag_states
  {
    size_t array_size = ros_message->flag_states.size;
    auto array_ptr = ros_message->flag_states.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_ur_msgs__msg__Digital(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: analog_in_states
  {
    size_t array_size = ros_message->analog_in_states.size;
    auto array_ptr = ros_message->analog_in_states.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_ur_msgs__msg__Analog(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: analog_out_states
  {
    size_t array_size = ros_message->analog_out_states.size;
    auto array_ptr = ros_message->analog_out_states.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_ur_msgs__msg__Analog(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ur_msgs
size_t max_serialized_size_ur_msgs__msg__IOStates(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: digital_in_states
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ur_msgs__msg__Digital(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: digital_out_states
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ur_msgs__msg__Digital(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: flag_states
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ur_msgs__msg__Digital(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: analog_in_states
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ur_msgs__msg__Analog(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: analog_out_states
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ur_msgs__msg__Analog(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ur_msgs__msg__IOStates;
    is_plain =
      (
      offsetof(DataType, analog_out_states) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ur_msgs
bool cdr_serialize_key_ur_msgs__msg__IOStates(
  const ur_msgs__msg__IOStates * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: digital_in_states
  {
    size_t size = ros_message->digital_in_states.size;
    auto array_ptr = ros_message->digital_in_states.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_ur_msgs__msg__Digital(
        &array_ptr[i], cdr);
    }
  }

  // Field name: digital_out_states
  {
    size_t size = ros_message->digital_out_states.size;
    auto array_ptr = ros_message->digital_out_states.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_ur_msgs__msg__Digital(
        &array_ptr[i], cdr);
    }
  }

  // Field name: flag_states
  {
    size_t size = ros_message->flag_states.size;
    auto array_ptr = ros_message->flag_states.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_ur_msgs__msg__Digital(
        &array_ptr[i], cdr);
    }
  }

  // Field name: analog_in_states
  {
    size_t size = ros_message->analog_in_states.size;
    auto array_ptr = ros_message->analog_in_states.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_ur_msgs__msg__Analog(
        &array_ptr[i], cdr);
    }
  }

  // Field name: analog_out_states
  {
    size_t size = ros_message->analog_out_states.size;
    auto array_ptr = ros_message->analog_out_states.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_ur_msgs__msg__Analog(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ur_msgs
size_t get_serialized_size_key_ur_msgs__msg__IOStates(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _IOStates__ros_msg_type * ros_message = static_cast<const _IOStates__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: digital_in_states
  {
    size_t array_size = ros_message->digital_in_states.size;
    auto array_ptr = ros_message->digital_in_states.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_ur_msgs__msg__Digital(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: digital_out_states
  {
    size_t array_size = ros_message->digital_out_states.size;
    auto array_ptr = ros_message->digital_out_states.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_ur_msgs__msg__Digital(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: flag_states
  {
    size_t array_size = ros_message->flag_states.size;
    auto array_ptr = ros_message->flag_states.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_ur_msgs__msg__Digital(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: analog_in_states
  {
    size_t array_size = ros_message->analog_in_states.size;
    auto array_ptr = ros_message->analog_in_states.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_ur_msgs__msg__Analog(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: analog_out_states
  {
    size_t array_size = ros_message->analog_out_states.size;
    auto array_ptr = ros_message->analog_out_states.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_ur_msgs__msg__Analog(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ur_msgs
size_t max_serialized_size_key_ur_msgs__msg__IOStates(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: digital_in_states
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_ur_msgs__msg__Digital(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: digital_out_states
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_ur_msgs__msg__Digital(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: flag_states
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_ur_msgs__msg__Digital(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: analog_in_states
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_ur_msgs__msg__Analog(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: analog_out_states
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_ur_msgs__msg__Analog(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ur_msgs__msg__IOStates;
    is_plain =
      (
      offsetof(DataType, analog_out_states) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _IOStates__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const ur_msgs__msg__IOStates * ros_message = static_cast<const ur_msgs__msg__IOStates *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_ur_msgs__msg__IOStates(ros_message, cdr);
}

static bool _IOStates__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  ur_msgs__msg__IOStates * ros_message = static_cast<ur_msgs__msg__IOStates *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_ur_msgs__msg__IOStates(cdr, ros_message);
}

static uint32_t _IOStates__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ur_msgs__msg__IOStates(
      untyped_ros_message, 0));
}

static size_t _IOStates__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ur_msgs__msg__IOStates(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_IOStates = {
  "ur_msgs::msg",
  "IOStates",
  _IOStates__cdr_serialize,
  _IOStates__cdr_deserialize,
  _IOStates__get_serialized_size,
  _IOStates__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _IOStates__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_IOStates,
  get_message_typesupport_handle_function,
  &ur_msgs__msg__IOStates__get_type_hash,
  &ur_msgs__msg__IOStates__get_type_description,
  &ur_msgs__msg__IOStates__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ur_msgs, msg, IOStates)() {
  return &_IOStates__type_support;
}

#if defined(__cplusplus)
}
#endif
