#ifndef COMMAND_SAVE_H
#define COMMAND_SAVE_H

#include <iostream>

#include "Command.h"

class CommandSave : public Command {
 private:
  std::shared_ptr<Server> server;
  Image image;

 public:
  CommandSave(std::shared_ptr<Server> server, Image image)
  {
    this->server = server;
    this->image = image;
  }

  void execute() override
  {
    server->saveImage(image);
  }

  void response() override {}
};

#endif  // COMMAND_SAVE_H