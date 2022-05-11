#pragma once
#include "Book.h"
#include "Vector.h"
class Library {
private:
	Vector<Book> library;
public:

	void add(Book book)const;
	void remove(Book book)const;
	
	//sort types - 2 main - up and down 
	// |-> others are 3 based on criteria
	//find book
	//printbooklistfine
};