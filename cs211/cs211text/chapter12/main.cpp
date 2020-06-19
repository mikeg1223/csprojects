#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
	string b[10];
	ifstream fin("information.txt");
	if(fin.fail())
	{
		cout << "Could not open... ";
		return 0;
	}
	for(int i = 0; i < 3; ++i)
	{
		getline(fin, b[i], '|');
	}
	fin.close();
	cout << b[0] << b[1] << b[2];
	int a[3];
	for(int i = 0; i < 3; ++i)
	{
		a[i] = 2*atoi(b[i].c_str());
	}
	ofstream fout("information.txt");
	if(fout.fail())
	{
		cout << "Could not open...";
		return 0;
	}
	for(int i = 0; i < 3; ++i)
	{
		fout << a[i] << "|";
	}
	fout.close();
	return 0;
}
