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
	void removeBook() {
		String header, autor;
		std::cout << "Removing book\n";
		std::cout << "Please enter book's header and author\n";
		std::cin >> header >> autor;
		Book newBook = onlineLibrary.findBookByHeader(header);
		onlineLibrary.remove(newBook);
	}
	
	//EXECURE REMOVE
	//EXECURE SORT BY 4 DIFFERENT TYPES
	//EXECUTE FINDBOOK
};