#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {
  public:
    Player() = default;
    void placeBlock(int x, int y, int z, std::string material);
};

#endif  // PLAYER_H
