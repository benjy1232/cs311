//
// Created by bserrano on 2/17/22.
//

#include "Book.h"

// Constructors usually have an initializer list - common in cpp
// Syntax:
// class:
Book::Book()
		:_title{}, _author{}, _pages{ 0 }, _publicationDate{}, _ISBN10{}, _ISBN13{}
{
}

Book::Book(std::string title, std::string author)
		:_title{ title }, _author{ author }, _pages{ 0 }, _publicationDate{},
		 _ISBN10{}, _ISBN13{}
{
}

Book::Book(std::string title, std::string author, unsigned pageNum,
		std::string publicationDate, std::string ISBN10, std::string ISBN13)
		:_title{ title }, _author{ author }, _pages{ pageNum },
		 _publicationDate{ publicationDate }, _ISBN10{ ISBN10 }, _ISBN13{ ISBN13 }
{
}

void Book::setTitle(std::string title)
{
	_title = title;
}

void Book::setAuthor(std::string author)
{
	_author = author;
}

void Book::setNumPages(unsigned pages)
{
	_pages = pages;
}

void Book::setPublicationDate(std::string publicationDate)
{
	_publicationDate = publicationDate;
}

void Book::setISBN10(std::string ISBN10)
{
	_ISBN10 = ISBN10;
}

void Book::setISBN13(std::string ISBN13)
{
	_ISBN13 = ISBN13;
}

std::string Book::getTitle() const
{
	return _title;
}

std::string Book::getAuthor() const
{
	return _author;
}

unsigned Book::getNumPages() const
{
	return _pages;
}

std::string Book::getPublicationDate() const
{
	return _publicationDate;
}

std::string Book::getISBN10() const
{
	return _ISBN10;
}

std::string Book::getISBN13() const
{
	return _ISBN13;
}
