#ifndef TEST_H1
#define TEST_H1

#include <string>
#include <fstream>
#include <iostream>

class test
{
	public:
		test();
		explicit test(std::string first1, std::string last1, std::string x);
		
		//accessors
		void setFirst();
		void setLast();
		void setNumber();
		
		//mutators
		std::string getFirst();
		std::string getLast();
		std::string getNumber();

		//overloads
		friend std::ifstream& operator >> (std::ifstream& in, test& t);
		friend std::ofstream& operator << (std::ofstream& out, const test& t);
		friend std::istream& operator >> (std::istream& in, test& t);
		friend std::ostream& operator << (std::ostream& out, test& t);

	private:
		std::string first;
		std::string last;
		std::string number;
};

#endif
