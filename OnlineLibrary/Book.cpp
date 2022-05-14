#include <iostream>
#include "Book.h"

Book::Book(): autor("no author"), header("no header"), shortDescr("nmo description"), rating(0), ISBN(0) {}
Book::Book(String _autor, String _header, String _shortDescr, double _rating, unsigned long long _ISBN)
: autor(_autor), header(_header), shortDescr(_shortDescr), rating(_rating), ISBN(_ISBN)
{}

//getters and setters

String Book::getAuthor() const
{
	return autor;
}

String Book::getHeader() const
{
	return header;
}

String Book::getShortDescription() const
{
	return shortDescr;
}

double Book::getRating() const
{
	return rating;
}

unsigned long long Book::getISBN() const
{
	return ISBN;
}

void Book::setAuthor(String _author)
{
	autor = _author;
}

void Book::setHeader(String _header)
{
	header = _header;
}

void Book::setShortDescription(String _shortDescr)
{
	shortDescr = _shortDescr;
}

void Book::setRating(double _rating)
{
	rating = _rating;
}

void Book::setISBN(unsigned long long _ISBN)
{
	ISBN = _ISBN;
}

// operators
Book& Book::operator=(const Book& other)
{
	if (this != &other)
	{
		autor = other.autor;
		header = other.header;
		shortDescr = other.shortDescr;
		rating = other.rating;
		ISBN = other.ISBN;
	}
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

//operators for stream
std::istream& operator>>(std::istream& in, Book& book)
{
	//in.ignore();
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
	out << book.autor<<std::endl;
	out << book.header << std::endl;
	out << book.shortDescr << std::endl;
	out << book.rating << std::endl;
	out << book.ISBN << std::endl;
	return out;
}

