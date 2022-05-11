#include <iostream>
#include "Book.h"
const long long startISBN = 9780000000000;
const long long endISBN = 9790000000000;
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
	if (enteredISBN < startISBN || enteredISBN>endISBN)
	{
		std::cout << "Invalide ISBN. Set defalt ISBN: " << counter << std::endl;
		ISBN = startISBN + counter;
	}
	else {
		ISBN = enteredISBN;
	}
}

Book& Book::operator=(const Book& other)
{
	autor = other.autor;
	header = other.header;
	shortDescr = other.shortDescr;
	rating = other.rating;
	ISBN = other.ISBN;
	return *this;
}


bool Book::operator==(const Book& rightBook) const
{
	if (autor == rightBook.autor && header == rightBook.header )
	{
		return true;
	}
	return false;
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
	in >> book.rating;
	in.ignore();
	std::cout << "Enter book ISBN : ";
	in >> book.ISBN;
	in.ignore();
	
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

