#pragma once
#include <string>
enum UserRole {
  Student,
  Instructor,
  Admin
};

struct User
{
  int user_id;
  std::string username;
  std::string email;
  std::string password;
  UserRole role;
};
