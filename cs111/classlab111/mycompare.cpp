#include <iostream>

using namespace std;

int mycmp(const char *str, const char * str1);
int find(const char *str, char c);

int main()
{
	char a[100], b[100];
	cout << "Testing two words" << endl << "0 = identical, > 0 means by ascii word 2 comes first, < 0 by ascii word 1 comes first" << endl; 
	cout << "Enter two words: " << endl << "Word 1: ";
	cin >> a;
	cout << "Word 2: ";
	cin >> b;
	cout << mycmp(a,b);
	return 0;
}
int mycmp(const char *str, const char *str1)
{	
	for(int i = 0; str[i] && str1[i]; ++i)
	{
	 	if(str[i] != str1[i])
		{
			return (str[i]-str1[i]);
		}
	}	
	return 0;
}
