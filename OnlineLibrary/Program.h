#pragma once
#include "Library.h"
#include <iostream>
#include <fstream>
class Program {
private:
	Library onlineLibrary;
public:
	void read()
	{
		std::ifstream in;
		in.open("libraryStorage.txt");
		if (in)
		{
			int size;
			Book book;
			String imput;
			double number;
			unsigned long long isbn;
			in >> size;
			in.ignore();
			for (int i = 0; i < size; i++)
			{
				in >> imput;
				book.setAuthor(imput);
				in >> imput;
				book.setHeader(imput);
				in >> imput;
				book.setShortDescription(imput);
				in >> number;
				book.setRating(number);
				in >> isbn;
				book.setISBN(isbn);
				in.ignore();
				onlineLibrary.add(book);
			}
		}
		else {
			std::cout << "Error at opening file\n";
		}
		in.close();
		std::cout << "We're read the files successfully!\n";
	}
	void executeAdd() {
		Book newBook;
		std::cout << "\nEnter book informating: " << std::endl;
		std::cin >> newBook;
		if (validateISBN(newBook.getISBN()))
		{
		onlineLibrary.add(newBook);
		std::cout << "Added!" << std::endl;
		}
		else {
			std::cout << "\nThis isbn Already exists! \nYour book won't be added!\n";
		}
	}
	void executeRemoveBook() {
		String header, autor;
		long long isbn;
		std::cout << "\nPlease enter book's header, author and isbn:" << std::endl;
		std::cin >> header >> autor >> isbn;
		onlineLibrary.remove(header, autor, isbn);
	}
	void executeFindBook() {
		std::cout << "\nPlease choose a way of search : \n 1- by header; 2- by author; 3- by ISBN; 4 - by description" << std::endl;

		unsigned int commandnumber;
		String imput;
		unsigned long long _ISBN;

		do
		{
			std::cin >> commandnumber;
		} while (commandnumber != 1 && commandnumber != 2 && commandnumber != 3 && commandnumber != 4);
		std::cin.ignore();

		switch (commandnumber)
		{
		case 1:
			std::cout << "Please enter header: ";
			std::cin >> imput;
			onlineLibrary.findBookByHeader(imput);
			break;
		case 2:
			std::cout << "Please enter author: ";
			std::cin >> imput;
			onlineLibrary.findBookByAuthor(imput);
			break;
		case 3:
			std::cout << "Please enter ISBN: ";
			std::cin >> _ISBN; //validate imput
			onlineLibrary.findBookByISBN(_ISBN);
			break;
		case 4:
			std::cout << "Please enter short description: ";
			std::cin >> imput;
			onlineLibrary.findBookByShortDescription(imput);
			break;
		default:"Command not found";
			break;
		}
	}
	void executeSort() {

		std::cout << "\nChose way for sorfing: 1- ascending; 2- descending" << std::endl;
		unsigned commandnumber;
		do
		{
			std::cin >> commandnumber;
		} while (commandnumber != 1 && commandnumber != 2);
		std::cin.ignore();
		bool sortDescending = false;
		if (commandnumber == 2)
		{
			sortDescending = true;
		}

		std::cout << "\nChose criteria for sorting: 1- header; 2- author; 3-ISBN:" << std::endl;
		do
		{
			std::cin >> commandnumber;
		} while (commandnumber != 1 && commandnumber != 2 && commandnumber != 3);
		std::cin.ignore();
		switch (commandnumber)
		{
		case 1:
			if (sortDescending)
			{
				onlineLibrary.sortByHeader();
				onlineLibrary.sortDescending();
				onlineLibrary.printLibrary();
			}
			else {
				onlineLibrary.sortByHeader();
				onlineLibrary.printLibrary();
			}
			break;
		case 2:
			if (sortDescending)
			{
				onlineLibrary.sortByAuthor();
				onlineLibrary.sortDescending();
				onlineLibrary.printLibrary();
			}
			else {
				onlineLibrary.sortByAuthor();
				onlineLibrary.printLibrary();
			}
			break;
		case 3:
			if (sortDescending)
			{
				onlineLibrary.sortByISBN();
				onlineLibrary.sortDescending();
				onlineLibrary.printLibrary();
			}
			else {
				onlineLibrary.sortByISBN();
				onlineLibrary.printLibrary();
			}
			break;
		default: std::cout << "Sorting not executed - error!!!" << std::endl;
			break;
		}
	}
	void executePrint() {
		onlineLibrary.printLibrary();
	}
	void Save() {
		std::ofstream out;
		out.open("libraryStorage.txt");
		if (out)
		{
			int size = onlineLibrary.getSize();
			out << size << std::endl;
			for (int i = 0; i < size; i++)
			{
				out << onlineLibrary.getBookAtIndex(i);
			}
		}
		else {
			std::cout << "An error occured while opening the files!" << std::endl;
		}
		out.close();

		std::cout << "Successfully saved all the information\n";
	}
	bool validateISBN( unsigned long long isbn) {
		int size = onlineLibrary.getSize();
		for (int i = 0; i < size; i++)
		{
			if (onlineLibrary.getBookAtIndex(i).getISBN() == isbn)
			{
				return false;
			}
		}
		return true;
	}
};

