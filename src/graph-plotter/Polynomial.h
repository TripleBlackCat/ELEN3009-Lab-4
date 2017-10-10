#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H

#include "Function.h"
#include <vector>
using std::vector;

class Polynomial: public Function
{
public:
	Polynomial(vector<float> coeffPoly) : _coeffPoly(coeffPoly)
	{}

	virtual float evaluate(float x) const override;     //Do I need the virtual and override here?

private:
    vector<float> _coeffPoly;
    
};

#endif