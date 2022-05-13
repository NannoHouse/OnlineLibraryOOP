#include<stdio.h>
#include <conio.h>
#include <string>
#include "String.h"
#include "Program.h"
#include "Library.h"
#include "CommandHelper.h"
const String PASSWORD = "gerito" ;
String enterPassword();
bool verify(String& password);
int main() {
	// ------- Password masking link to site - https://www.geeksforgeeks.org/getch-function-in-c-with-examples/

	// ------- end of password making

	std::cout << "welcome to our Electronic Library!" << std::endl;
	Program program;
	program.start();
	char command[32];

	int commandNumber;
	String input;
	CommandHelper::printCommands();
	do {
		std::cout << "Enter your command: ";
		std::cin >> command;
		commandNumber = CommandHelper::getCommand(command);
		switch (commandNumber)
		{
		case Add:
			input = enterPassword();
			if (verify(input))
			{
				program.executeAdd();
			}
			else {
				std::cout << "You don't have the rights to use this functions\n";
			} break;
		case RemoveBook:
			input = enterPassword();
			if (verify(input))
			{
				program.executeRemoveBook();
			}
			else {
				std::cout << "You don't have the rights to use this functions\n";
			}
			break;
		case SortLibrary:
			program.executeSort();
			break;
		case help: CommandHelper::printCommands(); break;
		case notFound: std::cout << "Command not found, try again\n"; break;
		}
	} while (commandNumber != endProgram);

	DBManager::save();

	return 0;

}
String enterPassword() {
	char psw[32];
	std::cout << "Enter password: ";
	for (int i = 0; i < 6; i++)
	{
		psw[i] = _getch();
		printf("*");
	}
	psw[6] = '\0';
	return psw;
}
bool verify(String& password) {
	if (strcmp(password.getSymbols(),PASSWORD.getSymbols())==0)
	{
		return true;
	}
	else {
		return false;
	}
}

