#include <iostream>
#include <memory>
#include <string>

#include "inc/board_game.h"
#include "inc/board_game1.h"
#include "inc/board_game2.h"
#include "inc/extension.h"
#include "inc/forest_extension.h"
#include "inc/river_extension.h"

#define EXTENSION_PLAYER_NUM 2
#define BOARD_GAME_PLAYER_NUM 4

int main()
{
  std::shared_ptr<Extension> forestExtension =
      std::make_shared<ForestExtension>(EXTENSION_PLAYER_NUM);

  std::shared_ptr<Extension> riverExtension =
      std::make_shared<RiverExtension>(EXTENSION_PLAYER_NUM);

  std::string BoardGameRules1 = "Rules for Board 1";
  std::string BoardGameRules2 = "Rules for Board 2";

  // four players set board to play game
  std::shared_ptr<BoardGame> gameBoard =
      std::make_shared<BoardGame1>(BOARD_GAME_PLAYER_NUM, BoardGameRules1);
  gameBoard->setBoard();

  // two friends come over, you set extension so everyone can play
  gameBoard->setExtension(forestExtension);
  gameBoard->play();

  // you get bored with forest extension and attach river extension
  // extension dynamically changed
  gameBoard->setExtension(riverExtension);
  gameBoard->play();

  gameBoard->cleanBoard();
}