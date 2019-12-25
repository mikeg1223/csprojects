#include <iostream>
#include <cstring>

using namespace std;

#define STRMAX 600

int main()
{	
	//get three strins from the user
	char str[STRMAX], name[100], addr[200], work[200];
	cout << "Enter name and press ENTER: ";
	cin.getline(name, 100);
	cout << "Enter address and press ENTER: ";
	cin.getline(addr, 200);
	cout << "Enter workplace and press ENTER: ";
	cin.getline(work, 200);

	// build the output and print
	strncpy(str, "\nMy name is ", STRMAX);
	strncat(str, name, STRMAX - strlen(str));
	strncat(str, ", I live at ", STRMAX - strlen(str));
	strncat(str, addr, STRMAX - strlen(str));
	strncat(str, ",\nand i work at ", STRMAX - strlen(str));
	strncat(str, work, STRMAX - strlen(str));
	strncat(str, ".", STRMAX - strlen(str));

	cout << str << endl << endl << strlen(str);
	return 0;
}
