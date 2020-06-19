#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include "Contact.h"
#include "Transaction.h"
#include "Terms.h"
#include "Address.h"

Contact::Contact() : phone("empty"), email("empty"), isVendor(false)
{
	Address hold;
	Terms hold1;
	a = hold;
	t = hold1;
	vector<TransactionV> hold;
	ledger = hold;
}
Contact::Contact(const Address m, const std::string p, const std::string e, const Terms n, const vector<TransactionV> l, const bool iv) : a(m), phone(p), email(e), t(n), ledger(l), isVendor(iv)
{}
Terms Contact::getTerms()
{
	return t;
}
double Contact::getBalance()
{
	return balance;
}
Address Contact::getAddress()
{
	return a;
}
std::string Contact::getPhone()
{
	return phone;
}
std::string Contact::getEmail()
{
	return email;
}
std::string Contact::getName()
{
	return name;
}
void Contact::setName(const std::string h)
{
	name = h;
}
void Contact::setPhone(const std::string h)
{
	int x = h.length();
	for(int i = 0; i < x; ++i)
	{
		if(h[i] < '0' || h[i] > '9')
		{
			std::cout << "Phone number entered contains non-number characters and will not be added" << std::endl;
			return;
		}
	}	
	phone = h;
}
void Contact::setEmail(const std::string h)
{
	bool going = false, confirmed = false;
	int k = 0, x = h.length();
	for(int i = 0; i < x; ++i)
	{
		if(going)
		{
			if(h[i] == '.')
			{
				confirmed = true;
				break;
			}
		}
		else if(h[i] == '@')
		{
			going = true;
		}
	}
	if(confirmed)
	{
		email = h;
	}
	else
	{
		std::cout << "Email entered is invalid and will not be added " << std::endl;
	}
}
void Contact::setAddress()
{
	Address hold;
	std::cin >> hold;
	a = hold;
}
void Contact::setTerms()
{
	Terms hold;
	std::cin >> hold;
	t = hold;
}
std::istream& operator >> (std::istream& in, Contact& input)
{
	input.input(in);
	return in;
}
std::ostream& operator << (std::ostream& out, const Contact& output)
{
	output.output(out);
	return out;
}
void Contact::purchase(Sku& input)
{
	TransactionV hold(input);
	TransactionS hold1(*this);
	std::cin >> hold;
	hold1.setCount(hold.getCount());
	hold1.setPPE(hold.getPricePerEach());
	hold1.setTime(hold.getTime());
	hold1.setDate(hold.getDate());
	balance += (hold.getCount() * hold.getPricePerEach());
	addTransaction(hold);
	input.addTransaction(hold1);
}
void Contact::payment(const double pay)
{
	Time t;
	Date d;
	std::cin >> t;
	std::cin >> d;
	TransactionV hold(1, pay, t, d, this->getName() + " Payment");
	balance += (-1 * hold.getPricePerEach());
	addTransaction(hold);
}
void Contact::output(std::ostream& out)
{
	out << getName() << std::endl;
	out << "Balance: $" << getBalance() << " at ";
	out << getTerms();
	out << std::endl;
	out << "Contact Info: " << std::endl;
	out << getAddress();
	out << "Phone: " << getPhone() << std::endl;
	out << "Email: " << getEmail() << std::endl;
	out << "Ledger Entries: " << std::endl;
	int x = ledger.length();
	for(int i = 0; i < x; ++i)
	{
		out << ledger[i];
	}
	out << std::endl;
}
void Contact::addTransaction(TransactionV l)
{
	ledger.push_back(l);
}
void Contact::input(std::istream& in)
{
	std::string hold;
	std::cout << "Is this contact a vendor? (Y/N): ";
	std::getline(std::cin, hold, '\n');
	if(hold[0] == 'y' || hold[0] == 'Y')
	{
		isVendor = true;
	}
	std::cout << "Please enter the Entities Name: ";
	std::getline(std::cin, hold, '\n');
	setName(hold);
	setTerms();
	setAddress();
	std::cout << "Please enter the Phone Number: ";
	std::getline(std::cin, hold, '\n');
	setPhone(hold);
	std::cout << "Please enter the Email: ";
	std::getline(std::cin, hold, '\n');
	setEmail(hold);
}
