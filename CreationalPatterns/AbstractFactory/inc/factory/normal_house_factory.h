#ifndef NORMAL_HOUSE_FACTORY_H
#define NORMAL_HOUSE_FACTORY_H

#include <vector>
#include <memory>

#include "house_factory.h"

class NormalHouseFactory : public HouseFactory{
public:
	NormalHouseFactory() = default;

	std::shared_ptr<Door> buildDoor(double _height, double _width) override;
	std::vector<std::shared_ptr<Window>> buildWindows(double _height, double _width) override;
	std::shared_ptr<Roof> buildRoof(double _height) override;
};

#endif