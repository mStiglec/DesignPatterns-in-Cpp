#ifndef DIRECTOR_H
#define DIRECTOR_H

#include "computer.h"
#include "computer_builder.h"

class Director{
	private:
		ComputerBuilder* computerBuilder;
	public:
		Director() = delete;
		Director(ComputerBuilder* _computerBuilder);
		void changeBuilder(ComputerBuilder* computerBuilder);
		Computer* makeComputer();
		Computer* makeComputerWithoutMonitor();
};


#endif