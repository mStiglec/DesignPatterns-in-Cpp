#include <utility>

#include "computer_builder.h"
#include "workstation_computer_builder.h"

void WorkstationComputerBuilder::reset(){
	computer = new Computer();
}

ComputerBuilder* WorkstationComputerBuilder::setType(){
	computer->setType("Workstation");
	return this;
}

ComputerBuilder* WorkstationComputerBuilder::setRAMSize(){
	computer->setRAMSize(32);
	return this;
}

ComputerBuilder* WorkstationComputerBuilder::setCPUCores(){
	computer->setCPUCores(64);
	return this;
}

ComputerBuilder* WorkstationComputerBuilder::setGPUMemorySize(){
	computer->setGPUMemorySize(16);
	return this;
}

ComputerBuilder* WorkstationComputerBuilder::setMonitorSize(){
	computer->setMonitorSize(17.2);
	return this;
}

Computer* WorkstationComputerBuilder::getComputer(){
	Computer* newComputer = std::move(computer);
	this->reset();
	return newComputer;
}