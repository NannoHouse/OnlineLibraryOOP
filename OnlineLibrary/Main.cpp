#include<stdio.h>
#include <conio.h>
#include <string>
#include "String.h"
#include "Program.h"
#include "Library.h"
#include "CommandHelper.h"

int main() {
	// ------- Password masking link to site - https://www.geeksforgeeks.org/getch-function-in-c-with-examples/
	//char psw[3];
	//
	//for (int i = 0; i < 3; i++)
	//{
	//	psw[i] = getch();
	//	printf("*");
	//}
	// ------- end of password making

	bool isAdmin = false;
	Library library;
	Book book1, book2;
	std::cin >> book1;
	std::cin >> book2;
	library.add(book1);
	library.add(book2);
	library.findBookByAuthor("ga4o");
	//std::cout << book1;
	/*
	std::cout << "welcome to our Electronic Library!" << std::endl;
	Program program;
	program.start();
	char command[32];

	int commandNumber;
	CommandHelper::printCommands();
	do {
		std::cout << "Enter your command: ";
		std::cin >> command;
		commandNumber = CommandHelper::getCommand(command);
		switch (commandNumber)
		{
		case Add: 
			program.executeAdd(); break;
		case RemoveBook: break;
		case SortLibrary: break;
		case help: CommandHelper::printCommands(); break;
		case notFound: std::cout << "Command not found, try again\n"; break;
		default: break;
		}

	} while (commandNumber != endProgram);

	DBManager::save();
	*/
	return 0;
}
