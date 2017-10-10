#ifndef ABSOLUTE_H
#define ABSOLUTE_H

#include "Function.h"
#include <memory>

using std::shared_ptr;

class Absolute: public Function
{
public:
	Absolute(shared_ptr<Function> function_ptr) : _function_ptr(function_ptr)
	{}

	virtual float evaluate(float x) const override;     //Do I need the virtual and override here?

private:
    shared_ptr<Function> _function_ptr;
    
};

#endif