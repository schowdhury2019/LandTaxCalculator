#pragma once

#include "Buyer.h"

#ifndef FUNCTION_H
#define FUNCTION_H


Buyer initialize();
void checkMembers(Buyer&);
void inputData(string&, bool&, bool&, unsigned int&, double&);
int add(int x, int y) {
	return x + y;
}


#endif