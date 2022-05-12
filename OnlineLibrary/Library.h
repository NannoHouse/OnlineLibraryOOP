#pragma once
#include "Book.h"
#include "String.h"
#include "Vector.h"
class Library {
private:
	Vector<Book> library;
public:
	void add(Book book); // check if empty
	void remove(String searchHeader, String searchAuthor, long long isbn);
	Book findBookByHeader(String giverHeader); // maybe need to do an overload for different types of searchs
	void findBookByAuthor(String givenAutor);
	void findBookByISBN(String givenAutor);
	void findBookByShortDescription(String givenAutor);

	//sort types - 2 main - up and down 
	// |-> others are 3 based on criteria
	//printbooklistfine
};