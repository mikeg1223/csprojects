#include <iostream>
#include <cstring>

using namespace std;

//same as strlen()
int get_length(char s[])
{
	int length = 0;
	while (s[length])
	{
		++length;
	}
	return length;
}

int main ()
{
	char print[20] = "Hello";
	char t[] = " World";

	/* //this runs the same as strcat
	 * int i = 0
	 * while (print[i]) ++i;
	 * for(int j = 0; t[j]; ++i, ++j)
	 * { 
	 * 	print[i]  = t[j];
	 * }
	 * print[i] = 0;
	*/
	   strcat(print, t);

	cout << strlen(print);
	
}
//Homework is to manually write a string compare (strcmp)
