#include <iostream>

using namespace std;

int mult(int m);

int main()
{
	int x = 0;
	do
	{
		cout << "Enter a positive amount for x: ";
		cin >> x;
	} while (x < 1);
	cout << mult(x);
}
int mult(int m)
{
	int x = 0;
	for (int i = 1; i <= m; i++)
	{
		if(i % 3 == 0)
			x += i;
		else if (i % 5 == 0)
			x += i;
		else
			;
	}
	return x;
}
