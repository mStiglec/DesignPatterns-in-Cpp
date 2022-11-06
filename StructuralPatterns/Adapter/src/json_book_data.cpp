#include <iostream>
#include <sstream>
#include <fstream>

#include "../inc/json_book_data.h"

JsonBookData::JsonBookData(const std::string fileName){
	std::ifstream inf;
    std::ostringstream oss;

	inf.open(fileName, std::ifstream::in);
    oss << inf.rdbuf();
    bookData = oss.str();
    inf.close();

    oss.str("");
    oss.clear();
}

std::string JsonBookData::getData() const{
	return bookData;
}