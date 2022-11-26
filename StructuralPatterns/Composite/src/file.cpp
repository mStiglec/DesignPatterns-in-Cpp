#include <iostream>

#include "../inc/file.h"

File::File(std::string _fileName, std::string _extension)
	:fileName(_fileName),extension(_extension){}

std::string File::getComponentName() const{
	return this->fileName;
}

void File::printFiles(){
	std::cout << this->fileName << this->extension << std::endl;
}

void File::printJPEGFiles(){
	if(this->extension == ".jpeg"){
		std::cout << this->fileName << this->extension << std::endl;
	}
}

void File::printEXEFiles(){
	if(this->extension == ".exe"){
		std::cout << this->fileName << this->extension << std::endl;
	}
}

void File::findFile(std::string fileName){
	if(this->fileName == fileName){
		std::cout << "File: " << this->fileName << " found" << std::endl;
	}
}