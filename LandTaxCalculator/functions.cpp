#include <iostream>
#include <string>

#include "functions.h"
#include "Buyer.h"






void checkMembers(Buyer& b) {
	cout << endl;
	cout << "Name: " << b.getName() << endl;
	cout << "Currently owns: " << b.getCurrentlyOwns() << endl;
	cout << "Number of properties: " << b.getNumberOfProperties() << endl;
	cout << "Uses property for business: " << b.getUsesProperty() << endl;
	cout.precision(2);
	cout << "Budget: " << fixed << b.getPrice() <<  endl;
	cout << "Stamp Duty Land Tax: " << b.getTaxToPay() << endl;
	cout << endl;
}

void inputData(string& name, bool& currently_owns_properties, bool& uses_property_for_business, unsigned int& number_of_properties, double& budget) {
	
	string prop, business;
	
	cout << "Enter name: ";
	cin >> name;
	cout << "Does " << name << " currently own a property? (y/n) ";
	cin >> prop;
	if (prop != "n" && prop != "y") {
		string exception = "Invalid input, please re-enter details...";
		throw exception;
	}

	if (prop == "n") {
		business = "n";
		number_of_properties = 0;
	}
	else {
		cout << "Enter number of properties owned: ";
		cin >> number_of_properties;
		cout << "Are any of these properties used for business activity? (y/n) ";
		cin >> business;
		if (business != "n" && business != "y") {
			string exception = "Invalid input, please re-enter details...";
			throw exception;
		}
	}
	cout << "What is " << name << "'s current budget: ";
	cin >> budget;

}


Buyer initialize() {
	string name, prop, business;
	bool currently_owns_properties, uses_property_for_business;
	unsigned int number_of_properties = 0;
	double budget = 0.0;
	bool error = false;
	
	do {
		try {
			error = false;
			inputData(name, currently_owns_properties, uses_property_for_business, number_of_properties, budget);
		}
		catch (string err) {
			error = true;
			cout << err << endl;
		}
	
	} while (error);
	
	Buyer b = Buyer(name, (prop == "y")?true:false, (business=="y")?true:false, number_of_properties, budget);
	return b;
}