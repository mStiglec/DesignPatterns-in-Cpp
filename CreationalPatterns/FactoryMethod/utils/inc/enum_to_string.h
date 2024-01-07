#ifndef ENUM_TO_STRING_H
#define ENUM_TO_STRING_H

#include <string>

#include "../../enum/dressing.h"
#include "../../enum/salad.h"
#include "../../enum/size.h"

namespace utils
{
std::string getDressing(enum Dressing dressing);
std::string getSalad(enum Salad salad);
std::string getSize(enum Size size);
}  // namespace utils

#endif