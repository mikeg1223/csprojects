#ifndef TIME_H
#define TIME_H

#include <iostream>

class Time
{
	public:
		Time();
		explicit Time(const int h, const int m, const int s);

		friend std::istream& operator >> (std::istream& in, Time& input);
		friend std::ostream& operator << (std::ostream& out, Time& output);

	private:
		int hour;
		int minute;
		int second;	
};

#endif
