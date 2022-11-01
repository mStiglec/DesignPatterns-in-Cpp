#ifndef TREEHOUSE_FACTORY_H
#define TREEHOUSE_FACTORY_H

#include <vector>
#include <memory>

#include "house_factory.h"

class TreehouseFactory : public HouseFactory{
public:
	TreehouseFactory() = default;

	std::shared_ptr<Door> buildDoor(double _height, double _width) override;
	std::vector<std::shared_ptr<Window>> buildWindows(double _height, double _width) override;
	std::shared_ptr<Roof> buildRoof(double _height) override;
};

#endif