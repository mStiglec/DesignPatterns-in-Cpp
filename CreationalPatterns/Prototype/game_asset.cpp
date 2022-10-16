#include <string>
#include "game_asset.h"

GameAsset::GameAsset(GameAsset* gameAsset):
	type(gameAsset->color),
	surface(gameAsset->surface),
	color(gameAsset->color){};


