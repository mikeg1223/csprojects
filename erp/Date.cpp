
#include <iostream>
#include <cstdlib>
#include "Date.h"

Date::Date() : month(1), day(1), year(1900)
{}
Date::Date(const int m, const int d, const int y)
{
	int hold = 0;
	if (m < 1 || m > 12)
	{
		hold = m;
		while (hold < 1 || hold > 12)
		{
			std::cout << "Month value is incorrect for: " << m << "/" << d << "/" << y << std::endl;
			std::cout << "Please enter a valid value (1-12): ";
			std::cin >> hold;
			if(std::cin.fail())
			{
				std::cout << "Non-number entered... exiting...";
				exit(1);
			}
			std::cin.ignore();
		}
		month = hold;
	}
	else
	{
		month = m;
	}
	if (d < 1 || d > 31)
	{
		hold = d;
		while (hold < 1 || hold > (month == 2 ? 28 : 31))
		{
			std::cout << "Day value is incorrect for: " << m << "/" << d << "/" << y << std::endl;
			std::cout << "Please enter a valid value (1-31 or 1-28 if February): ";
			std::cin >> hold;
			if(std::cin.fail())
			{
				std::cout << "Non-number entered... exiting...";
				exit(1);
			}
			std::cin.ignore();
		}
		day = hold;
	}
	else
	{
		day = d;
	}
	if (y > 2020)
	{
		hold = y;
		while (hold > 2020)
		{
			std::cout << "Year value is incorrect for: " << m << "/" << d << "/" << y << std::endl;
			std::cout << "Please enter a valid value (< 2020): ";
			std::cin >> hold;
			if(std::cin.fail())
			{
				std::cout << "Non-number entered... exiting...";
				exit(1);
			}
			std::cin.ignore();
		}
		year = hold;
	}
	else
	{
		year = y;
	}
}
std::istream& operator >> (std::istream& in, Date& input)
{
	int hold = 0;
	std::cout << "Please enter a month value (1-12): ";
	in >> hold;
	if(in.fail())
	{
		std::cout << "Non-number entered... exiting... ";
		exit(1);
	}
	in.ignore();
	while (hold < 1 || hold > 12)
	{
		std::cout << "Please enter a valid value (1-12): ";
		in >> hold;
		if(in.fail())
		{
			std::cout << "Non-number entered... exiting...";
			exit(1);
		}
		in.ignore();
	}
	intput.month = hold;
	std::cout << "Please enter a day value (1-31): ";
	hold = 0;
	in >> hold;
	if(in.fail())
	{
		std::cout << "Non-number entered... exiting..";
		exit(1);
	}
	in.ignore();
	while(hold < 1 || hold > (input.month == 2 ? 28 : 31))
	{
		std::cout << "Please enter a valid value (1-31 or 1-28 if February): ";
		in >> hold;
		if(in.fail())
		{
			std::cout << "Non-number entered... exiting...";
			exit(1);			
		}
		in.ignore();	
	}
	input.day = hold;
	hold = 0;
	std::cout << "Please enter the year (<2020): ";
	in >> hold;
	if(in.fail())
	{
		std::cout << "Non-number entered... exiting..";
		exit(1);
	}
	in.ignore();
	while(hold > 2020)
	{
		std::cout << "Please enter a valid value less than 2020: ";
		in >> hold;
		if(in.fail())
		{
			std::cout << "Non-number entered... exiting...";
			exit(1);			
		}
		in.ignore();	
	}
	input.year = hold;
	return in;
}
std::ostream& operator << (std::ostream& out, Date& output)
{
	out << output.month << "/" << output.day << "/" << output.year;
	return out;
}
