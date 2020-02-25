#include <iostream>
#include <cmath>

void output(int r[]);
void input(int r[]);
void mult(int r[], int r1[], int r2[]);
void div(int r[], int r1[], int r2[]);
int gcd(int a, int b);
int lcm(int a, int b);
void add(int r[], int r1[], int r2[]);
void sub(int r[], int r1[], int r2[]);
void lowest(int r[]);

int main()
{
	int rat[2], rat1[2], rat2[2];
	char response;
	do
	{
	input(rat);
	input(rat1);
	mult(rat, rat1, rat2);
	output(rat);
	output(rat1);
	output(rat2);
	div(rat, rat1, rat2);
	output(rat);
	output(rat1);
	output(rat2);
	add(rat, rat1, rat2);
	output(rat);
	output(rat1);
	output(rat2);
	sub(rat, rat1, rat2);
	output(rat);
	output(rat1);
	output(rat2);
	std::cout << "Continue? Y//N ";
	std::cin >> response;
	} while (response == 'y' || response == 'Y');
	return 0;
}
void output(int r[])
{
	std::cout << r[0] << "/" << r[1] << std:: endl;
}
void input(int r[])
{
	std::cout << " num = ";
	std::cin >> r[0];
	std::cout << " den = ";
	std::cin >> r[1];
}
void mult(int r[], int r1[], int r2[])
{
	std::cout << "  Multiplication  " << std::endl;
	r2[0] = r[0] * r1[0];
	r2[1] = r[1] * r1[1];
	lowest(r2);
}
void div(int r[], int r1[], int r2[])
{
	std::cout << "  Division  " << std::endl;
	r2[0] = r[0]*r1[1];
	r2[1] = r[1]*r1[0];
	lowest(r2);
}
int gcd(int a, int b)
{
	if(a < b)
		return gcd(b,a);
	if(b == 0)
		return a;
	if(a < 0 || b < 0)
	{
		a = abs(a);
		b = abs(b);
	}
	else
		return gcd(b, a%b);
}

int lcm(int a, int b)
{
	if(a < 0 || b < 0)
	{
		a = abs(a);
		b = abs(b);
	}
	if (gcd(a,b) != 0)
		return((a*b)/gcd(a, b));
	else
		return 0;
}
void add(int r[], int r1[], int r2[])
{
	std::cout << "  Addition  " << std::endl;
	r2[1] = lcm(r[1], r1[1]);
	r2[0] = (r[0]*(r2[1]/r[1]) + r1[0]*(r2[1]/r1[1]));
	lowest(r2);
}
void sub(int r[], int r1[], int r2[])
{
	std::cout << "  Subtraction  " << std::endl;
	r2[1] = lcm(r[1], r1[1]);
	r2[0] = (r[0]*(r2[1]/r[1]) - r1[0]*(r2[1]/r1[1]));
	lowest(r2);
}

void lowest(int r[])
{	
	int factor = gcd(r[0], r[1]);
	if(factor > 1)
	{
		r[0] /= factor;
		r[1] /= factor;
	}
}

