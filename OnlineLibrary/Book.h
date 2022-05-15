#pragma once
#include <iostream>
#include "String.h"
class Book {
private:
	String autor;
	String header;
	String shortDescr;
	double rating;
	unsigned long long ISBN;
public:
	Book();
	Book( String _autor, String _header, String _shortDescr,double _rating, unsigned long long _ISBN);
	String getAuthor()const;
	String getHeader()const;
	String getShortDescription()const;
	double getRating()const;
	unsigned long long getISBN()const;
	void setAuthor(String _author);
	void setHeader(String _header);
	void setShortDescription(String _shortDescr);
	void setRating(double _rating);
	void setISBN(unsigned long long _ISBN);

public:
	Book& operator =(const Book& other);
	bool operator==(const Book& rightBook) const;

	friend std::istream& operator >> (std::istream& in, Book& book);
	friend std::ostream& operator << (std::ostream& out,const Book & book);

};
