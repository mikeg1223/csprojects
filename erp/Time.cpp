#include <iostrean>
#include <cstdlib>
#include "Time.h"
		
Time::Time() : hour(0), minute(0), second(0)
{}
Time::Time(const int h, const int m, const int s)
{
	if( h < 0 || h > 23)
	{
		std::cout << "Invalid creation of Time: " << h << ":" << m << ":" << s << std::endl;
		std::cout << "Hours set to 0";
		hour = 0;
	}
	else
	{
		hour = h;
	}
	if( m < 0 || m > 59)
	{
		std::cout << "Invalid creation of Time: " << h << ":" << m << ":" << s << std::endl;
		std::cout << "Minuites set to 0";
		minute = 0;
	}
	else
	{
		minute = m;
	}
	if( s < 0 || s > 59)
	{
		std::cout << "Invalid creation of Time: " << h << ":" << m << ":" << s << std::endl;
		std::cout << "Seconds set to 0";
		second = 0;
	}
	else
	{
		second = s;
	}
}
std::istream& operator >> (std::istream& in, Time& input);
{
	std::cout << "Please enter the hours (0-23): ";
	in >> input.hour;
	if(in.fail())
	{
		std::cout << "non-number entered... exiting...";
		exit(1);
	}
	in.ignore();
	while (input.hour < 0 || input.hour > 23)
	{
		std::cout << "Entered amount out of bounds... Please enter the hours (0-23): ";
		in >> input.hour;
		if(in.fail())
		{
			std::cout << "non-number entered... exiting...";
			exit(1);
		}
		in.ignore();
	}
	std::cout << "Please enter the minutes (0-59): ";
	in >> input.minute;
	if(in.fail())
	{
		std::cout << "non-number entered... exiting...";
		exit(1);
	}
	in.ignore();
	while (input.minute < 0 || input.minute > 59)
	{
		std::cout << "Entered amount out of bounds... Please enter the minutes (0-59): ";
		in >> input.hour;
		if(in.fail())
		{
			std::cout << "non-number entered... exiting...";
			exit(1);
		}
		in.ignore();
	}
	std::cout << "Please enter the seconds (0-59): ";
	in >> input.second;
	if(in.fail())
	{
		std::cout << "non-number entered... exiting...";
		exit(1);
	}
	in.ignore();
	while (input.second < 0 || input.second > 59)
	{
		std::cout << "Entered amount out of bounds... Please enter the seconds (0-59): ";
		in >> input.hour;
		if(in.fail())
		{
			std::cout << "non-number entered... exiting...";
			exit(1);
		}
		in.ignore();
	}
	return in;
}
std::ostream& operator << (std::ostream& out, Time& output)
{
	out << output.hour << ":" << output.minute << ":" output.second;
	return out;
}
