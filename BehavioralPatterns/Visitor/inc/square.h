#ifndef SQUARE_H
#define SQUARE_H

#include "shape.h"

class Square : public Shape {
  private:
    float side;

  public:
    Square() = delete;
    Square(float side);
    virtual ~Square(){};
    float accept(Visitor* visitor) override;
    float getSide();
};

#endif  // SQUARE_H