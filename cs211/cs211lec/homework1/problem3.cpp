#include <iostream>
#include <cmath>

bool isLeap(int input);
void printLeap();

int main()
{
	printLeap();
	return 0;
}

// To test if a year is a leap year
bool isLeap(int input)
{
	if(!(input%400))
	{return true;}
	else if((!(input%4)) && input%100)
	{return true;}
	else
	{return false;}
}

//to print leap years in a user chosen range
void printLeap()
{
	int start = 0, end = 0;
	while (start < 1)
	{
		std::cout << "Please enter a starting year: ";
		std::cin >> start;
	}
	while (end < start)
	{
		std::cout << "Please enter an ending year after starting year: ";
		std::cin >> end;
	}
	std::cout << "Printing leap years: " << std::endl;
	for(int i = start, k = 0; i <= end; ++i)
	{
		if(isLeap(i))
		{
			std::cout << i << " ";
			++k;
			if(!(k%5))
			{ std::cout << std::endl;}
		}
	}
}

		
