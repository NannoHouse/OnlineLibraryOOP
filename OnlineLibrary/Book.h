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
	// getters 
	String getAutor() const;
	String getHeader() const;
	String getShortDescr() const;
	double getRating() const;
	String getISBN()const;
	 // setters
	void setAutor(const String _autor) ;
	void setHeader(const String _header) ;
	void setShortDescr(const String _shortDescr) ;
	void setRating(double _rating) ;
	void setISBN(const String _ISBN);

	Book( String _autor, String _header, String _shortDescr,double _rating, String _ISBN);


};
//redefine operator << and >>