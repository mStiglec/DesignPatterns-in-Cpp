#ifndef XML_BOOK_DATA_H
#define XML_BOOK_DATA_H

#include <string>

class XmlBookData{
	private:
		std::string bookData;
	public:
		XmlBookData() = default;
		XmlBookData(const std::string fileName);

		virtual std::string getData() const;
};

#endif