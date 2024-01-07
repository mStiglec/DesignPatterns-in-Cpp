#include <iostream>
#include <memory>
#include <string>

#include "inc/Game.h"
#include "inc/MemoryCard.h"
#include "inc/PlayerStats.h"

int main()
{
  int playerStartingHealth = 100;
  unsigned int playerStartingArmor = 10;
  unsigned int playerStartingAttack = 5;
  std::string playerName = "Link";

  std::shared_ptr<PlayerStats> playerStats = std::make_shared<PlayerStats>(
      playerName, playerStartingHealth, playerStartingArmor, playerStartingAttack);

  std::shared_ptr<Game> game = std::make_shared<Game>("Zelda", playerStats);

  std::shared_ptr<MemoryCard> memoryCard = std::make_shared<MemoryCard>(game);

  memoryCard->saveGame("Starting savepoint");

  game->playGameForOneHour();
  memoryCard->saveGame("Finished 1.1 Eagle chapter");

  game->playGameForOneHour();
  memoryCard->saveGame("Finished 1.2 Moon chapter");

  game->playGameForOneHour();
  memoryCard->saveGame("Finished 1.3 Manji chapter");

  memoryCard->listSavePoints();

  std::cout << "Player stats after restoring starting savepoint" << std::endl;
  memoryCard->restartGame("Starting savepoint");
  game->displayPlayerStats();

  std::cout << "Player stats after restoring Moon chapter" << std::endl;
  memoryCard->restartGame("Finished 1.2 Moon chapter");
  game->displayPlayerStats();
}