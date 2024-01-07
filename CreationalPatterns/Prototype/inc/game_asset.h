#ifndef GAME_ASSET_H
#define GAME_ASSET_H

#include <memory>
#include <string>

class GameAsset {
  protected:
    std::string type;
    double surface;
    std::string color;

  public:
    GameAsset() = default;
    GameAsset(std::string type, double surface, std::string color);
    virtual ~GameAsset(){};

    virtual std::shared_ptr<GameAsset> clone() = 0;
    virtual void printAsset() = 0;

    virtual bool operator==(const GameAsset& rhs) const = 0;
    virtual bool operator!=(const GameAsset& rhs) const = 0;
};

#endif