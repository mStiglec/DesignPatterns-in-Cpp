#ifndef BLOCK_H
#define BLOCK_H

#include <memory>
#include <string>
#include <vector>

#define MINECRAFT_BLOCK_WIDTH_CM 150;
#define MINECRAFT_BLOCK_HEIGHT_CM 150;

// INTRISTIC state - shared by many building blocks

class BlockIntristicData {
  private:
    BlockIntristicData(std::string material);

    int width = MINECRAFT_BLOCK_WIDTH_CM;
    int height = MINECRAFT_BLOCK_HEIGHT_CM;
    std::string material;
    static std::vector<std::shared_ptr<BlockIntristicData>> blockIntristicData;

  public:
    BlockIntristicData() = delete;

    static std::shared_ptr<BlockIntristicData> getBlockIntristicData(std::string material);
    void placeBlock(int x, int y, int z);
};

#endif  // BLOCK_H
