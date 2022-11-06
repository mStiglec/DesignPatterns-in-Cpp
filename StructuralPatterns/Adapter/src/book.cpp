#include "../inc/book.h"

Book::Book(std::string _id,
		   std::string _author,
		   std::string _title,
		   std::string _genre,
		   std::string _price,
		   std::string _releaseDate,
		   std::string _description)
:id(_id),
 author(_author),
 title(_title),
 genre(_genre),
 price(_price),
 releaseDate(_releaseDate),
 description(_description){};

void Book::setId(const std::string _id){
	this->id = _id;
}
void Book::setAuthor(const std::string _author){
	this->author = _author;
}
void Book::setTitle(const std::string _title){
	this->title = _title;
}
void Book::setGenre(const std::string _genre){
	this->genre = _genre;
}
void Book::setPrice(const std::string _price){
	this->price = _price;
}
void Book::setReleaseDate(const std::string _releaseDate){
	this->releaseDate = _releaseDate;
}
void Book::setDescription(const std::string _description){
	this->description = _description;
}

std::string Book::getId() const{
	return this->id;
}
std::string Book::getAuthor() const{
	return this->author;
}
std::string Book::getTitle() const{
	return this->title;
}
std::string Book::getGenre() const{
	return this->genre;
}
std::string Book::getPrice() const{
	return this->price;
}
std::string Book::getReleaseDate() const{
	return this->releaseDate;
}
std::string Book::getDescription() const{
	return this->description;
}

 std::ostream& operator<<(std::ostream& os, const Book& book){
	return os << "Id: " << book.id << std::endl
			  << "Author: " << book.author << std::endl
			  << "Title: " << book.title << std::endl
			  << "Genre: " << book.genre << std::endl
			  << "Price: " << book.price << std::endl
			  << "Published Date: " << book.releaseDate << std::endl
			  << "Description: " << book.description << std::endl;
}