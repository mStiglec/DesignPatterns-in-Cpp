#include "../inc/json_book_data_adapter.h"
#include "../xml2json/xml2json.hpp"

JsonBookDataAdapter::JsonBookDataAdapter(XmlBookData _xmlBookData)
	:xmlBookData(_xmlBookData){}

std::string JsonBookDataAdapter::getData() const{
	std::string xmlData = xmlBookData.getData();
	std::string jsonData = xml2json(xmlData.c_str());
	return jsonData;
}