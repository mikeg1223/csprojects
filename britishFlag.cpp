#include <iostream>

using namespace std;

int main()
{
int r = 0, c;
do
{
cout << "Enter a positive number of rows: ";
cin >> r;
} while (r < 1);
c = r;
for (int i = 0; i < r; ++i)
{
    for (int j = 0; j+4 < 2*i + 1; ++j)
    {
        cout << "X";
    }
    for (int m = 0; m < (r/4) && i > 1; ++m)
    {
        cout << "^";
    }
    for (int t = 0;i != 0 && t <(r/3); ++t)
    {
        cout << "@";
    }
    for(int mm = 0; mm < (r/2); ++mm)
    {
    cout << "^";
    }
    for (int jj = 2*c; jj > 2*i+1; --jj)
    {
        cout << "X";
    } //need to figure out the proper alg for the relation of this to rest
      /*  if (i<2)
    {
        for (int b = 0; b < 2-i;++b)
        {
        cout << "X";
        }
    }*/
    for (int mmm = 0; mmm < (r/3); ++mmm)
    {
        cout << "^";
    }
    for (int tt = 0; tt < (2*r/3); ++tt)
    {
        cout << "@";
    }
    for (int mmmm = 0; mmmm < (r/3); ++mmmm)
    {
        cout << "^";
    }
    //cout << "^^^@@@@@@^^^";
    cout << endl;
}
return 0;
}


