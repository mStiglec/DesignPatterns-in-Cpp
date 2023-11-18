#include <iostream>

#include "../inc/MemoryCard.h"

MemoryCard::MemoryCard(std::shared_ptr<Game> game){
	this->game = game;
};

void MemoryCard::saveGame(std::string savePointName){
  savePoints.push_back(game->save(savePointName));
}

void MemoryCard::restartGame(std::string savePointName){
  for(auto gameSavePoint : savePoints){
    if(gameSavePoint->getSavePointName() == savePointName){
      game->restart(gameSavePoint);
      return;
	  }
  }
  std::cout << "Restart game failed: game savepoint not found" << std::endl;
}

void MemoryCard::deleteSavePoint(std::string savePointName){
  unsigned int i = 0;
  for(std::shared_ptr<Game::GameSavePoint> gameSavePoint : savePoints){
    if(gameSavePoint->getSavePointName() == savePointName){
		  savePoints.erase(savePoints.begin() + i);
	  }
	  i++;
  }
  std::cout << "delete savepoint failed: game savepoint not found" << std::endl;
}

void MemoryCard::listSavePoints(){
  for(std::shared_ptr<Game::GameSavePoint> gameSavePoint : savePoints){
	  std::cout << gameSavePoint->getSavePointName() << " : "
			        << gameSavePoint->getSavePointTime();
  }
  std::cout << std::endl;
}