#include "Library.h"
#include"Vector.h"
#include<iostream>

void Library::add(Book book)
{
		library.add(book);
}

void Library::remove(Book book)
{
	unsigned size = library.getSize();
	for (unsigned i = 0; i < size; i++)
	{
		if (library.at(i) == book)
		{
			library.remove(i);
			std::cout << "Book was removed!";
		}
	}
}
