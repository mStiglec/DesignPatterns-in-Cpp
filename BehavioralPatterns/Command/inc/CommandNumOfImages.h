#ifndef COMMAND_NUM_OF_IMAGES_H
#define COMMAND_NUM_OF_IMAGES_H

#include <iostream>

#include "Command.h"

class CommandNumOfImages : public Command {
 public:
  std::shared_ptr<Server> server;
  unsigned int numOfImages;

  CommandNumOfImages(std::shared_ptr<Server> server)
  {
    this->server = server;
  }

  void execute() override
  {
    numOfImages = server->getNumOfImages();
  }

  void response() override
  {
    std::cout << "number of images in database: " << numOfImages << std::endl;
  }
};

#endif  // COMMAND_NUM_OF_IMAGES_H