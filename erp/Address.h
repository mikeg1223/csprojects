#ifndef ADDRESS_H
#define ADDRESS_H

#include <iostream>
#include <string>

class Address
{
	public:
		Address();
		explicit Address(const std::string s, const std::string toc, const std::string soc, const std::string z);
		friend std::istream& operator >> (std::istream& in, Address& input);
		friend std::ostream& operator << (std::ostream& out, Address& output);

	private:
		std::string street;
		std::string townOrCity;
		std::string stateOrCountry;
		std::string zip;
	
};

#endif
