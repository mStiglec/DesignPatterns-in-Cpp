#include "../inc/computer.h"

void Computer::setType(const std::string _type)
{
  type = _type;
}

void Computer::setRAMSize(const int _RAMSize)
{
  RAMSize = _RAMSize;
}

void Computer::setCPUCores(const int _CPUCores)
{
  numOfCPUCores = _CPUCores;
}

void Computer::setGPUMemorySize(const int _GPUMemorySize)
{
  GPUMemorySize = _GPUMemorySize;
}

void Computer::setMonitorSize(const double _monitorSize)
{
  monitorSize = _monitorSize;
}

std::string Computer::getType() const
{
  return type;
}

int Computer::getRAMSize() const
{
  return RAMSize;
}

int Computer::getCPUCores() const
{
  return numOfCPUCores;
}

int Computer::getGPUMemorySize() const
{
  return GPUMemorySize;
}

double Computer::getMonitorSize() const
{
  return monitorSize;
}