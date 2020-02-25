#include <iostream>

class student 
{
public: 
	void input();
	void output();
	void setQuiz1();
	void setQuiz2();
	void setMidterm();
	void setFinal();
	void getQuiz1();
	void getQuiz2();
	void getMidterm();
	void getFinal();
	void getGrade();
	char getLetter(int n);
private:
	void init();
	int quiz1;
	int quiz2;
	int midterm;
	int final1;
	int grade();
};

int main()
{
	student michael;
	michael.input();
	michael.output();
	return 0;
}
void student::init()
{
	quiz1 = -1;
	quiz2 = -1;
	midterm = -1;
	final1 = -1;
}
void student::input()
{
	init();
	setQuiz1();
	setQuiz2();
	setMidterm();
	setFinal();
}
void student::setQuiz1()
{
	while(quiz1 < 0 || quiz1 > 10)
	{
		std::cout << "Please Enter a Value for Quiz 1 (0-10): ";
		std::cin >> quiz1;
	}
}
void student::setQuiz2()
{
	while(quiz2 < 0 || quiz2 > 10)
	{
		std::cout << "Please Enter a Value for Quiz 2 (0-10): ";
		std::cin >> quiz2;
	}
}
void student::setMidterm()
{
	while(midterm < 0 || midterm > 100)
	{
		std::cout << "Please Enter a Value for Midterm (0-100): ";
		std::cin >> midterm;
	}
}
void student::setFinal()
{
	while(final1 < 0 || final1 > 100)
	{
		std::cout << "Please Enter a Value for Final (0-100): ";
		std::cin >> final1;
	}
}
char student::getLetter(int n)
{
	if(n > 89)
		return 'A';
	else if (n > 79)
		return 'B';
	else if (n > 69)
		return 'C';
	else if (n > 59)
		return 'D';
	else
		return 'F';
}
int student::grade()
{
	return ( final1*0.5 + midterm*0.25 + (quiz1+quiz2)*1.25);
}
void student::output()
{
	std::cout << "Quiz 1 is: " << getLetter(quiz1*10) << ", " << quiz1 << std::endl;
	std::cout << "Quiz 2 is: " << getLetter(quiz2*10) << ", " << quiz2 << std::endl;
	std::cout << "Midterm is: " << getLetter(midterm) << ", " << midterm << std::endl;
	std::cout << "Final is: " << getLetter(final1) << ", " << final1 << std::endl;
	std::cout << "Final grade is: " << getLetter(grade()) << ", " << grade() << std::endl;
}
void student::getQuiz1()
{
	std::cout << "Quiz 1 is: " << quiz1 << std::endl;
}
void student::getQuiz2()
{
	std::cout << "Quiz 2 is: " << quiz2 << std::endl;
}
void student::getMidterm()
{
	std::cout << "Midterm is: " << midterm << std::endl;
}
void student::getFinal()
{
	std::cout << "Final is: " << final1 << std::endl;
}
void student::getGrade()
{
	std::cout << "Final Grade is: " << grade();
}
