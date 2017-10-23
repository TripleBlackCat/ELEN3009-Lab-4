#ifndef DASHEDLINESTYLE_H
#define DASHEDLINESTYLE_H

#include "LineStyle.h"

class DashedLineStyle: public LineStyle
{
public:
	DashedLineStyle(Colour colour, shared_ptr<Display> display_ptr):
	  LineStyle(colour,display_ptr)
	  {}
	virtual void plotLine(PointPair end_points) override;

private:
    int _lineFrequency = 0;
    
};

#endif