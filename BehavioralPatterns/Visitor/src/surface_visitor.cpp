#include "../inc/surface_visitor.h"

#include <cmath>

float SurfaceVisitor::visit(Triangle* triangle)
{
  return 0.5 * triangle->getBase() * triangle->getHeight();
}

float SurfaceVisitor::visit(Square* square)
{
  return pow(square->getSide(), 2);
}

float SurfaceVisitor::visit(Circle* circle)
{
  return pow(circle->getRadius(), 2) * M_PI;
}