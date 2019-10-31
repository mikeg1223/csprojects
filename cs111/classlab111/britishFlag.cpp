#include <iostream>

using namespace std;

int main()
{
int r = 0;
do
{
cout << "Lets make a flag! Enter a valid size category (5-25) : ";
cin >> r;
} while (r < 5 || r > 30);
for (int i = 0; i < r; ++i)
{
    for (int j = 0; j < 2*i + 1; ++j)
    {
        cout << "X";
    }
    for (int m = 0; m < (r/4); ++m)
    {
        cout << ".";
    }
    for (int t = 0;t <(r/3); ++t)
    {
        cout << "@";
    }
    for(int mm = 0; mm < (r/2); ++mm)
    {
    cout << ".";
    }
    for (int jj = 2*r; jj > 2*i+1; --jj)
    {
        cout << "X";
    }
    for (int mmm = 0; mmm < (r/3); ++mmm)
    {
        cout << ".";
    }
    for (int tt = 0; tt < (2*r/3); ++tt)
    {
        cout << "@";
    }
    for (int mmmm = 0; mmmm < (r/3); ++mmmm)
    {
        cout << ".";
    }
    for (int jjj = 2*r; jjj > 2*i+1; --jjj)
    {
	    cout << "X";
    }
    for (int mV = 0; mV< (r/4); ++mV)
    {
	    cout << ".";
    }
    for (int ttt = 0; ttt < (r/3); ++ttt)
    {
	    cout << "@";
    }
    for (int mVI = 0; mVI < (r/2); ++mVI)
    {
	    cout << ".";
    }
    for (int jIV = 0; jIV < 2*i+1; ++jIV)
    {
	    cout <<"X";
    }
    cout << endl;
}
for (int ii = 0; ii < r/6+1; ++ii)
{
	for (int mVII = 0; mVII < 2*r+r/4+2*(r/3)+r/2; ++mVII)
	{
		cout << ".";
	}
	for (int tIV = 0; tIV < 2*r/3; ++tIV)
	{
		cout << "@";
	}
	for (int mVIII = 0;mVIII < 2*r+r/4+2*(r/3)+r/2; ++ mVIII)
	{
		cout << ".";
	}
	cout << endl;
}
for (int iii = 0; iii < r/3+1; ++iii)
{
	for ( int tV = 0; tV < 2*(2*r+r/4+2*(r/3)+r/2)+2*r/3 ; ++tV)
	{
		cout << "@";
	}
	cout << endl;
}
for (int iIV = 0; iIV < r/6+1; ++iIV)
{
	for (int mIX = 0; mIX < 2*r+r/4+2*(r/3)+r/2; ++mIX)
	{
		cout << ".";
	}
	for (int tVI = 0; tVI < 2*r/3; ++tVI)
	{
		cout << "@";
	}
	for (int mX = 0;mX < 2*r+r/4+2*(r/3)+r/2; ++ mX)
	{
	 	cout << ".";
	}
 	cout << endl;
}
for (int iV = 0; iV < r; ++iV)
{
	for (int jV = 2*r; jV > 2*iV+1; --jV)
	{
		cout << "X";
	}
	for (int mXI = 0; mXI < r/2; ++mXI)
	{
		cout << ".";
	}
	for (int tVII = 0; tVII < r/3; ++tVII)
	{
		cout << "@";
	}
	for (int mXII = 0; mXII < r/4; ++mXII)
	{
		cout << ".";
	}
	for (int jVI = 0; jVI < 2*iV+1; ++jVI)
	{
		cout << "X";
	}
	for (int mXIII = 0; mXIII < r/3; ++mXIII)
	{
		cout << ".";
	}
	for (int tVIII = 0; tVIII < 2*r/3; ++tVIII)
	{
		cout << "@";
	}
	for (int mXIX = 0; mXIX < r/3; ++mXIX)
	{
		cout << ".";
	}
	for (int jVII = 0; jVII < 2*iV+1; ++jVII)
	{
		cout << "X";
	}
	for (int mXX = 0; mXX < r/2; ++mXX)
	{
		cout << ".";
	}
	for (int tIX = 0; tIX < r/3; ++tIX)
	{
		cout << "@";
	}
	for (int mXXI = 0; mXXI < r/4; ++mXXI)
	{
		cout << ".";
	}
	for (int jVIII = 2*r; jVIII > 2*iV+1; --jVIII)
	{
		cout << "X";
	}
	cout << endl;
}
return 0;
}


