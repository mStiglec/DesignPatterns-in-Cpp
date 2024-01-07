#include <iostream>
#include <memory>

#include "inc/Application.h"
#include "inc/Command.h"
#include "inc/CommandFetchImages.h"
#include "inc/CommandNumOfImages.h"
#include "inc/CommandSave.h"
#include "inc/Image.h"

int main(void)
{
  std::shared_ptr<Server> server = std::make_shared<Server>();

  std::shared_ptr<Application> application = std::make_shared<Application>();

  Image firstImage = Image(1, "FirstImage");
  Image secondImage = Image(2, "SecondImage");

  std::shared_ptr<Command> saveCommand = std::make_shared<CommandSave>(server, firstImage);

  std::shared_ptr<Command> fetchImagesCommand = std::make_shared<CommandFetchImages>(server);

  std::shared_ptr<Command> numOfImagesCommand = std::make_shared<CommandNumOfImages>(server);

  application->executeAction(saveCommand);

  application->executeAction(numOfImagesCommand);
  numOfImagesCommand->response();

  saveCommand = std::make_shared<CommandSave>(server, secondImage);
  application->executeAction(saveCommand);

  application->executeAction(numOfImagesCommand);
  numOfImagesCommand->response();

  application->executeAction(fetchImagesCommand);
  fetchImagesCommand->response();
}