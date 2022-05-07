#pragma once
#include<iostream>
class String {
	// mysting class
private:
	char* myString;
	//void copy(const String& other);
	//void erase();

public:
	// big_4
	String();
	String(const char* word);
	String(const String& other);

	String& operator =(const String& other);

	~String();

	// functions - add, getlength
	size_t getSize() const;
	void print() const;
	void add(const char* str);
	const char* getSymbols() const;

	//redefine >> / << / + / += / = 
	String& operator +(const String& other);
	String& operator +=(const String& other);

	// bool operators
	bool operator<(const String& string) const;
	bool operator==(const String& string) const;
	bool operator!=(const String& string) const;

	//friend functions
	friend std::ostream& operator<<(std::ostream& out, const String& str);
	friend std::istream& operator >> (std::istream& in, String& str);

};

