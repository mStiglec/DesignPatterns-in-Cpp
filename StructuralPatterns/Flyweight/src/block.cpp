#include "../inc/block.h"

Block::Block(int _x, int _y, int _z, std::shared_ptr<BlockIntristicData> _blockIntristicData)
    : x(_x), y(_y), z(_z), blockIntristicData(_blockIntristicData)
{}

void Block::placeBlock()
{
  blockIntristicData->placeBlock(this->x, this->y, this->z);
}