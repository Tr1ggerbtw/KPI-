#pragma once
#include <string>

struct Certificate {
    int certificate_id;
    int enrollment_id;
    std::string issue_data;
    std::string unique_url;
};
