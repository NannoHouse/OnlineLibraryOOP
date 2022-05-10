#include <iostream>
#include "Book.h"
Book::Book()
{

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
	this->rating = _rating;
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
//

