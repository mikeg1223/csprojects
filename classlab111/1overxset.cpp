#include <iostream>

using namespace std;

void asymtote1(int n);

int main()
{
	int x = 0;
	do
	{
		cout << "Enter a positive number: ";
		cin >> x;
	} while (x < 1);
	asymtote1(x);
	return 0;
}
void asymtote1(int n)
{
	double hold = 1.0;
	cout << "n = " << n << endl;
	for (int i = 1; i <= n; ++i)
	{
		hold = 0.0;
		cout << "Summation (1/n) to 1/" << i << " = ";
		for (int j = 1; j <= i; ++j)
		{
			hold += (1.0/j);
			cout << "1/" << j;
			if(i == 1 || i == j)
				cout << "";
			else
				cout << " + ";
		}
		cout << " = " << hold << endl;
	}
}
