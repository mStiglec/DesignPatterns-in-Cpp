#ifndef BOOK_H
#define BOOK_H

#include <string>
#include <ostream>

class Book{
	private:
		friend std::ostream& operator<<(std::ostream& os, const Book& book);
		
		std::string id;
		std::string author;
		std::string title; 
		std::string genre;
		std::string price;
		std::string releaseDate;
		std::string description;
	
	public:
		Book() = delete;
		Book(std::string id, std::string author, std::string title,
			 std::string genre, std::string price, std::string releaseDate,
			 std::string description);
		
		void setId(const std::string _id);
		void setAuthor(const std::string _author);
		void setTitle(const std::string _title);
		void setGenre(const std::string _genre);
		void setPrice(const std::string _price);
		void setReleaseDate(const std::string _releaseDate);
		void setDescription(const std::string _description);

		std::string getId() const;
		std::string getAuthor() const;
		std::string getTitle() const;
		std::string getGenre() const;
		std::string getPrice() const;
		std::string getReleaseDate() const;
		std::string getDescription() const;
};

#endif