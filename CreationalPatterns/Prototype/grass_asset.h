#ifndef GRASS_ASSET_H
#define GRASS_ASSET_H

#include <string>
#include "game_asset.h" 

class GrassAsset : public GameAsset{
	private:
		std::string type;
		double surface;
		std::string color;
	public:
		GrassAsset(std::string type, double surface, std::string color);
		GrassAsset(GrassAsset* grassAsset);
		~GrassAsset() = default;

		GameAsset* clone() override;
		void printAsset() override;
};

#endif