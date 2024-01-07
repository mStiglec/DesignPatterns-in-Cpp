#include "../inc/ground_asset.h"

#include <iostream>

GroundAsset::GroundAsset(std::string _type, double _surface, std::string _color)
    : GameAsset(_type, _surface, _color)
{}

GroundAsset::GroundAsset(std::shared_ptr<GroundAsset> groundAsset)
    : GameAsset(groundAsset->type, groundAsset->surface, groundAsset->color)
{}

std::shared_ptr<GameAsset> GroundAsset::clone()
{
  return std::make_shared<GroundAsset>(shared_from_this());
}

void GroundAsset::printAsset()
{
  std::cout << "Type: " << type << std::endl;
  std::cout << "Surface: " << surface << std::endl;
  std::cout << "Color: " << color << std::endl << std::endl;
}

bool GroundAsset::operator==(const GameAsset& rhs) const
{
  const GroundAsset* groundAsset = dynamic_cast<const GroundAsset*>(&rhs);
  return this->type == groundAsset->type && this->surface == groundAsset->surface &&
         this->color == groundAsset->color;
}

bool GroundAsset::operator!=(const GameAsset& rhs) const
{
  return !(*this == rhs);
}