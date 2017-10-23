#ifndef EXPONENTIAL_H
#define EXPONENTIAL_H

#include "Function.h"

class Exponential : public Function
{
public:
	Exponential(float A =1.0, float b = 1.0):
	_A(A),
	_b(b)
	{}

	virtual float evaluate(float x) const override;     //Do I need the virtual and override here?

private:
	float _A;
	float _b;
};

#endif