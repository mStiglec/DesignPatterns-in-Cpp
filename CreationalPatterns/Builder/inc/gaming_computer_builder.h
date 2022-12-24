#ifndef GAMING_COMPUTER_BUILDER_H
#define GAMING_COMPUTER_BUILDER_H

#include <memory>

#include "computer.h"
#include "computer_builder.h"

class GamingComputerBuilder : public ComputerBuilder,
							  public std::enable_shared_from_this<GamingComputerBuilder>{
	private:
		std::shared_ptr<Computer> computer;
	public:
		GamingComputerBuilder();

		std::shared_ptr<ComputerBuilder> setType() override;
		std::shared_ptr<ComputerBuilder> setRAMSize() override;
		std::shared_ptr<ComputerBuilder> setCPUCores() override;
		std::shared_ptr<ComputerBuilder> setGPUMemorySize() override;
		std::shared_ptr<ComputerBuilder> setMonitorSize() override;

		std::shared_ptr<Computer> getComputer() override;
};

#endif