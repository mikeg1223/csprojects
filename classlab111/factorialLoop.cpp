#include <iostream>

using namespace std;

void factorial(int f);

int main()
{
	int x = 0;
	do
	{
		cout << "Please enter a positive integer: ";
		cin >> x;
	} while (x < 1);
	factorial(x);
	return 0;
}

void factorial(int f)
{
	int returnv = 1;
	cout << "n = " << f << endl;
	for (int m = 1; m <= f; m++)
	{
		cout << m << "! = ";
		for ( int n = 1; n <= m; n++)
		{
			cout << n;
			if (m==1 || m==n)
			{
				cout << "";
			}
			else 
			{
				cout << " * ";
			}
		}
		returnv *= m;
		cout << " = " << returnv << endl;
	}
}
