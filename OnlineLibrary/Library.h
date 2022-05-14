#pragma once
#include "Book.h"
#include "String.h"
#include "Vector.h"
class Library {
private:
	Vector<Book> library;
public:
	void add(Book book);
	void remove(String searchHeader, String searchAuthor, long long isbn);
	int getSize();
	Book& getBookAtIndex(int index) ;
	// find functions
	void findBookByHeader(String& givenHeader); 
	void findBookByAuthor(String& givenAutor);
	void findBookByISBN(unsigned long long& ISBN);
	void findBookByShortDescription(String& description);

	void sortDescending();
	void sortByHeader();
	void sortByAuthor();
	void sortByISBN();

	void printLibrary();
	
};
