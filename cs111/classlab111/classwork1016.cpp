#include <iostream>

using namespace std;

int addints(), multints(), menu();

int main()
{
	switch (menu())
	{
		case 1: {cout << addints(); break;}
		case 2: {cout << multints(); break;}
	}	
	return 0;
}
int menu()
{
	cout << "|~~~~~~~~~~~~~~~~~~~~~~~~~|" << endl;
	cout << "|WELCOME TO SOME BASI SHIT|" << endl;
	cout << "|MAKE A CHOICE:           |" << endl;
	cout << "| 1. Add                  |" << endl;
	cout << "| 2. Multiply             |" << endl;
	cout << "|_________________________|" << endl;
	int fuckit = 0;
	cin >> fuckit;
	while (fuckit != 1 && fuckit != 2)
	{
		cout << "Do Better, choose again: ";
		cin >> fuckit;
	}
	return fuckit;

}
int addints()
{
	cout << "Enter your desired amount of numbers to add: ";
	int intamt = 0;
	cin >> intamt;
	while (intamt < 2 || intamt > 7)
	{
		cout << "Must have more between 2 and 7 numbers to add:  ";
		cin >> intamt;
	}
	const int c = intamt;
	int addit[c], m = 0;
	for (int i = 0; i < intamt; ++i)
	{
		cout << "Enter number " << i << ": ";
		cin >> addit[i];
		m += addit[i];
	}
	cout << endl << "equals: ";
	return m;
}
int multints()
{
	cout << "Enter your desired amount of numbers to multiply: ";
	int intamt = 0;
	while (intamt < 2 || intamt > 7)
	{
		cout << "Must have between 2 and 7 numbers to add: ";
		cin >> intamt;
	}
	const int c = intamt;
	int multit[c], m = 0;
	for (int i = 0; i < intamt; ++i)
	{
		cout << "Enter number " << i << ": ";
		cin >> multit[i];
		m *= multit[i];
	}
	cout << endl << "equals: ";
	return m;
}
