#include "director.h"
#include "computer.h"
#include "computer_builder.h"
#include <iostream>

Director::Director(ComputerBuilder* _computerBuilder):computerBuilder(_computerBuilder){}

void Director::changeBuilder(ComputerBuilder* _computerBuilder){
	computerBuilder = _computerBuilder;
}

Computer* Director::makeComputer(){
	computerBuilder->setType()
		   ->setRAMSize()
		   ->setCPUCores()
		   ->setGPUMemorySize()
		   ->setMonitorSize();
	return computerBuilder->getComputer();
}

Computer* Director::makeComputerWithoutMonitor(){
	computerBuilder->setType()
		   ->setRAMSize()
		   ->setCPUCores()
		   ->setGPUMemorySize();
	return computerBuilder->getComputer();
}