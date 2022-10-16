#ifndef BUILDER_H
#define BUILDER_H

#include "computer.h"

class ComputerBuilder{
	public:
		virtual ~ComputerBuilder(){}

		virtual ComputerBuilder* setType() = 0;
		virtual ComputerBuilder* setRAMSize() = 0;
		virtual ComputerBuilder* setCPUCores() = 0;
		virtual ComputerBuilder* setMonitorSize() = 0;
		virtual ComputerBuilder* setGPUMemorySize() = 0;
		virtual Computer* getComputer() = 0;
};

#endif