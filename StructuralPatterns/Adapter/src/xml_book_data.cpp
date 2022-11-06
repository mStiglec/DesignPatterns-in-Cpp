#include <iostream>
#include <sstream>
#include <fstream>

#include "../inc/xml_book_data.h"

XmlBookData::XmlBookData(const std::string fileName){
	std::ifstream inf;
    std::ostringstream oss;

	inf.open(fileName, std::ifstream::in);
    oss << inf.rdbuf();
    bookData = oss.str();
    inf.close();

    oss.str("");
    oss.clear();
}

std::string XmlBookData::getData() const{
	return bookData;
}