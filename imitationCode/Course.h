#pragma once

#include <string>
#include <vector>

#include "Lesson.h"
#include "Review.h"

struct Course
{
  int course_id;
  int instructor_id;
  std::string title;
  std::string description;

  std::vector<Lesson> lessons;
  std::vector<Review> reviews;
};
