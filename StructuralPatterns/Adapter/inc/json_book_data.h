#ifndef JSON_BOOK_DATA_H
#define JSON_BOOK_DATA_H

#include <string>

class JsonBookData {
  private:
    std::string bookData;

  public:
    JsonBookData() = default;
    JsonBookData(const std::string fileName);

    virtual std::string getData() const;
};

#endif