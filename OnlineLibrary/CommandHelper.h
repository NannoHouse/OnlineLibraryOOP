#pragma once
#include<cstring>
#include<iostream>
const int Add = 1;
const int RemoveBook = 2;
const int SortLibrary = 3;
const int FindBook = 4;
const int endProgram = 5;
const int help = 6;
const int print = 7;
const int notFound = 0;
class CommandHelper {
public:
	static void printCommands();
	static int getCommand(const char* command);

};
int CommandHelper::getCommand(const char* command)
{
	if (strcmp(command, "Add") == 0)
	{
		return Add;
	}
	else if (strcmp(command, "Remove") == 0)
	{
		return RemoveBook;
	}
	else if (strcmp(command, "SortBooks") == 0)
	{
		return SortLibrary;
	}
	else if (strcmp(command, "FindBook") == 0)
	{
		return FindBook;
	}
	else if (strcmp(command, "exit") == 0)
	{
		return endProgram;
	}
	else if (strcmp(command, "help") == 0)
	{
		return help;
	}
	else if (strcmp(command, "print") == 0)
	{
		return print;
	}
	else
	{
		return notFound;
	}
}

void CommandHelper::printCommands() {
	std::cout << "1.Add - adds a book\n2.Remove a book\n3.SortBooks\n4.FindBook \n5. Exit\n6. Help\3\n"; 
}