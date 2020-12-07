#pragma once
#include <string>

using namespace std;

#ifndef BUYER_H
#define BUYER_H

class Buyer {
private:
	string name;
	bool currently_owns_property;
	bool uses_property_for_business;
	unsigned int number_of_properties_owned;
	double budget;
	double tax_to_pay;

public:
	Buyer();
	Buyer(string, bool, bool, unsigned int, double);

	string getCurrentlyOwns() const;
	string getUsesProperty() const;
	unsigned int getNumberOfProperties() const;
	string getName() const;
	double getPrice() const;
	double getRate() const;
	double getTaxToPay() const;
};

#endif


