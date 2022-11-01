#ifndef SNOW_DOOR_H
#define SNOW_DOOR_H

#include "door.h"

class SnowDoor : public Door{
public:
	SnowDoor(double _height, double _width);

	void open() override;
	void close() override;
};

#endif