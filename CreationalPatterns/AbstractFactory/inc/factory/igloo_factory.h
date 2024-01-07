#ifndef IGLOO_FACTORY_H
#define IGLOO_FACTORY_H

#include "house_factory.h"

class IglooFactory : public HouseFactory {
  public:
    IglooFactory() = default;

    std::shared_ptr<Door> buildDoor(double _height, double _width) override;
    std::vector<std::shared_ptr<Window>> buildWindows(double _height, double _width) override;
    std::shared_ptr<Roof> buildRoof(double _height) override;
};

#endif