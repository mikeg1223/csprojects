#include <iostream>
#include <string>

class Contact
{
public:
	Contact();
	Contact(string l, string f, string a, string p, string e);
	void output(), input(), setLast(string m), setFirst(string m), setAddress(string m), setPhone(string m), setEmail(string m), setLast(), setFirst(), setAddress(), setPhone(), setEmail();
	string getLast(), getFirst(), getAddress(), getPhone(), getEmail();

private:
	string last;
	string first;
	string address;
	string phone;
	string email;
	static int contactCount;
};

int main()
{

	return 0;
}
Contact::Contact() : last("empty"), first("empty"), address("empty"), phone("empty"), email("empty")
{
	++contactCount;
	
}
Contact::Contact(string l, string f, string a, string p, string e) : last(f), first(f), address(a), phone(p), email(e)
{++contactCount;}
void Contact::output()
{
	std::cout << "Name (Last, First): " << last << ", " << first << std::endl;
	std::cout << "Address: "<< address << std::endl;
	std::cout << "Phone Nuner: " << phone << std::endl;
	std::cout << "E-mail: " << email;
}
void Contact::setLast(string m)
{
	for(int i = 0; i < last.length(); ++i)
	{
		if(last[i] < 'A' || (m[i] > 'Z' && m[i] < 'a') || m[i] > 'z')
		{
			std::cout << "Please do not use invalid characters, use letters" << std::endl;
			setLast();
			break;
		}
	}
	last = m;
}
void Contact::setLast()
{
	std::cout << "Please enter your last name: ";
	getline(cin,last);
	for(int i = 0; i < last.length(); ++i)
	{
		if(last[i] < 'A' || (last[i] > 'Z' && last[i] < 'a') || last[i] > 'z')
		{
			std::cout << "Please do not use invalid characters, use letters" << std::endl;
			setLast();
			break;
		}
	}
}
void Contact::setFirst(string m)
{
	for(int i = 0; i < first.length(); ++i)
	{
		if(last[i] < 'A' || (m[i] > 'Z' && m[i] < 'a') || m[i] > 'z')
		{
			std::cout << "Please do not use invalid characters, use letters" << std::endl;
			setLast();
			break;
		}
	}
	first = m;
}
void Contact::setFirst()
{
	std::cout << "Please enter your first name: ";
	getline(cin,last);
	for(int i = 0; i < last.length(); ++i)
	{
		if(last[i] < 'A' || (last[i] > 'Z' && last[i] < 'a') || last[i] > 'z')
		{
			std::cout << "Please do not use invalid characters, use letters" << std::endl;
			setFirst();
			break;
		}
	}
}
void Contact::setAddress(string m)
{
	
	address = m;
}
void Contact::setAddress()
{
	std::cout << "Please enter your address: ";
	getline(cin, address);
}
void Contact::setPhone(string m)
{
	phone = m;
}
void Contact::setPhone()
{
	std::cout << "Please enter your phone number (numbers only): ";
	getline(cin, phone);
}
void Contact::setEmail(string m)
{
	email = m;
}
void Contact::setEmail()
{
	std::cout << "Please enter your email: ";
	getline(cin, email);
}
void Contact::input()
{
	setLast();
	setFirst();
	setAddress();
	setPhone();
	setEmail();
}
string Contact::getFirst()
{
	return first;
}
string Contact::getLast()
{
	return last;
}
string Contact::getAddress()
{
	return address;
}
string Contact::getPhone
{
	return phone;
}
string Contact::getEmail()
{
	return email;
}
