// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

int main()
{
	double west{ 36364.87 };
	double midWest{ 12431.33 };
	double east{ 127690.50 };
	double south{ 9200.00 };

	std::cout.precision(2);
	std::cout.setf(std::ios::fixed);
	std::cout.imbue(std::locale("en-US"));

	std::cout.width(8);
	std::cout << std::right << "West:" << std::setw(2) << "$" << std::setw(10) << west << std::endl;


	std::cout << std::right << "Midwest:" << std::setw(2) << "$" << std::setw(10) << midWest << std::endl;


	std::cout.width(8);
	std::cout << std::right << "east:" << std::setw(2) << "$" << east << std::endl;


	std::cout.width(8);
	std::cout << std::right << "south:" << std::setw(2) << "$" << std::setw(10) << south << std::endl;



	return 0;
}