#include <iostream>

#include "inc/circle.h"
#include "inc/square.h"
#include "inc/surface_visitor.h"
#include "inc/triangle.h"
#include "inc/visitor.h"

int main(void)
{
  Visitor* surfaceVisitor = new SurfaceVisitor();

  float radius = 2.0;
  Circle* circle = new Circle(radius);

  float height = 3.0;
  float base = 2.0;
  Triangle* triangle = new Triangle(base, height);

  float side = 4.0;
  Square* square = new Square(side);

  std::cout << circle->accept(surfaceVisitor) << std::endl;
  std::cout << triangle->accept(surfaceVisitor) << std::endl;
  std::cout << square->accept(surfaceVisitor) << std::endl;

  delete circle;
  delete triangle;
  delete square;
  delete surfaceVisitor;
}

// ------  EXAMPLE USING C++17 STD::VISIT ------
/*#include <cmath>
#include <variant>
#include <vector>

#include "inc/circle.h"
#include "inc/square.h"
#include "inc/triangle.h"

class SurfaceVisitor {
  public:
    float operator()(Circle* circle)
    {
      return pow(circle->getRadius(), 2) * M_PI;
    }
    float operator()(Square* square)
    {
      return pow(square->getSide(), 2);
    }
    float operator()(Triangle* triangle)
    {
      return 0.5 * triangle->getBase() * triangle->getHeight();
      ;
    }
};

using ShapeVariant = std::variant<Triangle*, Circle*, Square*>;

int main(void)
{
  float radius = 2.0;
  float height = 3.0;
  float base = 2.0;
  float side = 4.0;
  std::vector<ShapeVariant> shapes = {new Circle(radius), new Square(side),
                                      new Triangle(base, height)};

  for (auto shape : shapes)
  {
    std::cout << std::visit(SurfaceVisitor{}, shape) << std::endl;
  }
}*/