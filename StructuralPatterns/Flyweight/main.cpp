#include <iostream>
#include <memory>

#include "inc/player.h"

int main(){
	std::shared_ptr<Player> player = std::make_shared<Player>();
	player->placeBlock(100,200,50,"ice");
	// other ice blocks are reused
	player->placeBlock(100,300,50,"ice");
	player->placeBlock(100,400,50,"ice");
	player->placeBlock(100,500,50,"ice");
	player->placeBlock(100,600,50,"ice");

	player->placeBlock(100,200,50,"grass");
	// other grass blocks are reused
	player->placeBlock(100,300,50,"grass");
	player->placeBlock(100,400,50,"grass");
	player->placeBlock(100,500,50,"grass");
	player->placeBlock(100,600,50,"grass");

}
