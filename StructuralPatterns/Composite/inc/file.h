#ifndef FILE_H
#define FILE_H

#include <string>

#include "directory_component.h"

class File : public DirectoryComponent {
  private:
    std::string fileName;
    std::string extension;

  public:
    File() = delete;
    File(std::string fileName, std::string extension);

    std::string getComponentName() const override;
    void printFiles() override;
    void printJPEGFiles() override;
    void printEXEFiles() override;
    void findFile(std::string fileName) override;
};

#endif  // FILE_H
