// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

int main()
{
	std::cout.precision(5);
	//Read user input from std::cin with a prompt for a number "Enter a number: ". 
	//Display the number back to std::cout with the format in scientific notation.


	double num{};
	std::cout << "Enter a number: ";
	std::cin >> num;
	std::cout << std::scientific << num << std::endl; //Code come from the following address http://en.cppreference.com/w/cpp/io/manip/fixed


	/* ->my original code<-
	std::cout << "Enter a number: ";
	std::cin >> num;
	std::cout.scientific;
	std::cout << num << std::endl;
	*/


	return 0;
}
