#ifndef WORKSTATION_COMPUTER_BUILDER_H
#define WORKSTATION_COMPUTER_BUILDER_H

#include "computer_builder.h"
#include "computer.h"

class WorkstationComputerBuilder : public ComputerBuilder,
								   public std::enable_shared_from_this<WorkstationComputerBuilder>{
	private:
		std::shared_ptr<Computer> computer;
	public:
		WorkstationComputerBuilder();

		std::shared_ptr<ComputerBuilder> setType() override;
		std::shared_ptr<ComputerBuilder> setRAMSize() override;
		std::shared_ptr<ComputerBuilder> setCPUCores() override;
		std::shared_ptr<ComputerBuilder> setGPUMemorySize() override;
		std::shared_ptr<ComputerBuilder> setMonitorSize() override;

		std::shared_ptr<Computer> getComputer() override;
};

#endif