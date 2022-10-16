#ifndef GROUND_ASSET_H
#define GROUND_ASSET_H

#include <string>
#include "game_asset.h" 

class GroundAsset : public GameAsset{
	private:
		std::string type;
		double surface;
		std::string color;
	public:
		GroundAsset(std::string type, double surface, std::string color);
		GroundAsset(GroundAsset* groundAsset);
		~GroundAsset(){};
		
		GameAsset* clone() override;
		void printAsset() override;
};

#endif