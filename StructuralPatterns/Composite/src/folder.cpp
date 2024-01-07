#include "../inc/folder.h"

#include <algorithm>

Folder::Folder(std::string _folderName) : folderName(_folderName) {}

void Folder::addComponent(std::shared_ptr<DirectoryComponent> component)
{
  subComponents.push_back(component);
}

std::string Folder::getComponentName() const
{
  return this->folderName;
}

void Folder::printFiles()
{
  for (std::shared_ptr<DirectoryComponent> component : subComponents)
  {
    component->printFiles();
  }
}

void Folder::printJPEGFiles()
{
  for (std::shared_ptr<DirectoryComponent> component : subComponents)
  {
    component->printJPEGFiles();
  }
}

void Folder::printEXEFiles()
{
  for (std::shared_ptr<DirectoryComponent> component : subComponents)
  {
    component->printEXEFiles();
  }
}

void Folder::findFile(std::string fileName)
{
  for (std::shared_ptr<DirectoryComponent> component : subComponents)
  {
    component->findFile(fileName);
  }
}