#ifndef DOTTEDLINESTYLE_H
#define DOTTEDLINESTYLE_H

#include "LineStyle.h"

class DottedLineStyle: public LineStyle
{
public:
	DottedLineStyle(Colour colour, shared_ptr<Display> display_ptr):
	  LineStyle(colour,display_ptr)
	  {}
	virtual void plotLine(PointPair end_points) override;

private:
    int _dotFrequency = 0;

};

#endif