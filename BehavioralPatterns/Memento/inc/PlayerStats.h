#ifndef PLAYER_STATS_H
#define PLAYER_STATS_H

#include <string>

class PlayerStats {
 private:
  std::string name;
  int health;
  unsigned int armor;
  unsigned int attack;

 public:
  PlayerStats();
  PlayerStats(std::string name,
              int health,
              unsigned int armor,
              unsigned int attack);

  void displayPlayerStats();
  void modifyPlayerStats();
};

#endif  // PLAYER_STATS_H