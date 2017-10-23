#include "Absolute.h"

float Absolute::evaluate(float x) const
{
    return abs(_function_ptr->evaluate(x));
}