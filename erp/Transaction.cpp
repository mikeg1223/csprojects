#include <iostream>
#include <cstring>
#include <cstdlib>
#include "Transaction.h"


Transaction::Transaction() : count(0), pricePerEach(0.0)
{
	Time hold1;
	current = hold1;
	Date hold2;
	now = hold2;
}
Transaction::Transaction(const int c, const double ppe, const Time t, const Date d) : count(c), pricePerEach(ppe), current(t), now(d)
{}
double Transaction::getTotal()
{
	return pricePerEach*count;
}
double Transaction::getPricePerEach()
{
	return pricePerEach;
}
int Transaction::getCount()
{
	return count;
}
Time Transaction::getTime()
{
	return current;
}
Date Transaction::getDate()
{
	return now;
}
void Transaction::setCount()
{
	std::cout << "Please enter the Quantity: ";
	std::string hold;
	std::getline(std::cin, hold, '\n');
	int hold1 = atoi(hold.c_str());
	count = hold1;
}
void Transaction::setPPE()
{
	std::cout << "Please enter the Price per Each: ";
	std::string hold;
	std::getline(std::cin, hold, '\n');
	double hold1 = atof(hold.c_str());
	pricePerEach = hold1;
}
void Transaction::setTime()
{
	Time hold;
	std::cin >> hold;
        current = hold;	
}
void Transaction::setDate()
{
	Date hold;
	std::cin >> hold;
	now = hold;
}
void Transaction::setCount(const int c)
{
	count = c;
}
void Transaction::setPPE(const double d)
{
	pricePerEach = d;
}
void Transaction::setTime(const Time t)
{
	current = t;
}
void Transaction::setDate(const Date d)
{
	now = d;
}
std::istream& operator >> (std::istream& in, Transaction& input)
{
	input.input(in);
	return in;
}
std::ostream& operator << (std::ostream& out, Transaction& output)
{
	output.output(out);
	return out;
}
TransactionV::TransactionV() : Transaction(), part("empty")
{}
TransactionV::TransactionV(const Sku& input) : Transaction(), part(input.getPart())
{}
TransactionV::TransactionV(const int c, const double ppe, const Time t, const Date d, const std::string s) : Transaction(c, ppe, t, d), part(s)
{}
void TransactionV::input(std::istream& in)
{
	setCount();
	setPPE();
	setTime();
	setDate();
}
void TransactionV::output(std::ostream& out)
{
	out << getTime();
	out << " ";
	out << getDate();
	out << "\t Part: " << getSku() << "\t Qty: "<< getCount() << "\t Price: " << getPricePerEach();
	out << std::endl;
}
std::string TransactionV::getSku()
{
	return part;
}
TransactionS::TransactionS() : Transaction(), purchased("empty")
{}
TransactionS::TransactionS(const ContactV& input) : Transaction(), purchased(input.getName())
{}
TransactionS::TransactionS(const int c, const double ppe, const Time t, const Date d, const std::string p) : TransactionS(c, ppe, t, d), purchased(p)
{}
void TransactionS::input(std::istream& in)
{
	setCount();
	setPPE();
	setTime();
	setDate();
}
void TransactionS::output(std::ostream& out)
{
	out << getTime();
	out << " ";
	out << getDate();
	out << "\t Entity: " << getContact() << "\t Qty: "<< getCount() << "\t Price: " << getPricePerEach();
	out << std::endl;
}
std::string TransactionS::getContact()
{
	return purchased;
}
