#ifndef BUILDER_H
#define BUILDER_H

#include <memory>

#include "computer.h"

class ComputerBuilder {
  public:
    virtual ~ComputerBuilder() {}

    virtual std::shared_ptr<ComputerBuilder> setType() = 0;
    virtual std::shared_ptr<ComputerBuilder> setRAMSize() = 0;
    virtual std::shared_ptr<ComputerBuilder> setCPUCores() = 0;
    virtual std::shared_ptr<ComputerBuilder> setMonitorSize() = 0;
    virtual std::shared_ptr<ComputerBuilder> setGPUMemorySize() = 0;
    virtual std::shared_ptr<Computer> getComputer() = 0;
};

#endif