#include <iostream>

#include "inc/xml_book_data.h"
#include "inc/json_book_data.h"
#include "inc/online_book_catalog.h"
#include "inc/json_book_data_adapter.h"

void printBook(const std::shared_ptr<Book> book){
    std::cout << *book << std::endl;
}

int main(){
    XmlBookData xmlBookData("book.xml");
    JsonBookData jsonBookData("book.json");
    JsonBookDataAdapter jsonBookDataAdapter(xmlBookData);

    OnlineBookCatalog onlineBookCatalog;
    
    onlineBookCatalog.updateBookCatalog(jsonBookData); // OK 
    onlineBookCatalog.showCatalog();

    //onlineBookCatalog.updateBookCatalog(xmlBookData); // ERROR

    onlineBookCatalog.updateBookCatalog(jsonBookDataAdapter); // OK
    onlineBookCatalog.showCatalog();
}