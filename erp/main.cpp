#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
#include "Address.h"
#include "Contract.h"
#include "Date.h"
#include "Sku.h"
#include "Terms.h"
#include "Time.h"
#include "Transaction.h"

int menu();

int main()
{

	bool going = true;
	while(going)
	{
		going = false;
	}	
	return 0;
}
int menu()
{
	int hold = 0;
	std::string h;
	std::cout << "Main Menu \n1.";
	std::getline(std::cin, h, '\n');
	hold = atoi(h.c_str());
	return hold;
}
