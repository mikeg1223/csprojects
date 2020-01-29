#include <iostream>
#include <cmath>

void printPerfect();
bool isPerfect(int input);

int main()
{
	printPerfect();
	return 0;
}

//A perfect number is a number whose proper divisors total to it. This funcitons tests this property.
bool isPerfect(int input)
{
	int compare = 1, limit = input/2;
	for(int i = 2; i <= limit; ++i)
	{
		if(!(input%i))
		{
			compare += i;
		}
	}
	if(compare == input)
	{return true;}
	else
	{return false;}
}

//this function will print all perfect numbers up to a given n
void printPerfect()
{
	int n = 0;
	while(n < 1)
	{
		std::cout << "Please enter a number to test Perfect Numbers until: ";
		std::cin >> n;
	}
	std::cout << 1 << " ";
	for(int i = 2; i <= n; ++i)
	{
		if(isPerfect(i))
		{
			std::cout << i << " ";
		}
	}
}

