#ifndef SAMPLER_H
#define SAMPLER_H

#include "DataPoints.h"
#include "Function.h"

class Sampler
{
public:
	// performs uniform sampling
	DataPoints generateSamples(const Function& function, const Range& range) const;

private:
	static const int TOTAL_POINTS = 5000;
};

// standalone function for generating data points, a default uniform sampler is provided
DataPoints generateDataPoints(const Function& function, const Range& range, const Sampler& sampler = Sampler{});

#endif
