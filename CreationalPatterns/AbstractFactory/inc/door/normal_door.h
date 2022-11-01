#ifndef NORMAL_DOOR_H
#define NORMAL_DOOR_H

#include "door.h"

class NormalDoor : public Door{
	public:
		NormalDoor(double height, double width);

		void open() override;
		void close() override;
};

#endif