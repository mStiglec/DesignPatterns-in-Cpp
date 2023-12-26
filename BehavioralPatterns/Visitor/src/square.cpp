#include "../inc/square.h"

#include "../inc/visitor.h"

Square::Square(float side)
{
  this->side = side;
}

float Square::accept(Visitor* visitor)
{
  return visitor->visit(this);
}

float Square::getSide()
{
  return side;
}