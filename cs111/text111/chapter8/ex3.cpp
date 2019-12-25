#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

void convert_to_lower(char *s);

int main()
{
	char s[100];
	
	cout << "Enter string to conver to Uppercase & press enter: ";
	cin.getline(s, 100);

	convert_to_lower(s);
	cout << "The Converted string is: " << endl;
	cout << s << endl;

	return 0;
}
void convert_to_lower(char *s)
{
	while (*s++)
		s = tolower(s);
}
