#ifndef DIRECTOR_H
#define DIRECTOR_H

#include "computer.h"
#include "computer_builder.h"

class Director {
  private:
    std::shared_ptr<ComputerBuilder> computerBuilder;

  public:
    Director() = delete;
    Director(std::shared_ptr<ComputerBuilder> _computerBuilder);
    void changeBuilder(std::shared_ptr<ComputerBuilder> computerBuilder);
    std::shared_ptr<Computer> makeComputer(bool hasMonitor);
};

#endif