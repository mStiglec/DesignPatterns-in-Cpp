#ifndef JSON_BOOK_DATA_ADAPTER_H
#define JSON_BOOK_DATA_ADAPTER_H

#include <string>

#include "json_book_data.h"
#include "xml_book_data.h"

class JsonBookDataAdapter : public JsonBookData {
  private:
    XmlBookData xmlBookData;

  public:
    JsonBookDataAdapter() = delete;
    JsonBookDataAdapter(XmlBookData xmlBookData);

    std::string getData() const override;
};

#endif