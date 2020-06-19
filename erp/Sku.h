#ifndef SKU_H
#define SKU_H

#include <iostream>
#include <vector>
#include <string>
#include "Transaction.h"

class Sku
{
	public:
		Sku();
		explicit Sku(const std::string p, const std::string d, const double w, const std::vector<TransactionS> l, const double lc);
		
		//accessors
		std::string getPart();
		std::string getDescription();
		double getWeight();
		void outputLedger();
		void outputInfo();
		int getInventoryLevel();
		double getLastCost();

		//mutators
		void setPart();
		void setDescription();
		void setWeight();
		
		void setPart(const std::string p);
		void setDescription(const std::string d);
		void setWeight(const double w);
		

		void addTransaction(TransactionS l);
		friend std::istream& operator >> (std::istream& in, Sku& input);
		friend std::ostream& operator << (std::ostream& out, Sku& output);

	private:
		std::string part;
		std::string description;
		double weight;
		std::vector<TransactionS> ledger;
		int inventory;
		double lastCost;
};

#endif
