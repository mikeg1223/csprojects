#include <iostream>
#include <cstdlib>
#include <string>
#include "Transaction.h"
#include "Sku.h"

Sku::Sku()
{}
Sku::Sku(const std::string p, const std::string d, const double w, const vector<TransactionS> l, const double lc) : part(p), description(d), weight(w), lastCost(lc)
{
	ledger = l;
	inventory = 0;
	int x = ledger.size();
	for(int i = 0; i < x; i++)
	{
		inventory += ledger[i].getCount();
	}
}
std::string Sku::getPart()
{
	return part;
}
std::string sku::getDescription()
{
	return description;
}
double Sku::getWeight()
{
	return weight;
}
void Sku::outputLedger()
{
	int x = ledger.size();
	for(int i = 0; i < x; ++i)
	{
		std::cout << ledger[i] << std::endl;
	}

}
void Sku::outputInfo()
{
	std::cout << "Part Number: " << part << std::endl;
	std::cout << "Description: " << description << std::endl;
	std::cout << "Weight: " << weight << std::endl;
	std::cout << "Inventory Count: " << inventory << std::endl;
	std::cout << "Last Cost: " << lastCost << std::endl;
}
int Sku::getInventoryLevel()
{
	return inventory;
}
double Sku::getLastCost()
{
	return lastCost;
}
void Sku::addTransaction(TransactionS l)
{
	ledger.push_back(l);
}
void Sku::setPart()
{
	std::string hold;
	std::cout << "Please enter the part number: ";
	std::getline(std::cin, hold, '\n');
	part = hold;
	
}
void Sku::setDescription()
{
	std::string hold;
	std::cout << "Please enter the part description: ";
	std::getline(std::cin, hold, '\n');
	description = hold;
}
void Sku::setWeight()
{
	double hold;
	std::cout << "Please enter the weight of the part: ";
	std::cin >> hold;
	if(std::cin.fail())
	{
		std::cout << "Non-number entered. weight set to 0.01 lbs"
		std::cin.clear();
		std::cin.ignore(10000, '\n');
		weight = 0.01;		
	}
	std::cin.ignore();
	weight = hold;
}
void Sku::setPart(const std::string p)
{
	part = p;
}
void Sku::setDescription(const std::string d)
{
	description = d;
}
void Sku::setWeight(const double w)
{
	weight = w;
}
std::istream& operator >> (std::istream& in, Sku& input)
{
	input.setPart();
	input.setDescription();
	input.setWeight();
	return in;
}
std::ostream& operator << (std::ostream& out, Sku& output)
{
	output.outputInfo();
	output.outputLedger();
	return out;
}
