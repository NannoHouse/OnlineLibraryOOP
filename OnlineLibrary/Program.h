#pragma once
#include "Library.h"
#include"DBManager.h"
#include "Book.h"
class Program {
private:
	Library onlineLibrary;
public:
	void start()
	{
		DBManager::readLibraryInfoFromDB(onlineLibrary);
	}
	void executeAdd() {
		Book newBook;
		std::cout << "Enter book informating: ";
		std::cin >> newBook;
		onlineLibrary.add(newBook);
	}
	void executeRemoveBook() {
		String header, autor;
		long long isbn;
		std::cout << "Removing book\n";
		std::cout << "Please enter book's header and author\n";
		std::cin >> header >> autor>>isbn;
		//Book newBook = onlineLibrary.findBookByHeader(header);
		//onlineLibrary.remove(newBook);
		onlineLibrary.remove(header,autor,isbn);
	}
	void executeFindBook() {
		std::cout << "Please choose a way of search : \n 1- by header; 2- by author; 3- by ISBN; 4 - by description";
		unsigned int commandnumber;
		String imput;
		unsigned long long _ISBN;
		std::cin >> commandnumber;
		switch (commandnumber)
		{ case 1:
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
			std::cout << "Please enter short description : ";
			std::cin >> imput;
			onlineLibrary.findBookByShortDescription(imput);
			break;
		default:"Command not found";
			break;
		}
	}
	void executeSort() {
		std::cout << "Chose way for sorfing: 1- ascending; 2- descending \n";
		unsigned commandnumber;
		std::cin >> commandnumber;
		std::cout << "Chose criteria for sorfing: 1- header; 2- author; 3-ISBN:  \n";
		std::cin >> commandnumber;
		switch (commandnumber)
		{ case 1:

			break;
		case 2:
			break;
		case 3:
			break;
		default: std::cout << "Sorting not executed - error!!!\n";
			break;
		}
	}
	void executePrint() {
		onlineLibrary.printLibrary();
	}
	//EXECURE SORT BY 4 DIFFERENT TYPES
	//EXECUTE FINDBOOK
};