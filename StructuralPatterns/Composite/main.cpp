#include <iostream>
#include <memory>

#include "inc/directory_component.h"
#include "inc/file.h"
#include "inc/folder.h"

int main()
{
  // Create directory structure
  std::shared_ptr<Folder> firstFolder = std::make_shared<Folder>("First folder");
  std::shared_ptr<Folder> secondFolder = std::make_shared<Folder>("Second folder");
  std::shared_ptr<Folder> thirdFolder = std::make_shared<Folder>("Third folder");
  std::shared_ptr<Folder> fourthFolder = std::make_shared<Folder>("Fourth folder");
  std::shared_ptr<Folder> fifthFolder = std::make_shared<Folder>("Fifth folder");

  std::shared_ptr<DirectoryComponent> firstFile = std::make_shared<File>("First file", ".exe");
  std::shared_ptr<DirectoryComponent> secondFile = std::make_shared<File>("Second file", ".jpeg");
  std::shared_ptr<DirectoryComponent> thirdFile = std::make_shared<File>("Third file", ".exe");
  std::shared_ptr<DirectoryComponent> fourthFile = std::make_shared<File>("Fourth file", ".jpeg");
  std::shared_ptr<DirectoryComponent> fifthFile = std::make_shared<File>("Fifth file", ".docx");

  firstFolder->addComponent(firstFile);
  firstFolder->addComponent(secondFolder);
  firstFolder->addComponent(thirdFolder);
  firstFolder->addComponent(fourthFolder);
  secondFolder->addComponent(fifthFolder);
  secondFolder->addComponent(secondFile);
  secondFolder->addComponent(fifthFile);
  thirdFolder->addComponent(thirdFile);
  thirdFolder->addComponent(firstFile);
  fourthFolder->addComponent(fourthFile);
  fourthFolder->addComponent(thirdFile);

  // Create directory tree (all objects are Component type)
  std::vector<std::shared_ptr<DirectoryComponent>> directory{firstFolder, secondFolder, firstFile,
                                                             thirdFolder, fourthFolder, thirdFile,
                                                             fifthFile,   fifthFolder};

  // Go through every directory component (client doesnt care if component is folder or file!!!)
  for (std::shared_ptr<DirectoryComponent> component : directory)
  {
    std::cout << "Print all files for " << component->getComponentName() << ":" << std::endl;
    component->printFiles();
    std::cout << std::endl;

    std::cout << "Print JPEG files for " << component->getComponentName() << ":" << std::endl;
    component->printJPEGFiles();
    std::cout << std::endl;

    std::cout << "Print EXE files for " << component->getComponentName() << ":" << std::endl;
    component->printEXEFiles();
    std::cout << std::endl;
  }
}