#include <iostream>
#include <string>
#include <sstream>
#include "test.h"
#include <cstdlib>
#include <fstream>

int main()
{
	test temp;
	std::ifstream fin("test_input.txt");
	if(fin.fail())
	{
		std::cout << "could not open... exiting";
		exit(1);
	}
	fin >> temp;

	fin.close();

	std::cout << temp << std::endl;
	
	test temp2;
	
	std::cin >> temp2;

	std::ofstream fout("test_input.txt");
	if(fout.fail())
	{
		std::cout << "could not open... exiting";
		exit(1);
	}
	fout << temp;
	fout << "\n";
        fout << temp2;	

	fout.close();
	std::cout << "\ncompleted";
	return 0;

}
