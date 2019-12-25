#include <iostream>

using namespace std;

bool isPal(int a);
int largestPal(int b), size(int d), power(int m);

int main()
{
	cout << "Please enter an amount of decimals to compute ";
	int r = 0; 
	while (r < 1)
	{
		cout << endl << "Must be larger than 0: ";
		cin >> r;
	}
	cout << "The largest Palindrome created from the product of two " << r << " digit numbers is: " << largestPal(r);
	return 0;
}
int power(int m)
{
	int x = 9;
	for(int i = 1; i < m; ++i)
	{
		x = x*10 + 9;
	}
	return x;
}
int size(const int d)
{
	int f = 0;
	for (int e = d; e; e /= 10)
	{
		++f;
	}
	return f;
}
bool isPal(const int a)
{
	int x[size(a)];
	for(int i = a, j = size(a)-1; i; i /= 10, --j)
	{
		x[j] = i%10;
	}
	for(int i = 0, j = size(a)-1; i < j; ++i, --j)
	{
		if(x[i] != x[j])
			return false;
	}
	return true;

}
int largestPal(int b)
{
	int q = power(b);
	int large = 0;
	for (int i = q; i > 0; --i)
	{
		for(int j = q; j > 0; --j)
		{
			if(isPal(i*j) && i*j > large)
				large = i*j;
		}
	}
	return large;
}
