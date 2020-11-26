#include "Buyer.h"

Buyer::Buyer() {
	this->name = "";
	this->currently_owns_property = false;
	this->uses_property_for_business = false;
	this->number_of_properties_owned = 0;
	this->budget = 0.0;
}

Buyer::Buyer(string name, bool owns_property, bool for_business, unsigned int number_of_properties, double budget) {
	this->name = name;
	this->currently_owns_property = owns_property;
	this->uses_property_for_business = for_business;
	this->number_of_properties_owned = number_of_properties;
	this->budget = budget;
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

