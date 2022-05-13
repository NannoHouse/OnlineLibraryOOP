#include "Library.h"
#include"Vector.h"
#include<iostream>

void Library::add(Book book)
{
		library.add(book);
		std::cout << "Added"<<std::endl;
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

void Library::sortDescending()
{
	unsigned int size = library.getSize();
	Book temp;
	for (size_t i = 0; i < size/2; i++)
	{
		temp = library.at(i);
		library.at(i) = library.at(size - i);
		library.at(size - i) = temp;
	}
}

void Library::sortByHeader()
{
	 int size = library.getSize();
	Book temp;
	for (int i = 0; i < size; i++) {
		for (int j = i + 1; j < size; j++)
		{
			if (strcmp(library.at(j).getHeader().getSymbols(), library.at(i).getHeader().getSymbols())<0) {
				temp = library.at(i);
				library.at(i) = library.at(j);
				library.at(j) = temp;
			}
		}
	}
}

void Library::sortByAuthor()
{
	 int size = library.getSize();
	Book temp;
	for (int i = 0; i < size; i++) {
		for (int j = i + 1; j < size; j++)
		{
			if (strcmp(library.at(j).getAuthor().getSymbols(), library.at(i).getAuthor().getSymbols())<0) {
				temp = library.at(i);
				library.at(i) = library.at(j);
				library.at(j) = temp;
			}
		}
	}
}

void Library::sortByISBN()
{
	 int size = library.getSize();
	Book temp;
	for (int i = 0; i < size; i++) {
		for (int j = i + 1; j < size; j++)
		{
			if (library.at(j).getISBN()> library.at(i).getISBN()) {
				temp = library.at(i);
				library.at(i) = library.at(j);
				library.at(j) = temp;
			}
		}
	}
}

void Library::printLibrary() 
{
	unsigned size = library.getSize();
	for (unsigned i = 0; i < size; i++)
	{
		std::cout << library.at(i);
	}
}

