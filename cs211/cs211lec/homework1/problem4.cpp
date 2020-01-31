#include <iostream>
#include <cstring>

int reverseInt(int input); 
void printingReverse();

int main()
{
	printingReverse();
	return 0;	
}

/* To return a reverse of digits input. 
 * This will drop an initial or ending 0
 * Per Professor Alayev this is as it should function
 * This program could transfer the digits to a string for printing purposes
 * but it will not be able to return the proper int value, which is a requisite 
*/
int reverseInt(const int input)
{
	int hold = input, output = 0;
	while(hold)
	{
		output = (output*10) + (hold%10);
		hold /= 10;
	}
	return output;
}

//prompt user for number(s) until specified, print the reverse of said number
void printingReverse()
{
	int prompt = 0;
	while(prompt >= 0)
	{
		std::cout << "Please enter a positive integer value to reverse (enter a negative to exit): ";
		std::cin >> prompt;
		std::cout << reverseInt(prompt) << std::endl;
	}
}

