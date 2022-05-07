#include<stdio.h>
#include <conio.h>
#include "String.h"
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
	String str("If"), str2(" Antonov");

	str.add(" Antonov");

	//String result = str + str2;

	std::cout << "fsgvadv" << std::endl;
	std::cout << str << std::endl;
	std::cout << "fsgvadv" << std::endl;



	return 0;
}
