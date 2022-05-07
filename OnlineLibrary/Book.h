#pragma once
#include <iostream>
#include "String.h"
class Book {
private:
	String autor;
	String header;
	//kratko opisanie fine name
	String shortDescr;
	double rating;
	String ISBN; // ima tireta v nego
public:
	Book();
	// getters and setters
	void getAutor() const;
	void getHeader() const;
	void getShortDescr() const;
	void getRating() const;
	void getISBN()const;

	Book(String ISBN);


};