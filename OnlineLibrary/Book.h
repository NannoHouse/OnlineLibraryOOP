#pragma once
#include <iostream>
#include "String.h"
class Book {
private:
	String autor;
	String header;
	String shortDescr;
	double rating;
	int ISBN;
public:
	Book();
	Book( String _autor, String _header, String _shortDescr,double _rating, int _ISBN);
	void validateRating(double numberRating);
	void validateISBN(unsigned enteredISBN);
	friend std::istream& operator >> (std::istream& in, Book& book);
	friend std::ostream& operator << (std::ostream& out,const Book & book);

};