#ifndef WATER_ASSET_H
#define WATER_ASSET_H

#include <string>
#include "game_asset.h" 

class WaterAsset : public GameAsset{
	private:
		std::string type;
		double surface;
		std::string color;
	public:
		WaterAsset(std::string type, double surface, std::string color);
		WaterAsset(WaterAsset* waterAsset);
		~WaterAsset(){};
		
		GameAsset* clone() override;
		void printAsset() override;
};

#endif