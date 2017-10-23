#include "Polynomial.h"

float Polynomial::evaluate(float x) const
{
    float total = 0;
    
    int power = _coeffPoly.size() - 1;
    
    for (auto i : _coeffPoly)
    {
        total = total + pow((i*x),power);
        
        power--;
    }
    
	return total;
}