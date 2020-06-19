#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>
#include <string>
#include <vector>
#include "Sku.h"
#include "Transaction.h"
#include "Address.h"
#include "Terms.h"

class Contact
{
	public:
		Contact();
		explicit Contact(const Address m, const std::string p, const std::string e, const Terms n, const std::vector<TransactionV> l, const bool iv);
		//accessors
		Terms getTerms();
		double getBalance();
		std::string getName();
		Address getAddress();
		std::string getPhone();
		std::string getEmail();
		
		//mutators
		void setName(const std::string h);
		void setPhone(const std::string h);
		void setEmail(const std::string h);
		void setAddress();
		void setTerms();

		friend std::istream& operator >> (std::istream& in, Contact& input);
		friend std::ostream& operator << (std::ostream& out, const Contact& output);
		
		void purchase(Sku& input);
		void payment(const double pay);
		void output(std::ostream& out);
		void addTransaction(TransactionV l);
		void input(std::istream& in);


	private:
		std::string name;
		Address a;
		std::string phone;
		std::string email;
		Terms t;
		std::vector<TransactionV> ledger;
		bool isVendor;
		double balance;
		
};
#endif
