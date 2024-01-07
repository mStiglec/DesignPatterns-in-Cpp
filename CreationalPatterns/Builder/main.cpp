#include <iostream>

#include "inc/computer.h"
#include "inc/director.h"
#include "inc/gaming_computer_builder.h"
#include "inc/workstation_computer_builder.h"

void printComputer(std::shared_ptr<Computer> computer)
{
  std::cout << computer->getType() << " computer:" << std::endl;
  std::cout << "RAM - " << computer->getRAMSize() << " GB" << std::endl;
  std::cout << "CPU cores - " << computer->getCPUCores() << std::endl;
  std::cout << "GPU Memory size - " << computer->getGPUMemorySize() << " GB" << std::endl;
  if (computer->getMonitorSize() == 0.0)
  {
    std::cout << "Monitor size - not included in build" << std::endl;
  }
  else
  {
    std::cout << "Monitor Size - " << computer->getMonitorSize() << " inch" << std::endl;
  }
  std::cout << std::endl;
}

int main()
{
  std::shared_ptr<GamingComputerBuilder> gamingComputerBuilder =
      std::make_shared<GamingComputerBuilder>();
  std::shared_ptr<WorkstationComputerBuilder> workstationComputerBuilder =
      std::make_shared<WorkstationComputerBuilder>();

  std::shared_ptr<Director> director = std::make_shared<Director>(gamingComputerBuilder);

  char hasMonitor;
  std::cout << "Include monitor in gaming build: [y/n]" << std::endl;
  std::cin >> hasMonitor;

  std::shared_ptr<Computer> gamingComputer =
      director->makeComputer(hasMonitor == 'y' ? true : false);
  printComputer(gamingComputer);

  std::cout << "Include monitor in workstation build: [y/n]" << std::endl;
  std::cin >> hasMonitor;

  director->changeBuilder(workstationComputerBuilder);

  std::shared_ptr<Computer> workstationComputer =
      director->makeComputer(hasMonitor == 'y' ? true : false);
  printComputer(workstationComputer);
}