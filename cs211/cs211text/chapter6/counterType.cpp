#include <iostream>

class counterType
{
public:
	counterType(int n);
	void setCount();
	void incr();
	void decr();
	int retCount();
	void getCount();
private:
	int count;
};

void menu(), menu2();

int main()
{
	int a = 0, b = 0;
	char s;
	counterType leviton(0), hubbell(25), math(151);
	while(true)
	{
		a = 0;
		b = 0;
		menu2();
		while (a < 1 || a > 3)
		{
			std::cout << "Please enter a valid choice from 1 - 3: ";
			std::cin>>a;
		}
		menu();
		while (b < 1 || b > 4)
		{
			std::cout << "Please enter a valid choice from 1 - 3: ";
			std::cin>>b;
		}
		switch (a)
		{
			case 1: {
					switch (b) 
					{
						case 1: {
								leviton.setCount();
								break;
							}
						case 2: {
								leviton.incr();
								break;
							}
						case 3: {
								leviton.decr();
								break;
							}
						case 4: {
								leviton.getCount();
								break;
							}
					}
					break;
				}
			case 2: {
					switch (b) 
					{
						case 1: {
								hubbell.setCount();
								break;
							}
						case 2: {
								hubbell.incr();
								break;
							}
						case 3: {
								hubbell.decr();
								break;
							}
						case 4: {
								hubbell.getCount();
								break;
							}
					}
					break;
				}
			case 3: {
					switch (b) 
					{
						case 1: {
								math.setCount();
								break;
							}
						case 2: {
								math.incr();
								break;
							}
						case 3: {
								math.decr();
								break;
							}
						case 4: {
								math.getCount();
								break;
							}
					}
					break;
				}
		}
		std::cout << "Continue? (y/n): ";
		std::cin >> s;
		if(s == 'n' || s == 'N')
		{
			exit(1);
		}
	}
	return 0;
}
void menu()
{
	std::cout << "         ~MENU~        " << std::endl;
	std::cout << "Please pick an option: " << std::endl;
	std::cout << "1: Correct count" << std::endl;
	std::cout << "2. Increase " << std::endl;
	std::cout << "3. Decrease " << std::endl;
	std::cout << "4. Get count" << std::endl;
}
void menu2()
{
	std::cout << "Please pick an item to edit: " << std::endl;
	std::cout << "1. leviton" << std::endl;
	std::cout << "2. hubbell" << std::endl;
	std::cout << "3. math" << std::endl;
}
counterType::counterType(int n)
{
	count = n;
}
void counterType::setCount()
{
	count = -1;
	while (count < 0)
	{
		std::cout << "Please enter a non-negative count: ";
		std::cin >> count;
	}
}
void counterType::incr()
{
	++count;
}
void counterType::decr()
{
	if(count > 0)
	{
		--count;
	}
	else
	{
		std::cout << "Count cannot go below 0.";
	}
}
int counterType::retCount()
{
	return count;
}
void counterType::getCount()
{
	std::cout << "Count is: " << count << std::endl;
}
