#include <iostream>
#include "ground_asset.h"

GroundAsset::GroundAsset(std::string _type, double _surface, std::string _color):
	type(_type),surface(_surface),color(_color){}

GroundAsset::GroundAsset(GroundAsset* groundAsset):
	type(groundAsset->type),
	surface(groundAsset->surface),
	color(groundAsset->color){}

GameAsset* GroundAsset::clone(){
	return new GroundAsset(this);
}

void GroundAsset::printAsset(){
	std::cout<<"Type: "<<type<<std::endl;
	std::cout<<"Surface: "<<surface<<std::endl;
	std::cout<<"Color: "<<color<<std::endl<<std::endl;
}