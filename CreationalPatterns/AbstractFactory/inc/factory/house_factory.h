#ifndef HOUSE_FACTORY_H
#define HOUSE_FACTORY_H

#include <vector>
#include <memory>

#include "../door/door.h"
#include "../roof/roof.h"
#include "../window/window.h"

class HouseFactory{
	public:
		virtual std::shared_ptr<Door> buildDoor(double _height, double _width) = 0;
		virtual std::vector<std::shared_ptr<Window>> buildWindows(double _height, double _width) = 0;
		virtual std::shared_ptr<Roof> buildRoof(double _height) = 0;
};

#endif