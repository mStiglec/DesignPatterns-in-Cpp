#include <iostream>
#include <vector>
#include "game_asset.h"
#include "water_asset.h"
#include "ground_asset.h"
#include "grass_asset.h"

int main(int argc, char** argv){
	std::vector<GameAsset*> forest;
	std::vector<GameAsset*> grandCanyon;
	std::vector<GameAsset*> estuary;

	// Create some game assets
	WaterAsset* oceanWater = new WaterAsset("ocean",12.0,"blue");
	WaterAsset* riverWater = new WaterAsset("river",14.0,"river blue");

	GroundAsset* sandAsset = new GroundAsset("sand",10.0,"brown");
	GroundAsset* rockAsset = new GroundAsset("rock",6.0,"grey");

	GrassAsset* meadowGrass = new GrassAsset("meadow",14.0,"meadow green");

	//Create forest (contains water and grass assets)
	for(unsigned int i=0;i<3;i++){
		forest.push_back(riverWater->clone());
		//forest.push_back(meadowGrass->clone());
	}

	//Create grandCanyon (contains only ground assets)
	for(unsigned int i=0;i<4;i++){
		grandCanyon.push_back(rockAsset->clone());
	}
	for(unsigned int i=0;i<3;i++){
		grandCanyon.push_back(sandAsset->clone());
	}

	//Create river estuary (contains river, sand and ocean assets)
	for(unsigned int i=0;i<5;i++){
		estuary.push_back(riverWater->clone());
		estuary.push_back(oceanWater->clone());
	}
	for(unsigned int i=0;i<6;i++){
		estuary.push_back(sandAsset->clone());
		estuary.push_back(meadowGrass->clone());
	}

	std::cout<<"FOREST TILES:"<<std::endl;
	for(GameAsset* asset : forest){
		asset->printAsset();
	}

	/*std::cout<<"GRAND CANYON TILES:"<<std::endl;
	for(GameAsset* asset : grandCanyon){
		asset->printAsset();
	}*/

	/*std::cout<<"ESTUARY TILES:"<<std::endl;
	for(GameAsset* asset : estuary){
		asset->printAsset();
	}*/

	//If we need another forest in our game we just need to
	std::vector<GameAsset*> anotherForest;
	for(GameAsset* asset : forest){
		anotherForest.push_back(asset->clone());
	}

	std::cout<<"ANOTHER FOREST TILES:"<<std::endl;
	for(GameAsset* asset : anotherForest){
		asset->printAsset();
	}

	delete oceanWater;	
	delete riverWater;
	delete sandAsset;
	delete rockAsset;
	delete meadowGrass;

}




