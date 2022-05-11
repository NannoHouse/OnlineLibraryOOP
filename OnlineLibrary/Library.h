#pragma once
#include "Book.h"
#include "String.h"
#include "Vector.h"
class Library {
private:
	Vector<Book> library;
public:
	void add(Book book); // check if empty
	void remove(Book book);
	Book findBookByHeader(String giverHeader); // maybe need to do an overload for different types of searchs
	Book findBookByAuthor(String givenAutor);

	//sort types - 2 main - up and down 
	// |-> others are 3 based on criteria
	//printbooklistfine
};