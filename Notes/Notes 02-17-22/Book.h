//
// Created by bserrano on 2/17/22.
//

#ifndef NOTES_02_17_22_BOOK_H
#define NOTES_02_17_22_BOOK_H

#include <string>

class Book
{
private:
	std::string _title;
	std::string _author;
	unsigned _pages;
	std::string _publicationDate;
	std::string _ISBN10;
	std::string _ISBN13;
public:
	Book();

	Book(std::string title, std::string author);

	Book(std::string title, std::string author, unsigned pageNum,
			std::string publicationDate, std::string ISBN10, std::string ISBN13);

	// Setters
	void setTitle(std::string title);

	void setAuthor(std::string author);

	void setNumPages(unsigned pages);

	void setPublicationDate(std::string publicationDate);

	void setISBN10(std::string ISBN10);

	void setISBN13(std::string ISBN13);

	// Getters
	std::string getTitle() const;

	std::string getAuthor() const;

	unsigned getNumPages() const;

	std::string getPublicationDate() const;

	std::string getISBN10() const;

	std::string getISBN13() const;
};

#endif //NOTES_02_17_22_BOOK_H
