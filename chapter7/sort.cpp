#include <iostream>

using namespace std;

double sortit[10];
void sort(int a), swap(double *x, double *y);

int main()
{
	//init to 0
	for (int i = 0; i < 10; ++i)
	{
		sortit[i] = 0;
	}
	for (int i = 0; i < 10; ++i)
	{
		cout << "Enter a value for array element " << i << " :";
		cin >> sortit[i];
	}
	sort(10);
	cout << "Now sorted: " << endl;
	for (int i = 0; i < 10; ++i)
	{
		cout << sortit[i] << " ";
	}
	return 0;
}
void sort(int a)
{
	bool ordered = true;
	for (int i = a - 1 ; i > 0; --i)
	{       //finds lowest#, if not current --> swap;
		ordered = true;
		for (int j = 0; j < i; ++j)
		{
			if (sortit[j+1] < sortit[j])
			{
				ordered = false;
				swap(sortit[j+1], sortit[j]);
			}
		}
		if (ordered)
		{
			break;
		}
	}
}
void swap(double *x, double *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
