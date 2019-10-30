#include <iostream>

using namespace std;

int main()
{
	int diamond = 0;
	do
	{
		cout << "Enter a diamond size: ";
		cin >> diamond;
	} while (diamond < 0 || diamond > 15);
	for (int ii = 0; ii < diamond; ++ii)
	{
		for (int i = diamond; i > ii ; --i)
		{
			cout << " ";
		}
		for (int j = 0; j < ii; ++j)
		{
			cout << "X";
		}
		for (int k = 0; k < ii; ++k)
		{
			cout << "X";
		}
		cout << endl;
	}
	for (int jj = 0; jj < diamond-1; ++jj)
	{
		for (int y = 1; y < jj; ++y)
			cout << " "
		for(int x = diamond - 1; x > jj; ++jj)
			cout << "X";
	}
	return 0;
		
}

