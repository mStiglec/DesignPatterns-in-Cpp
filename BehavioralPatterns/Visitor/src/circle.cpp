#include "../inc/circle.h"

#include "../inc/visitor.h"

Circle::Circle(float radius)
{
  this->radius = radius;
}

float Circle::accept(Visitor* visitor)
{
  return visitor->visit(this);
}

float Circle::getRadius()
{
  return radius;
}