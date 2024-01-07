#ifndef COMMAND_FETCH_IMAGES_H
#define COMMAND_FETCH_IMAGES_H

#include <iostream>

#include "Command.h"

class CommandFetchImages : public Command {
  public:
    std::shared_ptr<Server> server;
    std::vector<Image> fetchedImages;

    CommandFetchImages(std::shared_ptr<Server> server)
    {
      this->server = server;
    }

    void execute() override
    {
      fetchedImages = server->fetchAllImages();
    }

    void response() override
    {
      for (Image& image : fetchedImages)
      {
        std::cout << image << std::endl;
      }
    }
};

#endif  // COMMAND_FETCH_IMAGES_H