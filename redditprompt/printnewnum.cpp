#include <iostream>
#include <cstring>

using namespace std;

void addtoeachdigit();

int main()
{
	addtoeachdigit();
	return 0;
}
void addtoeachdigit()
{
	int x = 0;
	do
	{
		cout << "Enter a positive number: ";
		cin >> x;
	} while (x < 1);
	int l = 0, k = x, m = 1;
	while (k > 0)
	{
		++l;
		m *= 10;
		k /= 10;
	}
	for(int j = 0, n = m/10; j < l; ++j, n /= 10)
	{
		cout <<  (x/n)%10 + 1;
	}
}
