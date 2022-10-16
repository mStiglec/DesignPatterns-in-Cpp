#ifndef GAME_ASSET_H
#define GAME_ASSET_H

#include <string>

class GameAsset{
	private:
		std::string type;
		double surface;
		std::string color;

	public:
		GameAsset() = default;
		GameAsset(GameAsset* gameAsset);
		virtual ~GameAsset(){};

		virtual GameAsset* clone() = 0;
		virtual void printAsset() = 0;
};


#endif