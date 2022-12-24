#ifndef GROUND_ASSET_H
#define GROUND_ASSET_H

#include "game_asset.h" 

class GroundAsset : public GameAsset,
					public std::enable_shared_from_this<GroundAsset>
{
	public:
		GroundAsset(std::string type, double surface, std::string color);
		GroundAsset(std::shared_ptr<GroundAsset> groundAsset);
		~GroundAsset(){};
		
		std::shared_ptr<GameAsset> clone() override;
		void printAsset() override;

		bool operator==(const GameAsset& rhs) const override;
		bool operator!=(const GameAsset& rhs) const override;
};

#endif