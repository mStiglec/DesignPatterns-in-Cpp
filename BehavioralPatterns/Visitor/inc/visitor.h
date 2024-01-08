#ifndef VISITOR_H
#define VISITOR_H

#include "circle.h"
#include "square.h"
#include "triangle.h"

class Visitor {
  public:
    virtual ~Visitor(){};

    virtual float visit(Triangle* triangle) = 0;
    virtual float visit(Square* square) = 0;
    virtual float visit(Circle* circle) = 0;
};

#endif  // VISITOR_H