#pragma once
#include<cstring>
#include<iostream>
const int Add = 1;
const int RemoveBook = 2;
const int SortLibrary = 3;
const int endProgram = 5;
const int help = 6;
const int notFound = 0;
class CommandHelper {
public:
	static void printCommands();
	static int getCommand(const char* command);

};
int CommandHelper::getCommand(const char* command)
{
	if (strcmp(command, "add") == 0)
	{
		return Add;
	}
	else if (strcmp(command, "remove") == 0)
	{
		return RemoveBook;
	}
	else if (strcmp(command, "sortBooks") == 0)
	{
		return SortLibrary;
	}
	else if (strcmp(command, "exit") == 0)
	{
		return endProgram;
	}
	else if (strcmp(command, "help") == 0)
	{
		return help;
	}
	else
	{
		return notFound;
	}
}

void CommandHelper::printCommands() {
	std::cout << "1.Add - adds a student to db\n2.Remove a book\n3.Sort Library books\n4.Exit program\n.5.Help\3\n"; 
}