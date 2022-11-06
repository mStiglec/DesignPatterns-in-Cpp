#ifndef ONLINE_BOOK_CATALOG_H
#define ONLINE_BOOK_CATALOG_H

#include <unordered_map>
#include <memory>

#include "json_book_data.h"
#include "book.h"

class OnlineBookCatalog{
	private:
		std::unordered_map<std::string, std::shared_ptr<Book>> catalog;
	
	public:
		OnlineBookCatalog() = default;

		void updateBookCatalog(const JsonBookData& jsonBookData);
		std::shared_ptr<Book> getBook(std::string id);
		void showCatalog() const;

		/*Below are examples of other methods this class can have
		 but it is important that catalog only can be
		 updated with JSON data
		 
		 void sortBooksByName();
		 void sortBooksByPrice();
		 void getBooksByGenre();*/
};

#endif