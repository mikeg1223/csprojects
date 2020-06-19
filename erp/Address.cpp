#include <iostream>
#include <cstdlib>
#include "Address.h"


Address::Address() : street("empty"), townOrCity("empty"), stateOrCountry("empty"), zip("empty")
{}
Address::Address(const std::string s, const std::string toc, const std::string soc, const std::string z) : street(s), townOrCity(toc), stateOrCountry(soc), zip(z)
{}
std::istream& operator >> (std::istream& in, Address& input)
{
	std::cout << "Please enter the Street number and name: ";
	std::getline(in, input.street);
	std::cout << "Please enter the Town or City: ";
	std::getline(in, input.townOrCity);
	std::cout << "Please enter the State (if USA) or Country: ";
	std::getline(in, input.stateOrCountry);
	std::cout << "Please enter the Zip Code (if USA) of regional code: ";
	std::getline(in, input.zip);
	return in;
}
std::ostream& operator << (std::ostream& out, Address& output)
{
	out << output.street << std::endl;
	out << output.townOrCity << ", " << output.stateOrCountry << " " << output.zip << std::endl;
	return out;
}
