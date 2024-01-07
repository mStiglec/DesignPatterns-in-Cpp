#ifndef GRASS_ASSET_H
#define GRASS_ASSET_H

#include <memory>
#include <string>

#include "game_asset.h"

class GrassAsset : public GameAsset, public std::enable_shared_from_this<GrassAsset> {
  public:
    GrassAsset(std::string type, double surface, std::string color);
    GrassAsset(std::shared_ptr<GrassAsset> grassAsset);
    ~GrassAsset() = default;

    std::shared_ptr<GameAsset> clone() override;
    void printAsset() override;

    bool operator==(const GameAsset& rhs) const override;
    bool operator!=(const GameAsset& rhs) const override;
};

#endif