#include "../inc/player.h"

#include "../inc/block.h"
#include "../inc/block_intristic_data.h"

void Player::placeBlock(int x, int y, int z, std::string material)
{
  // get pointer to INTRISTIC state data of object
  // if material is not known we get new object, and if it is known we get pointer
  // to already existing object (new operator is not called)
  std::shared_ptr<BlockIntristicData> blockIntristicData =
      BlockIntristicData::getBlockIntristicData(material);
  std::shared_ptr<Block> block = std::make_shared<Block>(x, y, z, blockIntristicData);
  block->placeBlock();
}