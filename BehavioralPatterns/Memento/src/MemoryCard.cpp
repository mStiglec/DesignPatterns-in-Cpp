#include "../inc/MemoryCard.h"

#include <iostream>

MemoryCard::MemoryCard(std::shared_ptr<Game> game)
{
  this->game = game;
};

void MemoryCard::saveGame(std::string savePointName)
{
  gameSavePoints.push_back(game->save(savePointName));
}

void MemoryCard::restartGame(std::string savePointName)
{
  for (auto gameSavePoint : gameSavePoints)
  {
    if (gameSavePoint->getSavePointName() == savePointName)
    {
      game->restart(gameSavePoint);
      return;
    }
  }
  std::cout << "Restart game failed: game savepoint not found" << std::endl;
}

void MemoryCard::deleteSavePoint(std::string savePointName)
{
  for (unsigned int i = 0; i < gameSavePoints.size(); i++)
  {
    if (gameSavePoints[i]->getSavePointName() == savePointName)
    {
      gameSavePoints.erase(gameSavePoints.begin() + i);
      return;
    }
  }
  std::cout << "delete savepoint failed: game savepoint not found" << std::endl;
}

void MemoryCard::listSavePoints()
{
  for (std::shared_ptr<Game::GameSavePoint> gameSavePoint : gameSavePoints)
  {
    std::cout << gameSavePoint->getSavePointName() << " : "
              << gameSavePoint->getSavePointTime();
  }
  std::cout << std::endl;
}