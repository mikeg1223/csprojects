#include <iostream>
#include <cmath>

bool isPrime(int m);
void printPrimes();

int main()
{
	printPrimes();
	return 0;
}

bool isPrime(int input)
{
	int limit = sqrt(input);
	for(int i = 2; i <= limit; ++i)
	{
		if(!(input%i))
		{
			return false;
		}
	}
	return true;
}
void printPrimes()
{
	int n = 0;
	while(n < 1)
	{
	std::cout << "Please enter a number to print until: ";
	std::cin >> n;
	}
	for(int i = 2; i <= n; ++i)
	{
		if(isPrime(i))
		{
			std::cout << i << " ";
		}
	}
}
