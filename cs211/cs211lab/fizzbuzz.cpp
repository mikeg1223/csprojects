#include <iostream>

void printFB(int n);

int main()
{
	int x = 0;
	while (x < 1)
	{
		std::cout << "Please enter a positive value: ";
		std::cin >> x;
	}
	printFB(x);
	return 0;
}
void printFB(int n)
{
	for(int i = 1; i <= n; ++i)
	{
		if(!(i%3) && !(i%5))
		{
			std::cout << "FizzBuzz" << std::endl;	
		}
		else if(!(i%3))
		{
			std::cout << "Fizz" << std::endl;
		}
		else if(!(i%5))
		{
			std::cout << "Buzz " << std::endl;
		}
		else
		{
			std::cout << i << std::endl;
		}
	}
}
