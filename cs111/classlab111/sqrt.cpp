#include <iostream>

using namespace std;

int sqrtflr(int m);
bool isPrime(int ii);

int main()
{
	int sq = 0;
	do
	{
		cout << "Enter a number to see if it is prime: " << endl;
		cin >> sq;
	} while (sq < 2);
	if(isPrime(sq))
		cout << sq << " is prime";
	else
		cout << sq << " is not prime";
	return 0;
}
int sqrtflr(int m)
{
	int n = 0;
	for(int i = 1; i*i <= m; i++)
	{
		n = i;
	}
	return n;
}
bool isPrime(int ii)
{
	bool test = true;
	for(int i = 2; i <= sqrtflr(ii);++i)
	{
		if ( ii % i == 0)
		{
			test = false;
			break;
		}
	}
	return test;
}
