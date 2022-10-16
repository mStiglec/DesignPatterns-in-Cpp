#include <iostream>
#include "computer.h"
#include "gaming_computer_builder.h"
#include "workstation_computer_builder.h"
#include "director.h"

void printComputer(Computer* computer){
	std::cout<<computer->getType()<<" computer:"<<std::endl;
	std::cout<<"RAM - "<<computer->getRAMSize()<<" GB"<<std::endl;
	std::cout<<"CPU cores - "<<computer->getCPUCores()<<std::endl;
	std::cout<<"GPU Memory size - "<<computer->getGPUMemorySize()<<" GB"<<std::endl;
	if(computer->getMonitorSize() == 0.0){
		std::cout<<"Monitor size - not included in build"<<std::endl;
	}else{
		std::cout<<"Monitor Size - "<<computer->getMonitorSize()<<" inch"<<std::endl;
	}
	std::cout<<std::endl;
}

int main(int argc, char** argv){
	GamingComputerBuilder* gamingComputerBuilder = new GamingComputerBuilder();
	WorkstationComputerBuilder* workstationComputerBuilder = new WorkstationComputerBuilder();

	Director* director = new Director(gamingComputerBuilder);

	Computer* gamingComputer = director->makeComputer();
	printComputer(gamingComputer);

	director->changeBuilder(workstationComputerBuilder);

	Computer* workstationComputer = director->makeComputer();
	printComputer(workstationComputer);

	Computer* computerWithoutMonitor = director->makeComputerWithoutMonitor();
	printComputer(computerWithoutMonitor);

	delete gamingComputerBuilder;
	delete workstationComputerBuilder;
	delete director;
	delete gamingComputer;
	delete workstationComputer;
	delete computerWithoutMonitor;
}