#include <iostream>
#include <cstdlib>
#include "Rat.h"

Rat::Rat() : num(0), den(1)
{}
Rat::Rat(const int n) : num(n), den(1)
{}
Rat::Rat(const int n, const int d) : num(n)
{ 
	if(d == 0)
	{
		std::cout << "Cannot enter 0 as a denominator, replacing with 1 " << std::endl;
		den = 1;
	}
	else
		den = d;

}
int Rat::lcm(const int x, const int y)
{
	int z = gcd(x, y);
	return (x*y)/z;
}
int Rat::gcd(const int x, const int y)
{
	int m = x, n = y;
	if( m < 0)
		m *= -1;
	if ( n < 0)
		n *= -1;
	if( n == 0)
		return m;
	else
		return gcd(n, m%n);
}
void Rat::reduce()
{
	if(num >= 0 && den < 0)
	{
		num *= -1;
		den *= -1;
	}
	if (num < 0 && den < 0)
	{
		num *= -1;
		den *= -1;
	}
	int x = gcd(num, den);
	num /= x;
	den /= x;
}
Rat& Rat::operator + (const Rat& second) const
{
	Rat* hold;
       	hold = new Rat((num*second.getDen() + second.getNum()*den),(den*second.getDen()));
	hold->reduce();
	return *hold;
}
Rat& Rat::operator - (const Rat& second) const
{
	Rat* hold;
	hold = new Rat((num*second.getDen() - second.getNum()*den),(den*second.getDen()));
	hold->reduce();
	return *hold;
}
Rat& Rat::operator * (const Rat& second) const
{
	Rat* hold;
	hold = new Rat((num*second.getNum()),(den*second.getDen()));
	hold->reduce();
	return *hold;
}
Rat& Rat::operator / (const Rat& second) const
{	
	Rat* hold;
	hold = new Rat((num*second.getDen()),(den*second.getNum()));
	hold->reduce();
	return *hold;
}
bool Rat::operator < (const Rat& second) const
{
	if(den == second.getDen())
	{
		if (num < second.getNum())
			return true;
		else
			return false;	
	}
	int x = lcm(den, second.getDen());
	if(num*(x/den) < second.getNum()*(x/second.getDen()))
		return true;
	std::cout << num*(x/den) << " < " << second.getNum()*(x/second.getDen()) << std::endl;
	return false;
}
bool Rat::operator <= (const Rat& second) const
{
	if(den == second.getDen())
	{
		if (num <= second.getNum())
			return true;
		else
			return false;	
	}
	int x = lcm(den, second.getDen());
	if(num*(x/den) <= second.getNum()*(x/second.getDen()))
		return true;
	return false;
}
bool Rat::operator > (const Rat& second) const
{
	if(den == second.getDen())
	{
		if (num > second.getNum())
			return true;
		else
			return false;	
	}
	int x = lcm(den, second.getDen());
	if(num*(x/den) > second.getNum()*(x/second.getDen()))
		return true;
	return false;
}
bool Rat::operator >= (const Rat& second) const
{	
	if(den == second.getDen())
	{
		if (num >= second.getNum())
			return true;
		else
			return false;	
	}
	int x = lcm(den, second.getDen());
	if(num*(x/den) >= second.getNum()*(x/second.getDen()))
		return true;
	return false;
}
std::istream& operator >> (std::istream& in, Rat& input)
{
	input.setNum(in);
	input.setDen(in);
	input.reduce();
	return in;
}
std::ostream& operator << (std::ostream& out, Rat& output)
{
	out << output.getNum() << "/" << output.getDen();
	return out;
}
int Rat::getNum() const
{
	return num;
}
int Rat::getDen() const
{
	return den;
}
double Rat::getDecimal() const
{
	return 1.0*num/den;
}
void Rat::setNum(std::istream& in)
{
	int hold;
	std::cout << "Please enter a numerator: ";
	in >> hold;
	if(in.fail())
	{
		std::cout << "non number entered... exiting... ";
		exit(1);
	}
	num = hold;
	reduce();
}
void Rat::setDen(std::istream& in)
{
	int hold;
	std::cout << "Please enter a denominator: ";
	in >> hold;
	if(in.fail())
	{
		std::cout << "non number entered... exiting... ";
		exit(1);
	}
	if(hold == 0)
	{
		std::cout << "Denominator cannot be zero, replacing with 1" << std::endl;
		hold = 1;
	}
	den = hold;
	reduce();
}
