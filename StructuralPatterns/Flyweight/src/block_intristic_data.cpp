#include "../inc/block_intristic_data.h"

#include <iostream>

std::vector<std::shared_ptr<BlockIntristicData>> BlockIntristicData::blockIntristicData;

BlockIntristicData::BlockIntristicData(std::string _material) : material(_material) {}

std::shared_ptr<BlockIntristicData> BlockIntristicData::getBlockIntristicData(std::string material)
{
  for (auto& data : blockIntristicData)
  {
    if (data->material == material)
    {
      std::cout << "reuse block ";
      return data;
    }
  }

  // can not use make_shared because constructor is private
  std::shared_ptr<BlockIntristicData> newIntristicData(new BlockIntristicData(material));
  blockIntristicData.push_back(newIntristicData);
  return newIntristicData;
}

void BlockIntristicData::placeBlock(int x, int y, int z)
{
  std::cout << "place " << this->material << " block to position " << x << ", " << y << ", " << z
            << std::endl;
}
