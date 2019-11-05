#include <iostream>

using namespace std;

int fib(int fx);

int main()
{
	int m = 0;
	do
	{
		cout << "Up to which value would you like to sum the even integers of Fibbonaccis Sequence: ";
		cin >> m;
	} while(m<2);
	cout << fib(m);
	return 0;
}

int fib(int fx)
{
	int x1 = 0, x2 = 1, fin = 0;
	for(int i = 0; 1; ++i)
	{
		int hold = x1;
		x1 = x2;
		x2 += hold;
		if (x2 > fx)
		{	
			cout << "f(" << i-1 << ") = " << x1 << " is the largest number below " << fx << endl << "The sum is: ";
			break;
		}
		else if(x2 % 2 == 0)
			fin += x2;
	}
	return fin;
}
