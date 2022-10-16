#ifndef GAMING_COMPUTER_BUILDER_H
#define GAMING_COMPUTER_BUILDER_H

#include "computer.h"
#include "computer_builder.h"

class GamingComputerBuilder : public ComputerBuilder{
	private:
		Computer* computer;
	public:
		GamingComputerBuilder();

		ComputerBuilder* setType() override;
		ComputerBuilder* setRAMSize() override;
		ComputerBuilder* setCPUCores() override;
		ComputerBuilder* setGPUMemorySize() override;
		ComputerBuilder* setMonitorSize() override;

		Computer* getComputer() override;
};

#endif