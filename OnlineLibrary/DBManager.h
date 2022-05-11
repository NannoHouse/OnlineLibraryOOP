#pragma once
#include <iostream>
#include "Library.h"
class DBManager {
public:
	static void readLibraryInfoFromDB(Library& books);
	static void save();
};
void DBManager::readLibraryInfoFromDB(Library& books) {

	std::cout << "Data was read successfully\n";
}

void DBManager::save()
{
	std::cout << "Successfully saved all the information\n";
}