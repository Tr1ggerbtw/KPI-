#pragma once

#include <string>
#include <cstdint>
#include <optional> 
struct Enrollment
{
  int enrollment_id;
  int course_id;
  int user_id;
  std::string enrollment_date;
  std::uint8_t progress;

  std::optional<std::string> completed_date;
};
