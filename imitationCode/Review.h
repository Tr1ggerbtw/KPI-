#pragma once
#include <string>
#include <cstdint>
struct Review 
{
  int user_id;
  int course_id;
  std::uint8_t rating;
  std::string comment;
};

