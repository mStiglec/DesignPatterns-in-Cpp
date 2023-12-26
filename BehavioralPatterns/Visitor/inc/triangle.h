#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "shape.h"

class Triangle : public Shape {
  private:
    float base;
    float height;

  public:
    Triangle() = delete;
    Triangle(float base, float height);
    virtual ~Triangle(){};
    float accept(Visitor* visitor) override;
    float getBase();
    float getHeight();
};

#endif  // TRIANGLE_H