#ifndef WOODEN_ROOF_H
#define WOODEN_ROOF_H

#include "roof.h"

class WoodenRoof : public Roof {
  public:
    WoodenRoof(double height);

    void protectFromRain() override;
};

#endif