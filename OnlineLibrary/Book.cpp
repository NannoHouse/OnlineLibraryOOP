#include <iostream>
#include "Book.h"
const unsigned ISBNStart = 9780000000000;
unsigned counter = 0;
Book::Book() {
	autor = "No autor";
	header = "no header";
	shortDescr = "no description";
	rating = 0;
	ISBN = 0;

}
Book::Book(String _autor, String _header, String _shortDescr, double _rating, int _ISBN)
{
	counter++;
	autor = _autor;
	header = _header;
	shortDescr = _shortDescr;
	validateRating(_rating);
	validateISBN(_ISBN);
}

void Book::validateRating(double numberRating)
{
	if (numberRating<0)
	{
		this->rating = 0;
	}
	else if (numberRating>5)
	{
		rating = 5;
	}
	else {
		rating = numberRating;
	}
}

void Book::validateISBN(unsigned enteredISBN)
{
	if (enteredISBN < ISBNStart || enteredISBN>9790000000000)
	{
		std::cout << "Invalide ISBN. Set defalt ISBN: " << counter << std::endl;
		ISBN = ISBNStart + counter;
	}
	else {
		ISBN = enteredISBN;
	}
}


std::istream& operator>>(std::istream& in, Book& book)
{
	std::cout << "Enter book autor : ";
	in >> book.autor;
	std::cout << "Enter book header : ";
	in >> book.header;
	std::cout << "Enter book shortDescription : ";
	in >> book.shortDescr;
	std::cout << "Enter book rating : ";
	double _rating ;
	in >> book.rating;
	std::cout << "Enter book ISBN : ";
	in >> book.ISBN;
	
	return in;
}

std::ostream& operator<<(std::ostream& out, const Book& book)
{
	out << '\n';
	out << book.autor<<std::endl;
	out << book.header << std::endl;
	out << book.shortDescr << std::endl;
	out << book.rating << std::endl;
	out << book.ISBN << std::endl;
	return out;
}

