#include <iostream>

class Rat
{
public:
	Rat(int n, int d);
	Rat(int n);
	Rat();
	void output();
	void input();
	Rat add(Rat r2);
	Rat sub(Rat r2);
	Rat mult(Rat r2);
	Rat div(Rat r2);
	void reduce();
	int getNum();
	int getDen();
	void setNum();
	void setDen();
	bool greaterThan(Rat r2);
	bool lessThan(Rat r2);
	Rat compare(Rat r2);
private:
	int num;
	int den;
};
	int gcd(int a, int b);
	int lcm(int a, int b);

int main()
{
	Rat r1, r2, r3;
	r1.input();
	r2.input();
	
	r3 = r1.add(r2);
	std::cout << "Addition: "; r3.output(); std::cout << std::endl;
	
	r3 = r1.sub(r2);
	std::cout << "Subtraction: "; r3.output(); std::cout << std::endl;

	r3 = r1.mult(r2);
	std::cout << "Multiplication: "; r3.output(); std::cout << std::endl;

	r3 = r1.div(r2);
	std::cout << "Division: "; r3.output(); std::cout << std::endl;
	
	std::cout << "Is "; r1.output(); std::cout << " > "; r2.output(); std::cout<< "? " << std::endl;

	if(r1.greaterThan(r2))
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;

	r3 = r1.compare(r2);
	std::cout << "The larger is: "; r3.output();

	return 0;
}
Rat::Rat(int n, int d) : num(n), den(d)
{}
Rat::Rat(int n) : num(n), den(1)
{}
Rat::Rat() : num(0), den(1)
{}
int gcd(int a, int b)
{
	a = static_cast<int>(abs(a));
	b = static_cast<int>(abs(b));
	if(a < b)
	{
		gcd(b, a);
	}
	else if(b == 0)
	{
		return a;
	}
	else
	{
		return (gcd(b, a%b));
	}
}
int lcm(int a, int b)
{
	return((a*b)/gcd(a, b));
}

void Rat::output()
{
	std::cout << num << "/" << den << " ";
}
void Rat::reduce()
{
	int r = gcd(num, den);
	num /= r;
	den /= r;
}
void Rat::input()
{
	std::cout << "Please enter a value for the Numerator: ";
	std::cin >> num;
	den = 0;
	while(den == 0)
	{
		std::cout << "Please enter a value for the Denominator other than 0: ";
		std::cin >> den;
	}
	if(den < 0)
	{
		den = -den;
		num = -num;
	}
	reduce();
}
int Rat::getNum()
{
	return num;
}
int Rat::getDen()
{
	return den;
}
Rat Rat::add(Rat r2)
{
	Rat temp;
	int ell = lcm(den, r2.den);
	temp.den = ell;
	temp.num = (num*(ell/den) + r2.num*(ell/r2.den));
	temp.reduce();
	return temp;
}
Rat Rat::sub(Rat r2)
{
	Rat temp;
	int ell = lcm(den, r2.den);
	temp.den = ell;
	temp.num = (num*(ell/den) - r2.num*(ell/r2.den));
	temp.reduce();
	return temp;
}
Rat Rat::mult(Rat r2)
{
	Rat temp;
	temp.num = (num*r2.num);
	temp.den = (den*r2.den);
	temp.reduce();
	return temp;
}
Rat Rat::div(Rat r2)
{
	Rat temp;
	temp.num = (num*r2.den);
	temp.den = (den*r2.den);
	temp.reduce();
	return temp;
}
void Rat::setNum()
{
	std::cout << "Enter a number for the Numerator: ";
	std::cin >> num;
}
void Rat::setDen()
{
	int d = 0;
	while ( d == 0 )
	{
		std::cout << "Enter a number other than 0 for the denominator: ";
		std::cin >> d;
	}
	if( d < 0 )
	{
		d = -d;
		num = -num;
		den = d;
	}
	else
	{
		den = d;
	}
}
bool Rat::greaterThan(Rat r2)
{
	Rat temp1((num*r2.den), (den*r2.den)), temp2((r2.num*den),(r2.den*den));
	if(temp1.num > temp2.num)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool Rat::lessThan(Rat r2)
{
	Rat temp1((num*r2.den), (den*r2.den)), temp2((r2.num*den),(r2.den*den));
	if(temp1.num < temp2.num)
	{
		return true;
	}
	else
	{
		return false;
	}
}
Rat Rat::compare(Rat r2)
{
	Rat temp1((num*r2.den), (den*r2.den)), temp2((r2.num*den),(r2.den*den));
	if(temp1.num > temp2.num)
	{
		temp1.reduce();
		return temp1;
	}
	else
	{
		temp2.reduce();
		return temp2;
	}
}
