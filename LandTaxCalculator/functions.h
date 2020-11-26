#pragma once

#include "Buyer.h"

#ifndef FUNCTION_H
#define FUNCTION_H

template<class C>
double calculateLandTax(Buyer&, double, C);
Buyer initialize();
void checkMembers(Buyer&);
void inputData(string&, bool&, bool&, unsigned int&, double&);


#endif