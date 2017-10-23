
#include "DottedLineStyle.h"

void DottedLineStyle::plotLine(PointPair end_points)
{
    _dotFrequency++;
    
    if (_dotFrequency == 15)
    {
        auto display = getDisplay();
        display->drawDot(end_points.first(), getColour());
    }
    else if (_dotFrequency > 15)
        _dotFrequency = 0;
        



}