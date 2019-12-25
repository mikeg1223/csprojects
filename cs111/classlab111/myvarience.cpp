#include <iostream>

using namespace std;

double varience(int a[], int size2);
int poly(int a[], int size2, int x);
int size(int a[]);

int main()
{
	int b[] = {3, 5, 7, 11, 13, 17, 19, 23, 29};
	cout << poly(b, 9, 3) << endl;
	return 0;
}
double varience(int a[], int size2)
{
	double total = 0.0;
	for (int i = 0; i < size2; ++i)
		total += a[i];
	double avg = total/size2;
	double total2 = 0;
	for (int i = 0; i < size2; ++i)
	{
		total2 += ((a[i] - avg) * (a[i] - avg));
	}
	return (total2/(size2 - 1));
}
int poly(int a[], int size2, int x)
{
	int prod = a[size2 - 1]; /*prod = 1;
	for(int i = size2-1; i > 0; --i)
	  {
	 	if(int i == size2-1)
	 	{
	 		prod = a[i]
	 	}
	 	else
	 	{
	 		prod = x*(a[i]+prod)
	 	}
	  }
	 
	for(int i = 0; i < size2; ++i)
	{
		total += a[i]*prod;
	        prod *= x;
	}*/
	for(int i = size2 - 2; i >= 0; --i)
	{
		prod = x*(a[i] + prod);
	}

	return prod;
}
int size(int a[])
{
	int total = a[0];
	for(int i = 1; a[i]; ++i)
	{
		++total;
	}
	return total;
}
