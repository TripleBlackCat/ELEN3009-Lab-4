#include "DashedLineStyle.h"

void DashedLineStyle::plotLine(PointPair end_points)
{
    _lineFrequency++;
    
    if (_lineFrequency<25)
    {
 	    auto display_points = getDisplay();
 	    display_points->drawLine(end_points, getColour());
 	    return;
    }
 	else if(_lineFrequency==50)
 		_lineFrequency = 0;

}