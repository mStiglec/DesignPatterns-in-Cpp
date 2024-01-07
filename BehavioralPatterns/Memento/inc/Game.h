#ifndef GAME_H
#define GAME_H

#include <memory>
#include <string>

#include "PlayerStats.h"

// ORIGINATOR
class Game {
  private:
    std::string name;
    unsigned int level;
    PlayerStats playerStats;

  public:
    Game() = default;
    Game(std::string name, std::shared_ptr<PlayerStats> playerStats);

    void playGameForOneHour();

    // MEMENTO
    class GameSavePoint {
      private:
        char* time;
        unsigned int level;
        PlayerStats playerStats;
        std::string savePointName;

        void saveTime();

      public:
        GameSavePoint(Game& game, std::string savePointName);

        std::string getSavePointName();
        std::string getSavePointTime();
        void reset(Game& game);
    };

    std::shared_ptr<GameSavePoint> save(std::string savePointName);
    void restart(std::shared_ptr<GameSavePoint> savePoint);
    void displayPlayerStats();
};

#endif  // GAME_H