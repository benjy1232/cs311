// description:
// name: Ben Serrano
// date: 02-17-2022

#include <iostream>
#include <string>

// when you need to create a type to reflect real world types
// e.g., books, cars, computers, songs, even some abstract concepts like interfaces, standards,
// you may use C++'s OOP mechanism to DEFINE YOUR OWN TYPE.
// std::string, std::vector are just examples of C++ classes.

// TODO: implement your lecture note about class Book here as Monday/Tuesday's lab work
class Book
{
private:
	std::string _title;
	std::string _author;
	unsigned _printLength;
	std::string _publicationDate;
	std::string _ISBN10;
	std::string _ISBN13;

public:
	Book()
			: _title(), _author(), _printLength(0),
			  _publicationDate(), _ISBN10(), _ISBN13()
	{
	}

	Book(std::string& title, std::string& author)
			: _title(title), _author(author), _printLength(0),
			  _publicationDate(), _ISBN10(), _ISBN13()
	{
	}

	Book(std::string& title, std::string& author, unsigned length,
			std::string& pubDate, std::string& isbn10, std::string& isbn13)
			: _title(title), _author(author), _printLength(length),
			  _publicationDate(pubDate), _ISBN10(isbn10), _ISBN13(isbn13)
	{
	}

	//setters
	void setTitle(std::string& title)
	{
		_title = title;
	}

	void setAuthor(std::string& author)
	{
		_author = author;
	}

	void setPrintLength(unsigned& printLength)
	{
		_printLength = printLength;
	}

	void setPublicationDate(std::string& publicationDate)
	{
		_publicationDate = publicationDate;
	}

	void setISBN_10(std::string& isbn)
	{
		_ISBN10 = isbn;
	}

	void setISBN_13(std::string& isbn)
	{
		_ISBN13 = isbn;
	}

	// getters
	std::string getTitle() const
	{
		return _title;
	}

	std::string getAuthor() const
	{
		return _author;
	}

	unsigned getPrintLength() const
	{
		return _printLength;
	}

	std::string getPublicationDate() const
	{
		return _publicationDate;
	}

	std::string getISBN_10() const
	{
		return _ISBN10;
	}

	std::string getISBN_13() const
	{
		return _ISBN13;
	}
};

Book createBook()
{
	std::string title, author, pubDate, isbn10, isbn13;
	unsigned pages;
	std::getline(std::cin, title);
	std::getline(std::cin, author);
	std::cin >> pages;
	std::cin.ignore();
	std::getline(std::cin, pubDate);
	std::getline(std::cin, isbn10);
	std::getline(std::cin, isbn13);
	Book createdBook(title, author, pages, pubDate, isbn10, isbn13);
	std::cin.ignore();
	return createdBook;
}


void printBook(const Book &book)
{
	std::cout << "Book Name: "<<book.getTitle() << std::endl;
	std::cout << "Book Author(s): " << book.getAuthor() << std::endl;
	std::cout << "Page: " << book.getPrintLength() << std::endl;
	std::cout << "Published Date: " << book.getPublicationDate() << std::endl;
	std::cout << "ISBN-10: " << book.getISBN_10() << std::endl;
	std::cout << "ISBN-13: " << book.getISBN_13() << std::endl;
	std::cout << std::endl;
}

int main()
{

//    // step 1: test Book constructors
//    // no expected output
//    Book book1;
//    Book book2((std::string &) "Grit: The Power of Passion and Perseverance", (std::string &) "Angela Duckworth");
//    Book book3((std::string &) "Dynamism: The Values That Drive Innovation, Job Satisfaction, and Economic Growth",
//               (std::string &) " Edmund Phelps (Author), Raicho Bojilov (Author), Hian Teck Hoon (Author), Gylfi Zoega (Author)");
//
//    // step 2: uncomment following code snippet to test getters and setters.
//
//    book1.setTitle((std::string &) "A Thousand Brains: A New Theory of Intelligence");
//    std::cout << "book 1 title: " << book1.getTitle() << std::endl;
//    book1.setAuthor((std::string &) "Jeff Hawkins");
//    std::cout << "book 1 author: " << book1.getAuthor() << std::endl;
//    // test other getters and setters with book2 or book3 objects to match expected output
//    book2.setPrintLength(352);
//    book2.setPublicationDate((std::string &) "May 1, 2016");
//    std::cout << "book 2 print length: " << book2.getPrintLength() << " pages\n";
//    book3.setISBN_10((std::string &) "0674244699");
//    book3.setISBN_13((std::string &) "978-0674244696");
//    std::cout << "book 3 ISBN 10: " << book3.getISBN_10() << std::endl;
//    std::cout << "book 3 ISBN 13: " << book3.getISBN_13() << std::endl;

	Book book1 = createBook();
	Book book2 = createBook();
	Book book3 = createBook();

	for (auto book: { book1, book2, book3 })
	{
		printBook(book);
	}
}