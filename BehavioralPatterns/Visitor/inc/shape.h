#ifndef SHAPE_H
#define SHAPE_H

class Visitor;

class Shape {
  public:
    virtual float accept(Visitor* visitor) = 0;
};

#endif  // SHAPE_H