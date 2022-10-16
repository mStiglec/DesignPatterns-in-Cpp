#ifndef COMPUTER_H
#define COMPUTER_H

#include <string>

class Computer{
	private:
		std::string type;
		int RAMSize = 2;
		int numOfCPUCores = 1;
		int GPUMemorySize = 2;
		double monitorSize = 0.0;

	public:
		Computer() = default;
		
		void setType(const std::string type);
		void setRAMSize(const int RAMSize);
		void setCPUCores(const int CPUCores);
		void setGPUMemorySize(const int GPUMemorySize);
		void setMonitorSize(const double monitorSize);

		std::string getType() const;
		int getRAMSize() const;
		int getCPUCores() const;
		int getGPUMemorySize() const;
		double getMonitorSize() const;		
};

#endif