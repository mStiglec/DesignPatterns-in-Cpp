#ifndef CHICKEN_H
#define CHICKEN_H

#include <string>

#include "../enum/dressing.h"
#include "../enum/salad.h"
#include "meal.h"

class Chicken : public Meal {
  private:
    Salad salad;
    Dressing dressing;

  public:
    Chicken() = delete;
    Chicken(Salad _salad, Dressing dressing);

    void serve() const override;
};

#endif