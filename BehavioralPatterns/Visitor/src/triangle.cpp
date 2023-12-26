#include "../inc/triangle.h"

#include "../inc/visitor.h"

Triangle::Triangle(float base, float height)
{
  this->base = base;
  this->height = height;
}

float Triangle::accept(Visitor* visitor)
{
  return visitor->visit(this);
}

float Triangle::getBase()
{
  return this->base;
}

float Triangle::getHeight()
{
  return this->height;
}