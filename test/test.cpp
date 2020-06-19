#include "test.h"
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <sstream>

test::test() : first("empty"), last("empty"), number("0")
{
}
test::test(std::string first1, std::string last1, std::string x) : first(first1), last(last1), number(x)
{
}
//accessors
void test::setFirst()
{
	std::string hold;
	std::cout << "Please enter a first name: ";
	std::getline(std::cin, hold);
	first = hold;
}
void test::setLast()
{
	std::string hold;
	std::cout << "Please enter a last name: ";
	std::getline(std::cin, hold);
	last = hold;
}
void test::setNumber()
{
	std::string hold;
	std::cout << "Please enter a number: ";
	std::getline(std::cin, hold);
	number = hold;
}

//mutators
std::string test::getFirst()
{
	return first;
}
std::string test::getLast()
{
	return last;
}
std::string test::getNumber()
{
	return number;
}
//overloads
std::ifstream& operator >> (std::ifstream& in, test& t)
{
	std::string hold;
	in >> hold;
	std::stringstream ss(hold);
	std::getline(ss, t.first, '|');
	std::getline(ss, t.last, '|');
	std::getline(ss, t.number, '|');
	return in;
}
std::ofstream& operator << (std::ofstream& out, const test& t)
{
	out << t.first << "|" << t.last << "|" << t.number << "|";
	return out;
}
std::istream& operator >> (std::istream& in, test& t)
{
	t.setFirst();
	t.setLast();
	t.setNumber();
	return in;
}
std::ostream& operator << (std::ostream& out, test& t)
{
	std::cout << t.first << " " << t.last << std::endl << t.number;
	return out;
}

