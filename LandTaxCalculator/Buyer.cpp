#include "Buyer.h"

Buyer::Buyer() {
	this->name = "";
	this->currently_owns_property = false;
	this->uses_property_for_business = false;
	this->number_of_properties_owned = 0;
	this->budget = 0.0;
	this->tax_to_pay = 0.0;
}

Buyer::Buyer(string name, bool owns_property, bool for_business, unsigned int number_of_properties, double budget) {
	this->name = name;
	this->currently_owns_property = owns_property;
	this->uses_property_for_business = for_business;
	this->number_of_properties_owned = number_of_properties;
	this->budget = budget;

	this->tax_to_pay = budget < 500000 ? 0 : budget * this->getRate();

}

string Buyer::getCurrentlyOwns() const {
	return this->currently_owns_property ? "Yes" : "No";
}

string Buyer::getUsesProperty() const {
	return this->uses_property_for_business ? "Yes" : "No";
}

unsigned int Buyer::getNumberOfProperties() const {
	return this->number_of_properties_owned;
}

string Buyer::getName() const {
	return this->name;
}

double Buyer::getPrice() const {
	return this->budget;
}

double Buyer::getRate() const {
	double x = this->budget;
	if (x > 500000 && x < 925000) return 0.05;
	if (x > 925000 && x < 1500000) return 0.10;
	if (x > 1500000) return 0.12;
	return 0;
}

double Buyer::getTaxToPay() const{
	return this->tax_to_pay;
}

