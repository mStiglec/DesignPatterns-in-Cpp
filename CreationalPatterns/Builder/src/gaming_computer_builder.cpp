#include <utility>
#include <memory>

#include "../inc/computer_builder.h"
#include "../inc/gaming_computer_builder.h"

GamingComputerBuilder::GamingComputerBuilder(){
	computer = std::make_shared<Computer>();
}

std::shared_ptr<ComputerBuilder> GamingComputerBuilder::setType(){
	computer->setType("Gaming");
	return shared_from_this();
}

std::shared_ptr<ComputerBuilder> GamingComputerBuilder::setRAMSize(){
	computer->setRAMSize(16);
	return shared_from_this();
}

std::shared_ptr<ComputerBuilder> GamingComputerBuilder::setCPUCores(){
	computer->setCPUCores(8);
	return shared_from_this();
}

std::shared_ptr<ComputerBuilder> GamingComputerBuilder::setGPUMemorySize(){
	computer->setGPUMemorySize(12);
	return shared_from_this();
}

std::shared_ptr<ComputerBuilder> GamingComputerBuilder::setMonitorSize(){
	computer->setMonitorSize(17.2);
	return shared_from_this();
}

std::shared_ptr<Computer> GamingComputerBuilder::getComputer(){
	std::shared_ptr<Computer> newComputer = std::move(computer);
	computer = std::make_shared<Computer>();
	return newComputer;
}