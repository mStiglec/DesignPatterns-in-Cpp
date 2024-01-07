#ifndef HAMBURGER_H
#define HAMBURGER_H

#include "../enum/size.h"
#include "meal.h"

class Hamburger : public Meal {
  private:
    Size size;

  public:
    Hamburger() = delete;
    Hamburger(Size _size);

    void serve() const override;
};

#endif