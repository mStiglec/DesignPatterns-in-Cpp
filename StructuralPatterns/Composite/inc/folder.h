#ifndef FOLDER_H
#define FOLDER_H

#include <vector>
#include <string>
#include <memory>

#include "directory_component.h"

class Folder : public DirectoryComponent{
	private:
		std::string folderName;
		std::vector<std::shared_ptr<DirectoryComponent>> subComponents;
	public:
		Folder() = delete;
		Folder(std::string folderName);

		void addComponent(std::shared_ptr<DirectoryComponent> component);

		std::string getComponentName() const override;
		void printFiles() override;
		void printJPEGFiles() override;
		void printEXEFiles() override;
		void findFile(std::string fileName) override;
};

#endif // FOLDER_H
