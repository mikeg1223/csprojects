#ifndef TERMS_H
#define TERMS

#include <iostream>

class Terms
{
	public:
		Terms();
		explicit Terms(const int d, const int dd,const int dis);

		int getDaysDisc();
		int getDays();
		double getDiscount();

		friend std::istream& operator >> (std::istream& in, Terms& input);
		friend std::ostream& operator << (std::ostream& out, const Terms& output);

	private:
		int days;
		int daysDisc;
		double discount;

};

#endif
