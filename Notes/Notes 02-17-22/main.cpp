#include <iostream>
#include "Book.h"

int main()
{
	// To call default constructor type object name, no ()
	Book book1;
	// Think of this as new() in C#
	Book book2 = Book("Pride and Prejudice", "Jane Austin");

	book1.setTitle("Pride and Prejudice");
	std::cout << book1.getTitle() << " by " << book1.getAuthor() << std::endl;
	std::cout << book2.getTitle() << " by " << book2.getAuthor() << std::endl;
	return 0;
}
