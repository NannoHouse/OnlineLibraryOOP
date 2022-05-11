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
		onlineLibrary.add(newBook);
	}
	void removeBook() {

	}
	//EXECURE REMOVE
	//EXECURE SORT BY 4 DIFFERENT TYPES
	//EXECUTE FINDBOOK
};