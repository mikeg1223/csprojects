#include <iostream>
#include <cstring>
#include <cmath>
#include <cstdlib>

using namespace std;

double get_number();

int main()
{
	int x = 0;

	while(1)
	{
		cout << "Enter a num (press ENTER to Exit): ";
		x = get_number();
		if (x == 0)
			break;
		cout << "Square root of x is: " << sqrt(x);
		cout << endl;
	}
	return 0;
}
// get number fcn
// get number input by the user, taking only the first numeric input entered.
// if user presses enter with no input, then return a default 0 value
double get_number()
{
	char s[100];
	cin.getline(s, 100);
	if (strlen(s) == 0)
		return 0.0;
	return atoi(s);
}
