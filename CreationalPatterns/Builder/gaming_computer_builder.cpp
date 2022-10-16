#include <utility>

#include "computer_builder.h"
#include "gaming_computer_builder.h"

GamingComputerBuilder::GamingComputerBuilder(){
	computer = new Computer();
}

ComputerBuilder* GamingComputerBuilder::setType(){
	computer->setType("Gaming");
	return this;
}

ComputerBuilder* GamingComputerBuilder::setRAMSize(){
	computer->setRAMSize(16);
	return this;
}

ComputerBuilder* GamingComputerBuilder::setCPUCores(){
	computer->setCPUCores(8);
	return this;
}

ComputerBuilder* GamingComputerBuilder::setGPUMemorySize(){
	computer->setGPUMemorySize(12);
	return this;
}

ComputerBuilder* GamingComputerBuilder::setMonitorSize(){
	computer->setMonitorSize(17.2);
	return this;
}

Computer* GamingComputerBuilder::getComputer(){
	Computer* newComputer = std::move(computer);
	computer = new Computer();
	return newComputer;
}