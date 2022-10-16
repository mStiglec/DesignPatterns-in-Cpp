#ifndef WORKSTATION_COMPUTER_BUILDER_H
#define WORKSTATION_COMPUTER_BUILDER_H

class WorkstationComputerBuilder : public ComputerBuilder{
	private:
		Computer* computer;
	public:
		WorkstationComputerBuilder(){computer = new Computer();}

		ComputerBuilder* setType() override;
		ComputerBuilder* setRAMSize() override;
		ComputerBuilder* setCPUCores() override;
		ComputerBuilder* setGPUMemorySize() override;
		ComputerBuilder* setMonitorSize() override;

		void reset();
		Computer* getComputer() override;
};

#endif