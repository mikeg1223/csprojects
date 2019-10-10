#include <iostream>

using namespace std;

int sortit[10];
void sort(int a), swap(int *x, int *y);

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
	int low = 0;
	for (int i = 0; i < a - 1; ++i)
	{       //finds lowest#, if not current --> swap;
		low = i;
		for (int j = i + 1; j < a; ++j)
		{
			if (sortit[j] < sortit[low])
			{
				low = j;
			}
		}
		if (i != low)
		{
			swap(&sortit[i], &sortit[low]);
		}
	}
}
void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
