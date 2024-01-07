#ifndef DIRECTORY_COMPONENT_H
#define DIRECTORY_COMPONENT_H

#include <string>

class DirectoryComponent {
  public:
    virtual std::string getComponentName() const = 0;
    virtual void printFiles() = 0;
    virtual void printJPEGFiles() = 0;
    virtual void printEXEFiles() = 0;
    virtual void findFile(std::string fileName) = 0;
};

#endif  // DIRECTORY_COMPONENT_H
