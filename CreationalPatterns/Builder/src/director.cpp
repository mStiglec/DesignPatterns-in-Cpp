#include <iostream>
#include <memory>

#include "../inc/director.h"
#include "../inc/computer.h"
#include "../inc/computer_builder.h"

Director::Director(std::shared_ptr<ComputerBuilder> _computerBuilder):computerBuilder(_computerBuilder){}

void Director::changeBuilder(std::shared_ptr<ComputerBuilder> _computerBuilder){
	computerBuilder = _computerBuilder;
}

std::shared_ptr<Computer> Director::makeComputer(bool hasMonitor){
	computerBuilder->setType()
		   ->setRAMSize()
		   ->setCPUCores()
		   ->setGPUMemorySize();

	if(hasMonitor){
		std::cout<<computerBuilder.use_count()<<std::endl;
	}

	return computerBuilder->getComputer();
}