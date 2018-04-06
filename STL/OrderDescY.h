#ifndef ORDERDESCY
#define ORDERDESCY

#include "Point2D.h"

// funktor - klasa ktora ma przeladowany operator() (sluzy do sortowania wzgledem wspolrzednej Y (malejaco))
class OrderDescY
{
	public:
		bool operator() (const Point2D& point1, const Point2D& point2)
		{
			if ( point1.GetY() > point2.GetY() )
				return true;
			else return false;
		}
};

#endif