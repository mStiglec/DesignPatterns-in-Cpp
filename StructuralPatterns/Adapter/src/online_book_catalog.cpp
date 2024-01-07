#include "../inc/online_book_catalog.h"

#include <iostream>

#include "../../../rapidjson/include/rapidjson/document.h"
#include "../../../rapidjson/include/rapidjson/stringbuffer.h"
#include "../../../rapidjson/include/rapidjson/writer.h"

void OnlineBookCatalog::updateBookCatalog(const JsonBookData& jsonBookData)
{
  std::string jsonData = jsonBookData.getData();
  rapidjson::Document document;
  document.Parse(jsonData.c_str());

  const rapidjson::Value& books = document["catalog"]["book"];
  for (rapidjson::SizeType i = 0; i < books.Size(); i++)
  {
    std::shared_ptr<Book> book = std::make_shared<Book>(
        books[i]["id"].GetString(), books[i]["author"].GetString(), books[i]["title"].GetString(),
        books[i]["genre"].GetString(), books[i]["price"].GetString(),
        books[i]["publish_date"].GetString(), books[i]["description"].GetString());

    catalog.insert(std::make_pair(books[i]["id"].GetString(), book));
  }
}

std::shared_ptr<Book> OnlineBookCatalog::getBook(std::string id)
{
  for (auto& it : catalog)
  {
    if (it.first == id)
    {
      return it.second;
    }
  }
  return nullptr;
}

void OnlineBookCatalog::showCatalog() const
{
  for (auto& it : catalog)
  {
    std::cout << *(it.second) << std::endl;
  }
}