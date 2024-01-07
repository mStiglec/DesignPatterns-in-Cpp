#include "../inc/workstation_computer_builder.h"

#include <memory>
#include <utility>

#include "../inc/computer_builder.h"

WorkstationComputerBuilder::WorkstationComputerBuilder()
{
  computer = std::make_shared<Computer>();
}

std::shared_ptr<ComputerBuilder> WorkstationComputerBuilder::setType()
{
  computer->setType("Workstation");
  return shared_from_this();
}

std::shared_ptr<ComputerBuilder> WorkstationComputerBuilder::setRAMSize()
{
  computer->setRAMSize(32);
  return shared_from_this();
}

std::shared_ptr<ComputerBuilder> WorkstationComputerBuilder::setCPUCores()
{
  computer->setCPUCores(64);
  return shared_from_this();
}

std::shared_ptr<ComputerBuilder> WorkstationComputerBuilder::setGPUMemorySize()
{
  computer->setGPUMemorySize(16);
  return shared_from_this();
}

std::shared_ptr<ComputerBuilder> WorkstationComputerBuilder::setMonitorSize()
{
  computer->setMonitorSize(17.2);
  return shared_from_this();
}

std::shared_ptr<Computer> WorkstationComputerBuilder::getComputer()
{
  std::shared_ptr<Computer> newComputer = std::move(computer);
  computer = std::make_shared<Computer>();
  return newComputer;
}