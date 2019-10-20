#include <iostream>

using namespace std;

int main()
{
	int c = 5, r = 0;
	do 
	{
	cout << "Choose the amount of Rows: ";
	cin >> r;
	} while (r < 0);
	for (int i = 0; i < r; ++i)
	{
		for (int j = 0; j < i; ++j)
		{
			cout << "*";
		}
		cout << endl;
	}
	for (int i = 0; i < r; ++i)
	{	
		for (int j = c; j - i > 0; --j)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
