#ifndef WATER_ASSET_H
#define WATER_ASSET_H

#include "game_asset.h"

class WaterAsset : public GameAsset, public std::enable_shared_from_this<WaterAsset> {
  public:
    WaterAsset(std::string type, double surface, std::string color);
    WaterAsset(std::shared_ptr<WaterAsset> waterAsset);
    ~WaterAsset(){};

    std::shared_ptr<GameAsset> clone() override;
    void printAsset() override;

    bool operator==(const GameAsset& rhs) const override;
    bool operator!=(const GameAsset& rhs) const override;
};

#endif