#include<stdio.h>
#include <conio.h>
#include <string>
#include "String.h"
#include "Program.h"
#include "Library.h"
#include "CommandHelper.h"
String enterPassword();
bool verify(String& password);

const String PASSWORD = "gerito" ;

int main() {
	std::cout << "Welcome to our Electronic Library!\n" << std::endl;
	Program program;
	program.read();
	char commands[32];

	int commandNumber;
	String input;
	CommandHelper::printCommands();
	do {
		std::cout << "Enter your command: ";
		std::cin >> commands;
		commandNumber = CommandHelper::getCommand(commands);
		switch (commandNumber)
		{
		case Add:
			input = enterPassword();
			if (verify(input))
			{
				program.executeAdd();
			}
			else {
				std::cout << "\nYou don't have the rights to use this functions\n";
			} break;
		case RemoveBook:
			input = enterPassword();
			if (verify(input))
			{
				program.executeRemoveBook();
			}
			else {
				std::cout << "\nYou don't have the rights to use this functions\n";
			}
			break;
		case FindBook:
			program.executeFindBook();
			break;
		case SortLibrary:
			program.executeSort();
			break;
		case help: CommandHelper::printCommands(); break;
		case notFound: std::cout << "\nCommand not found, try again\n"; break;
		}
	} while (commandNumber != endProgram);
	program.Save();
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
	std::cin.ignore();
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

