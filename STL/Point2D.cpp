#include "Point2D.h"

Point2D::Point2D(int x, int y) {	_x = x; _y = y; _distance = sqrt(x*x+y*y);}

int Point2D::GetX ()const	{ return _x;	}

int Point2D::GetY()const  { return _y;	}

float Point2D::GetDistance()const	 {	return _distance;	}
		
void Point2D::Print() const 
{
	std::cout << "Point cooridinates (" << _x << ", " << _y 
				 << ") distance from origin: " << _distance << std::endl;		
}		
		
void Point2D::PrintPoint(const Point2D& point)
{
	point.Print(); 
}
		
void Point2D::FunctionPrintY (const Point2D& point)
{
	std::cout << "Function print y=" << point.GetY() << std::endl;
}
		
bool Point2D::operator< (const Point2D& point2) const
{
	if (this->GetDistance() < point2.GetDistance())
		return true;
	else return false;
}