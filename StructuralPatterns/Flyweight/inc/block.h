#ifndef BLOCK_POSITION_H
#define BLOCK_POSITION_H

#include <string>
#include <memory>

#include "block_intristic_data.h"

//EXTRINSTIC state - different for every building block

class Block{
	private:
		int x;
		int y;
		int z;
		std::shared_ptr<BlockIntristicData> blockIntristicData;
	public:
		Block(int x, int y, int z, std::shared_ptr<BlockIntristicData> blockIntristicData);
		void placeBlock();
};


#endif // BLOCK_POSITION_H
