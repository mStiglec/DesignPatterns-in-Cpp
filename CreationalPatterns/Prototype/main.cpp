#include <iostream>
#include <vector>

#include "inc/game_asset.h"
#include "inc/water_asset.h"
#include "inc/ground_asset.h"
#include "inc/grass_asset.h"

int main(){
	std::vector<std::shared_ptr<GameAsset>> forest;
	std::vector<std::shared_ptr<GameAsset>> grandCanyon;
	std::vector<std::shared_ptr<GameAsset>> estuary;

	// Create some game assets
	std::shared_ptr<WaterAsset> oceanWater = std::make_shared<WaterAsset>("ocean",12.0,"blue");
	std::shared_ptr<WaterAsset> riverWater = std::make_shared<WaterAsset>("river",14.0,"river blue");	

	std::shared_ptr<GroundAsset> sandAsset = std::make_shared<GroundAsset>("sand",10.0,"brown");	
	std::shared_ptr<GroundAsset> rockAsset = std::make_shared<GroundAsset>("rock",6.0,"grey");	
 
	std::shared_ptr<GrassAsset> meadowGrass = std::make_shared<GrassAsset>("meadow",14.0,"meadow green");

	//Create forest (contains water and grass assets)
	for(unsigned int i=0;i<3;i++){
		forest.push_back(riverWater->clone());
		forest.push_back(meadowGrass->clone());
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
	for(std::shared_ptr<GameAsset> asset : forest){
		asset->printAsset();
	}

	/*std::cout<<"GRAND CANYON TILES:"<<std::endl;
	for(std::shared_ptr<GameAsset> asset : grandCanyon){
		asset->printAsset();
	}

	std::cout<<"ESTUARY TILES:"<<std::endl;
	for(std::shared_ptr<GameAsset> asset : estuary){
		asset->printAsset();
	}*/

	//If we need another forest in our game we can do following
	std::vector<std::shared_ptr<GameAsset>> anotherForest;
	for(std::shared_ptr<GameAsset> asset : forest){
		anotherForest.push_back(asset->clone());
	}

	std::cout<<"ANOTHER FOREST TILES:"<<std::endl;
	for(std::shared_ptr<GameAsset> asset : anotherForest){
		asset->printAsset();
	}

	//Check if original and prototype forests are same
	bool areForestsEqual = true;
	for(unsigned int i=0;i<forest.size();i++){
		if(*forest[i] != *anotherForest[i]){
			areForestsEqual = false;
			break;
		}
	}

	if(areForestsEqual){
		std::cout << "Forests are equal" << std::endl;
	}else{
		std::cout << "error: prototype not equal to original" << std::endl;
		return 1;
	}
}




