#include "String.h"
#include <iostream>
#include <string>
String::String()
{
	myString = new char[1];
	myString[0] = '\0';
}

String::String(const char* word)
{
	myString = new char[strlen(word) + 1];
	strcpy_s(myString, strlen(word) + 1, word);
}

String::String(const String& other)
{
	if (this != &other) {
		this->myString = new char[other.getSize() + 1];
		strcpy_s(myString, other.getSize()+1,other.getSymbols());
	}
	else {

		this->myString = nullptr;
	}
}

String& String::operator=(const String& other)
{
	if (this != &other)
	{
		delete[] myString;
		myString = new char[strlen(other.getSymbols()) + 1];
		strcpy_s(myString, other.getSize()+1, other.getSymbols());
	}
	return *this;
}

String::~String()
{
	delete[] myString;
}

size_t String::getSize() const
{
	if (myString)
	{
		return strlen(myString);

	}
	else
		return 0;
}

void String::print() const
{
	if (myString)
	{
		std::cout << myString;
	}
} // maybe not needed if we have cout 
void String::add(const char* str)
{
	char* temp = new char[strlen(myString) + strlen(str) + 1];
	strcpy_s(temp, strlen(myString) + strlen(str) + 1, myString);
	strcat_s(temp, strlen(myString) + strlen(str) + 1, str);
	delete myString;
	myString = temp;
}

const char* String::getSymbols() const
{
	return myString;
}

bool String::contains( const String& segment) const
{
	if (strstr(myString,segment.getSymbols()))
	{
		return true;
	}
	else {
		return false;
	}
}

String String::toLower()
{
	int i = 0;
	while (myString[i]!= '\0')
	{
		makeLowerCase(myString[i]);
	}
	return myString;
}

bool String::operator<(const String& string) const
{
	if (strcmp(this->myString,string.myString)<0)
	{
		return true;
	}
	return false;
}

bool String::operator==(const String& string) const
{
	if (strcmp(this->myString,string.myString) ==0)
	{
		return true;
	}
	return false;
}

bool String::operator!=(const String& string) const
{
	if (*this == string) {
		return false;
	}
	else 
		return true;
	
}

std::ostream& operator<<(std::ostream& out, const String& str)
{
	out << str.myString;
	return out;
}

std::istream& operator>>(std::istream& in, String& str)
{
	char* buffer = new char[1024];
	in.getline(buffer,1024);
	if (str.myString)
	{
		delete str.myString;
		str.myString = nullptr;
	}
	str.myString = new char[strlen(buffer) + 1];
	strcpy_s(str.myString, strlen(buffer) + 1, buffer);
	delete[] buffer;
	return in;
}

char makeLowerCase(char symbol)
{
		if (symbol >= 'A' && symbol <= 'Z')
			return symbol + ('a' - 'A');

		return symbol;
}
