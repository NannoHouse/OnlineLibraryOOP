#include <iostream>
#include "Book.h"

Book::Book() {
	autor = "No autor";
	header = "no header";
	shortDescr = "no description";
	rating = 0;
	ISBN = "no ISBN";

}
String Book::getAutor() const
{
	return autor;
}

String Book::getHeader() const
{
	return header;
}

String Book::getShortDescr() const
{
	return shortDescr;
}

double Book::getRating() const
{
	return rating;
}

String Book::getISBN() const
{
	return ISBN;
}


void Book::setAutor(const String _autor)
{
	this->autor = _autor;
}

void Book::setHeader(const String _header)
{
	this->header = _header;
}

void Book::setShortDescr(const String _shortDescr)
{
	this->shortDescr = _shortDescr;
}

void Book::setRating(double _rating)
{
	if (_rating<0)
	{
		this->rating = 0;
	}
	else if (_rating >5)
	{
		this->rating = 5;
	}
	else {
	this->rating = _rating;
	}
}

void Book::setISBN(const String _ISBN)
{
	this->ISBN = _ISBN;
}



Book::Book(String _autor, String _header, String _shortDescr, double _rating, String _ISBN)
{
	autor = _autor;
	header = _header;
	shortDescr = _shortDescr;
	rating = _rating;
	ISBN = _ISBN;
}

std::istream& operator>>(std::istream& in, Book& book)
{
	String buffer;
	std::cout << "Enter book autor : ";
	in >> buffer;
	book.setAutor(buffer);
	std::cout << "Enter book header : ";
	in >> buffer;
	book.setHeader(buffer);
	std::cout << "Enter book shortDescription : ";
	in >> buffer;
	book.setShortDescr(buffer);

	std::cout << "Enter book rating : ";
	double _rating ;
	in >> _rating;
	book.setRating(_rating);
	in.ignore();
	std::cout << "Enter book ISBN : ";
	in >> buffer;
	book.setISBN(buffer);
	
	return in;
}

std::ostream& operator<<(std::ostream& out, const Book& book)
{
	out << '\n';
	out << book.getAutor()<<std::endl;
	out << book.getHeader() << std::endl;
	out << book.getShortDescr() << std::endl;
	out << book.getRating() << std::endl;
	out << book.getISBN() << std::endl;
	return out;
}

