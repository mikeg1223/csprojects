#include <iostream>
#include <cstdlib>
#include "Terms.h"

Terms::Terms() : days(30), discount(0.0)
{
}
Terms::Terms(const int d, const int dd, const double dis)
{
	double h = dis;
	int hold = dd;
	while (hold < 1)
	{
		std::cout << "Please enter a valid value of days for discount payment (>1): ";
		std::cin >> hold;
		if(std::cin.fail())
		{
			std::cout << "Non-number entered... exiting ...";
			exit(1);
		}
		std::cin.ignore();
	}
	daysDisc = hold;
	while (h < 0.0 || h > 100.0)
	{
		std::cout << "Please enter a valid value of discount (0.0 - 100.0): ";
		std::cin >> h;
		if(std::cin.fail())
		{
			std::cout << "Non-number entered... exiting ...";
			exit(1);
		}
		std::cin.ignore();
	}
	discount = h;
	hold = d;
	while (hold < 1)
	{
		std::cout << "Please enter a valid value of days for net payment (>1): ";
		std::cin >> hold;
		if(std::cin.fail())
		{
			std::cout << "Non-number entered... exiting ...";
			exit(1);
		}
		std::cin.ignore();
	}
	days = hold;
}
int Terms::getDays()
{
	return days;
}
double Terms::getDiscount()
{
	return discount;
}
std::istream& operator >> (std::istream& in, Terms& input)
{
	
	double h = 0.0;
	int hold = 0;
	std::cout << "Please enter the days for discount payment: ";
	in >> hold;
	if(in.fail())
	{
		std::cout << "Non-number entered... exiting ...";
		exit(1);
	}
	in.ignore();
	while (hold < 1)
	{
		std::cout << "Please enter a valid value of days for discount payment (>1): ";
		in >> hold;
		if(in.fail())
		{
			std::cout << "Non-number entered... exiting ...";
			exit(1);
		}
		in.ignore();
	}
	input.daysDisc = hold;
	std::cout << "Please enter the discounted rate (0.0 - 100.0): ";
	in >> h;
	if(in.fail())
	{
		std::cout << "Non-number entered... exiting...";
		exit(1);
	}
	in.ignore();
	while (h < 0.0 || h > 100.0)
	{
		std::cout << "Please enter a valid value of discount (0.0 - 100.0): ";
		in >> h;
		if(in.fail())
		{
			std::cout << "Non-number entered... exiting ...";
			exit(1);
		}
		in.ignore();
	}
	input.discount = h;
	std::cout << "Please enter the days for net payment: ";
	in >> hold;
	if(in.fail())
	{
		std::cout << "Non-number entered... exiting...";
		exit(1);
	}
	in.ignore();
	while (hold < 1)
	{
		std::cout << "Please enter a valid value of days for net payment (>1): ";
		in >> hold;
		if(in.fail())
		{
			std::cout << "Non-number entered... exiting ...";
			exit(1);
		}
		in.ignore();
	}
	input.days = hold;
	return in;
}
std::ostream& operator << (std::ostream& out, const Terms& output)
{
	out << output.discount << "/" << output.daysDisc << "NET" << output.days;
	return out;
}
