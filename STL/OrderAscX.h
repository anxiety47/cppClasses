#ifndef ORDERASCX
#define ORDERASCX

#include "Point2D.h"

// funktor - klasa ktora ma przeladowany operator() (sluzy do sortowania wzgledem wspolrzednej X (rosnaco))
class OrderAscX
{
	public:
		bool operator() (const Point2D& point1, const Point2D& point2)
		{
			if ( point1.GetX() < point2.GetX() )
				return true;
			else return false;
		}
};

#endif