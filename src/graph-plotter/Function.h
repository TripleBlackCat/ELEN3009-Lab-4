#ifndef FUNCTION_H
#define FUNCTION_H

#include <cmath>

class Function
{
public:

	virtual float evaluate(float x) const = 0; //pure virtual function
};

#endif