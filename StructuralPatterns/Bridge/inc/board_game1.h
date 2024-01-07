#ifndef BOARD_GAME_1_H
#define BOARD_GAME_1_H

#include <string>

#include "board_game.h"
#include "extension.h"

class BoardGame1 : public BoardGame {
  private:
    unsigned int numOfPlayers;
    std::string rules;

  public:
    BoardGame1() = delete;
    BoardGame1(unsigned int numOfPlayers, std::string rules);

    void setBoard() override;
    void cleanBoard() override;
    void play() override;
    void setExtension(std::shared_ptr<Extension> extension) override;
};

#endif