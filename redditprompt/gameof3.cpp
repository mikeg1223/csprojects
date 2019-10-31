#include <iostream>

using namespace std;

void gameof3();

int main()
{
	
	gameof3();
	return 0;
}
void gameof3()
{
	int x = 0;
	do
	{
		cout << "Enter a positive number: ";
		cin >> x;
	} while (x < 1);
	int turn = 0;
	while(x > 1)
	{
		++turn;
		if (x == 2)
		{
			cout << x << " - 1 = ";
			x -= 1;
			cout << x << "    turns = " << turn << endl;
		}
		else if (x % 3 == 0)
		{
			cout << x << " / 3 = ";
			x /= 3;
			cout << x << "    turns = " << turn << endl;
		}
		else if (x % 3 == 1)
		{	
			cout << x << " - 1 = ";
			x -= 1;
			cout << x << "    turns = " << turn << endl;
		}
		else
		{
			cout << x << " + 1 = ";
			x += 1;
			cout << x << "    turns = " << turn << endl;
		}
	
	}
	cout << "Ending game...";

}
