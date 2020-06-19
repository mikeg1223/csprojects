#ifndef TRANSACTION_H
#define TRANSACTION_H
#include <iostream>
#include <string>
#include "Time.h"
#include "Date.h"
#include "Sku.h"

class Transaction
{
	public:
		Transaction();
		explicit Transaction(const int c, const double ppe, const Time t, const Date d);
		
		//accessors	
		double getTotal();
		double getPricePerEach();
		int getCount();
		Time getTime();
		Date getDate();

		//mutators
		void setCount();
		void setPPE();
		void setTime();
		void setDate();
		
		void setCount(const int c);
		void setPPE(const double d);
		void setTime(const Time t);
		void setDate(const Date d);
		
		virtual void input(std::istream& in) = 0;
		virtual void output(std::ostream& out) = 0;
		friend std::istream& operator >> (std::istream& in, Transaction& input);
		friend std::ostream& operator << (std::ostream& out, Transaction& output);


	private:
		int count;
		double pricePerEach; 
		Time current;
		Date now;
};

class TransactionV : public Transaction
{
	public:
		TransactionV();
		explicit TransactionV(const Sku& input);
		explicit TransactionV(const int c, const double ppe, const Time t, const Date d, const std::string s);
		void input(std::istream& in);
		void output(std::ostream& out);
		std::string getSku();
	private:
		std::string part;
};
class TransactionS : public Transaction
{
	  public:
		TransactionS();
		TransactionS(const ContactV& input);
		explicit TransactionS(const int c, const double ppe, const Time t, const Date d, const std::string p);
		void input(std::istream& in);
		void output(std::ostream& out);
		std::string getContact();

	private:
		std::string purchased;

};

#endif
