#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"

class Circle : public Shape {
  private:
    float radius;

  public:
    Circle() = delete;
    Circle(float radius);
    virtual ~Circle(){};
    float accept(Visitor* visitor) override;
    float getRadius();
};

#endif  // CIRCLE_H