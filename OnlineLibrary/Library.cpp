#include "Library.h"
#include"Vector.h"
#include<iostream>

void Library::add(Book book)
{
		library.add(book);
}

void Library::remove(String searchHeader, String searchAuthor, long long isbn)
{
	unsigned size = library.getSize();
	for (unsigned i = 0; i < size; i++)
	{
		if (library.at(i).getHeader() == searchHeader && library.at(i).getAuthor() == searchAuthor && library.at(i).getISBN() == isbn)
		{
			library.remove(i);
			std::cout << "Book was removed!";
			break;
		}
	}
}
