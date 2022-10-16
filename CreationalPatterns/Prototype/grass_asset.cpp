#include <iostream>
#include "grass_asset.h"

GrassAsset::GrassAsset(std::string _type, double _surface, std::string _color):
	type(_type), surface(_surface), color(_color){}

GrassAsset::GrassAsset(GrassAsset* grassAsset):
	type(grassAsset->type),
	surface(grassAsset->surface),
	color(grassAsset->color){}

GameAsset* GrassAsset::clone(){
	return new GrassAsset(this);
}

void GrassAsset::printAsset(){
	std::cout<<"Type: "<<type<<std::endl;
	std::cout<<"Surface: "<<surface<<std::endl;
	std::cout<<"Color: "<<color<<std::endl<<std::endl;
}