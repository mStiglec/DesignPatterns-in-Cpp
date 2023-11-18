#ifndef MEMORY_CARD_H
#define MEMORY_CARD_H

#include <vector>
#include <string>
#include <memory>

#include "Game.h"

// CARETAKER
class MemoryCard {
  private:
  	std::shared_ptr<Game> game;
  	std::vector<std::shared_ptr<Game::GameSavePoint>> savePoints;

  public:
  	MemoryCard(std::shared_ptr<Game> game);

  	void saveGame(std::string savePointName);
  	void restartGame(std::string savePointName);
		void deleteSavePoint(std::string savePointName);
  	void listSavePoints();
};

#endif // MEMORY_CARD_H