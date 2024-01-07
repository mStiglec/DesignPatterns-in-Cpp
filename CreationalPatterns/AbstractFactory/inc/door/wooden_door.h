#ifndef WOODEN_DOOR_H
#define WOODEN_DOOR_H

#include "door.h"

class WoodenDoor : public Door {
  public:
    WoodenDoor(double _height, double _width);

    void open() override;
    void close() override;
};

#endif