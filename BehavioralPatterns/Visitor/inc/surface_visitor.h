#ifndef SURFACE_VISITOR_H
#define SURFACE_VISITOR_H

#include "visitor.h"

class SurfaceVisitor : public Visitor {
  public:
    SurfaceVisitor(){};
    virtual ~SurfaceVisitor(){};
    float visit(Triangle* triangle) override;
    float visit(Square* square) override;
    float visit(Circle* circle) override;
};

#endif  // SURFACE_VISITOR_H