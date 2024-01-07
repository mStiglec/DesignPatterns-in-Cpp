#ifndef PIZZA_H
#define PIZZA_H

#include <string>

#include "../enum/size.h"
#include "meal.h"

class Pizza : public Meal {
  private:
    std::string type;
    Size size;

  public:
    Pizza() = delete;
    Pizza(std::string _type, Size _size);

    void serve() const override;
};

#endif