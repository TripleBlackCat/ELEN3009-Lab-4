#include "Exponential.h"

float Exponential::evaluate(float x) const
{
	return _A*exp(_b*x);
}