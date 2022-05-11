#pragma once
#include <iostream>
#include "String.h"
class Book {
private:
	String autor;
	String header;
	String shortDescr;
	double rating;
	long long ISBN;
public:
	Book();
	Book( String _autor, String _header, String _shortDescr,double _rating, int _ISBN);
	void validateRating(double numberRating);
	void validateISBN(unsigned enteredISBN);
	bool operator==(const Book& rightBook) const;

	friend std::istream& operator >> (std::istream& in, Book& book);
	friend std::ostream& operator << (std::ostream& out,const Book & book);

};