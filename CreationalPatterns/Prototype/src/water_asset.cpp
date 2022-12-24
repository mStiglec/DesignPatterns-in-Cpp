#include <iostream>

#include "../inc/water_asset.h"

WaterAsset::WaterAsset(std::string _type, double _surface, std::string _color)
	:GameAsset(_type,_surface,_color){}

WaterAsset::WaterAsset(std::shared_ptr<WaterAsset> waterAsset)
	:GameAsset(waterAsset->type, waterAsset->surface, waterAsset->color){}

std::shared_ptr<GameAsset> WaterAsset::clone(){
	return std::make_shared<WaterAsset>(shared_from_this());
}

void WaterAsset::printAsset(){
	std::cout<<"Type: "<<type<<std::endl;
	std::cout<<"Surface: "<<surface<<std::endl;
	std::cout<<"Color: "<<color<<std::endl<<std::endl;
}

bool WaterAsset::operator==(const GameAsset& rhs) const {
	const WaterAsset* waterAsset = dynamic_cast<const WaterAsset*>(&rhs);
	return this->type == waterAsset->type && this->surface == waterAsset->surface &&
		   this->color == waterAsset->color;
}

bool WaterAsset::operator!=(const GameAsset& rhs) const {
	return !(*this == rhs);
}