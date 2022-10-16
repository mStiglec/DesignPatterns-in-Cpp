#include <string>
#include <iostream>
#include "water_asset.h"

WaterAsset::WaterAsset(std::string _type, double _surface, std::string _color):
	type(_type),surface(_surface),color(_color){}

WaterAsset::WaterAsset(WaterAsset* waterAsset):
	type(waterAsset->type),
	surface(waterAsset->surface),
	color(waterAsset->color){}

GameAsset* WaterAsset::clone(){
	return new WaterAsset(this);
}

void WaterAsset::printAsset(){
	std::cout<<"Type: "<<type<<std::endl;
	std::cout<<"Surface: "<<surface<<std::endl;
	std::cout<<"Color: "<<color<<std::endl<<std::endl;
}