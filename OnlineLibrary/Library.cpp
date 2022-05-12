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

void Library::findBookByHeader(String givenHeader)
{
	unsigned size = library.getSize();
	for (unsigned i = 0; i < size; i++)
	{
		if (library.at(i).getHeader() == givenHeader)
		{
			std::cout << library.at(i);
		}
	}
}

void Library::findBookByAuthor(String givenAutor)
{
	unsigned size = library.getSize();
	for (unsigned i = 0; i < size; i++)
	{
		if (library.at(i).getAuthor() == givenAutor)
		{
			std::cout << library.at(i);
		}
	}
}

void Library::findBookByISBN(unsigned long long ISBN)
{
		unsigned size = library.getSize();
		for (unsigned i = 0; i < size; i++)
		{
			if (library.at(i).getISBN() == ISBN)
			{
				std::cout << library.at(i);
			}
		}
}

void Library::findBookByShortDescription(String description)
{		unsigned size = library.getSize();
		for (unsigned i = 0; i < size; i++)
		{
			if (library.at(i).getShortDescription().contains(description))
			{
				std::cout << library.at(i);
			}
		}
}

