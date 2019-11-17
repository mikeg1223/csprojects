#include <iostream>

using namespace std;

//want to find the largest prime factor in a given number, print nothing for no prime factors

bool isPrime(int m);
int largestPrime(int n);

int main()
{
	int z = 0;
	cout << " Enter positive value greater than 2 and we will till you the greatest Prime Factor: ";
	do
	{
		cin >> z;
	} while (z < 3);
	cout << "The answer is: " << largestPrime(z);
	return 0;
}
bool isPrime(int m)
{
	bool test = true;
	for(int i = 2; i < m; ++i)
	{	if (m % i == 0)
		{
			return false;
		}
	}
	return true;
}
int largestPrime(int n)
{
	if (isPrime(n))
	{
		cout << "This number is prime and has no factors: ";
		return 0;
	}
	int test = 0;
	for(int i = 2; i < n; ++i)
	{
		if(n % i == 0 && isPrime(i))
		{
			test = i;
		}
	}
	return test;
}
