#include <iostream>

#include "../inc/grass_asset.h"

GrassAsset::GrassAsset(std::string _type, double _surface, std::string _color)
	:GameAsset(_type,_surface,_color){}

GrassAsset::GrassAsset(std::shared_ptr<GrassAsset> grassAsset)
	:GameAsset(grassAsset->type, grassAsset->surface, grassAsset->color){}

std::shared_ptr<GameAsset> GrassAsset::clone(){
	return std::make_shared<GrassAsset>(shared_from_this());
}

void GrassAsset::printAsset(){
	std::cout<<"Type: "<<type<<std::endl;
	std::cout<<"Surface: "<<surface<<std::endl;
	std::cout<<"Color: "<<color<<std::endl<<std::endl;
}

bool GrassAsset::operator==(const GameAsset& rhs) const {
	const GrassAsset* grassAsset = dynamic_cast<const GrassAsset*>(&rhs);
	return this->type == grassAsset->type && this->surface == grassAsset->surface &&
		   this->color == grassAsset->color;
}

bool GrassAsset::operator!=(const GameAsset& rhs) const {
	return !(*this == rhs);
}