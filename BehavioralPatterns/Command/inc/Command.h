#ifndef COMMAND_H
#define COMMAND_H

#include <vector>

#include "Server.h"

class Command {
  public:
    virtual ~Command() {}
    virtual void execute() = 0;
    virtual void response() = 0;
};

#endif  // COMMAND_H