#ifndef DATE_H
#define DATE_H

#include <iostream>

class Date
{
	public:
		Date();
		explicit Date(const int m, const int d, const int y);
		friend std::istream& operator >> (std::istream& in, Date& input);
		friend std::ostream& operator << (std::ostream& out, Date& output);
		
	private:
		int month;
		int day;
		int year;

};

#endif
