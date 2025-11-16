// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ur_msgs:srv/SetAnalogOutput.idl
// generated code does not contain a copyright notice

#include "ur_msgs/srv/detail/set_analog_output__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ur_msgs
const rosidl_type_hash_t *
ur_msgs__srv__SetAnalogOutput__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd9, 0xc9, 0xe3, 0xa1, 0xcd, 0x35, 0xf5, 0xd5,
      0x15, 0x6d, 0x27, 0x16, 0x4b, 0x77, 0x88, 0xd9,
      0x70, 0x6c, 0x27, 0xd3, 0x08, 0xcf, 0x6a, 0xda,
      0x48, 0x4b, 0x83, 0xd1, 0x6d, 0x5d, 0x39, 0x0e,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ur_msgs
const rosidl_type_hash_t *
ur_msgs__srv__SetAnalogOutput_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x4e, 0x72, 0x48, 0x9b, 0x8f, 0x23, 0x12, 0xd0,
      0x4e, 0x52, 0xe6, 0x7b, 0xa8, 0x0b, 0x4b, 0x9c,
      0xcb, 0xe5, 0x60, 0x4e, 0xf9, 0x8a, 0x75, 0xc4,
      0xdc, 0x44, 0x47, 0x57, 0x34, 0x18, 0xca, 0x5a,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ur_msgs
const rosidl_type_hash_t *
ur_msgs__srv__SetAnalogOutput_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x50, 0x64, 0x7c, 0x0e, 0x6d, 0x84, 0x58, 0x54,
      0x9a, 0x64, 0x4f, 0x65, 0x7d, 0xa9, 0x30, 0x27,
      0x59, 0x81, 0x20, 0x99, 0x09, 0x07, 0x48, 0x7f,
      0x78, 0x03, 0x78, 0x9f, 0xa7, 0x18, 0xfb, 0xe0,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ur_msgs
const rosidl_type_hash_t *
ur_msgs__srv__SetAnalogOutput_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf1, 0x12, 0xf0, 0xcc, 0xab, 0xee, 0xfa, 0xa8,
      0xa6, 0x8d, 0xaf, 0x6c, 0xf6, 0x18, 0xef, 0x56,
      0x61, 0x77, 0x5e, 0x47, 0xe0, 0x85, 0x4b, 0x5b,
      0x09, 0xf4, 0x89, 0x16, 0x95, 0x38, 0x4c, 0xfc,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "ur_msgs/msg/detail/analog__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
static const rosidl_type_hash_t ur_msgs__msg__Analog__EXPECTED_HASH = {1, {
    0xca, 0xe3, 0x5b, 0xd4, 0xfe, 0xde, 0xab, 0x37,
    0x46, 0xfa, 0x5b, 0xa4, 0x9f, 0xbb, 0xdc, 0x8d,
    0x7f, 0xa2, 0x5f, 0x84, 0xe9, 0x55, 0x26, 0xc5,
    0x40, 0x3d, 0x50, 0x7a, 0x26, 0xb2, 0xa0, 0x85,
  }};
#endif

static char ur_msgs__srv__SetAnalogOutput__TYPE_NAME[] = "ur_msgs/srv/SetAnalogOutput";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char ur_msgs__msg__Analog__TYPE_NAME[] = "ur_msgs/msg/Analog";
static char ur_msgs__srv__SetAnalogOutput_Event__TYPE_NAME[] = "ur_msgs/srv/SetAnalogOutput_Event";
static char ur_msgs__srv__SetAnalogOutput_Request__TYPE_NAME[] = "ur_msgs/srv/SetAnalogOutput_Request";
static char ur_msgs__srv__SetAnalogOutput_Response__TYPE_NAME[] = "ur_msgs/srv/SetAnalogOutput_Response";

// Define type names, field names, and default values
static char ur_msgs__srv__SetAnalogOutput__FIELD_NAME__request_message[] = "request_message";
static char ur_msgs__srv__SetAnalogOutput__FIELD_NAME__response_message[] = "response_message";
static char ur_msgs__srv__SetAnalogOutput__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field ur_msgs__srv__SetAnalogOutput__FIELDS[] = {
  {
    {ur_msgs__srv__SetAnalogOutput__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ur_msgs__srv__SetAnalogOutput_Request__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
  {
    {ur_msgs__srv__SetAnalogOutput__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ur_msgs__srv__SetAnalogOutput_Response__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
  {
    {ur_msgs__srv__SetAnalogOutput__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ur_msgs__srv__SetAnalogOutput_Event__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ur_msgs__srv__SetAnalogOutput__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {ur_msgs__msg__Analog__TYPE_NAME, 18, 18},
    {NULL, 0, 0},
  },
  {
    {ur_msgs__srv__SetAnalogOutput_Event__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {ur_msgs__srv__SetAnalogOutput_Request__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {ur_msgs__srv__SetAnalogOutput_Response__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ur_msgs__srv__SetAnalogOutput__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ur_msgs__srv__SetAnalogOutput__TYPE_NAME, 27, 27},
      {ur_msgs__srv__SetAnalogOutput__FIELDS, 3, 3},
    },
    {ur_msgs__srv__SetAnalogOutput__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ur_msgs__msg__Analog__EXPECTED_HASH, ur_msgs__msg__Analog__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = ur_msgs__msg__Analog__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = ur_msgs__srv__SetAnalogOutput_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = ur_msgs__srv__SetAnalogOutput_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[5].fields = ur_msgs__srv__SetAnalogOutput_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ur_msgs__srv__SetAnalogOutput_Request__FIELD_NAME__data[] = "data";

static rosidl_runtime_c__type_description__Field ur_msgs__srv__SetAnalogOutput_Request__FIELDS[] = {
  {
    {ur_msgs__srv__SetAnalogOutput_Request__FIELD_NAME__data, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ur_msgs__msg__Analog__TYPE_NAME, 18, 18},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ur_msgs__srv__SetAnalogOutput_Request__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {ur_msgs__msg__Analog__TYPE_NAME, 18, 18},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ur_msgs__srv__SetAnalogOutput_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ur_msgs__srv__SetAnalogOutput_Request__TYPE_NAME, 35, 35},
      {ur_msgs__srv__SetAnalogOutput_Request__FIELDS, 1, 1},
    },
    {ur_msgs__srv__SetAnalogOutput_Request__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&ur_msgs__msg__Analog__EXPECTED_HASH, ur_msgs__msg__Analog__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = ur_msgs__msg__Analog__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ur_msgs__srv__SetAnalogOutput_Response__FIELD_NAME__success[] = "success";

static rosidl_runtime_c__type_description__Field ur_msgs__srv__SetAnalogOutput_Response__FIELDS[] = {
  {
    {ur_msgs__srv__SetAnalogOutput_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ur_msgs__srv__SetAnalogOutput_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ur_msgs__srv__SetAnalogOutput_Response__TYPE_NAME, 36, 36},
      {ur_msgs__srv__SetAnalogOutput_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ur_msgs__srv__SetAnalogOutput_Event__FIELD_NAME__info[] = "info";
static char ur_msgs__srv__SetAnalogOutput_Event__FIELD_NAME__request[] = "request";
static char ur_msgs__srv__SetAnalogOutput_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field ur_msgs__srv__SetAnalogOutput_Event__FIELDS[] = {
  {
    {ur_msgs__srv__SetAnalogOutput_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {ur_msgs__srv__SetAnalogOutput_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {ur_msgs__srv__SetAnalogOutput_Request__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
  {
    {ur_msgs__srv__SetAnalogOutput_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {ur_msgs__srv__SetAnalogOutput_Response__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ur_msgs__srv__SetAnalogOutput_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {ur_msgs__msg__Analog__TYPE_NAME, 18, 18},
    {NULL, 0, 0},
  },
  {
    {ur_msgs__srv__SetAnalogOutput_Request__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {ur_msgs__srv__SetAnalogOutput_Response__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ur_msgs__srv__SetAnalogOutput_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ur_msgs__srv__SetAnalogOutput_Event__TYPE_NAME, 33, 33},
      {ur_msgs__srv__SetAnalogOutput_Event__FIELDS, 3, 3},
    },
    {ur_msgs__srv__SetAnalogOutput_Event__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ur_msgs__msg__Analog__EXPECTED_HASH, ur_msgs__msg__Analog__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = ur_msgs__msg__Analog__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = ur_msgs__srv__SetAnalogOutput_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = ur_msgs__srv__SetAnalogOutput_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "Analog data\n"
  "---\n"
  "bool success";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ur_msgs__srv__SetAnalogOutput__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ur_msgs__srv__SetAnalogOutput__TYPE_NAME, 27, 27},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 29, 29},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ur_msgs__srv__SetAnalogOutput_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ur_msgs__srv__SetAnalogOutput_Request__TYPE_NAME, 35, 35},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ur_msgs__srv__SetAnalogOutput_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ur_msgs__srv__SetAnalogOutput_Response__TYPE_NAME, 36, 36},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ur_msgs__srv__SetAnalogOutput_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ur_msgs__srv__SetAnalogOutput_Event__TYPE_NAME, 33, 33},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ur_msgs__srv__SetAnalogOutput__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ur_msgs__srv__SetAnalogOutput__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *ur_msgs__msg__Analog__get_individual_type_description_source(NULL);
    sources[4] = *ur_msgs__srv__SetAnalogOutput_Event__get_individual_type_description_source(NULL);
    sources[5] = *ur_msgs__srv__SetAnalogOutput_Request__get_individual_type_description_source(NULL);
    sources[6] = *ur_msgs__srv__SetAnalogOutput_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ur_msgs__srv__SetAnalogOutput_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ur_msgs__srv__SetAnalogOutput_Request__get_individual_type_description_source(NULL),
    sources[1] = *ur_msgs__msg__Analog__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ur_msgs__srv__SetAnalogOutput_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ur_msgs__srv__SetAnalogOutput_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ur_msgs__srv__SetAnalogOutput_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ur_msgs__srv__SetAnalogOutput_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *ur_msgs__msg__Analog__get_individual_type_description_source(NULL);
    sources[4] = *ur_msgs__srv__SetAnalogOutput_Request__get_individual_type_description_source(NULL);
    sources[5] = *ur_msgs__srv__SetAnalogOutput_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
