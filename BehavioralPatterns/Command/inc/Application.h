#ifndef APPLICATION_H
#define APPLICATION_H

#include "Command.h"

// INVOKER CLASS
class Application {
 public:
  void executeAction(std::shared_ptr<Command> command)
  {
    command->execute();
  }
};

#endif  // APPLICATION_H