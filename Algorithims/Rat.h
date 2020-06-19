#ifndef RAT_H
#define RAT_H
#include <iostream>
#include <cstdlib>

class Rat
{
	public:
		Rat();
		Rat(const int n);
		Rat(const int n, const int d);
		
		Rat& operator + (const Rat& second) const;
		Rat& operator - (const Rat& second) const;
		Rat& operator * (const Rat& second) const;
		Rat& operator / (const Rat& second) const;
		bool operator < (const Rat& second) const;
		bool operator <= (const Rat& second) const;
		bool operator > (const Rat& second) const;
		bool operator >= (const Rat& second) const;
		
		friend std::istream& operator >> (std::istream& in, Rat& input);
		friend std::ostream& operator << (std::ostream& out, Rat& output);

		int getNum() const;
		int getDen() const;
		double getDecimal() const;

		void setNum(std::istream& in);
		void setDen(std::istream& in);


	private:
		static int lcm(const int x, const int y);
		static int gcd(const int x, const int y);
		int num;
		int den;
		void reduce();
};
#endif
