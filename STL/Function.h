#ifndef FUNCTION
#define FUNCTION

#include "Point2D.h"

// funkcja wypisujaca wspolrzedna X na ekran
void FunctionPrintX (const Point2D& point)		
{
	std::cout << "Function print x=" << point.GetX() << std::endl;
}

//funkcja zwracajaca prawde jesli wieksza ze wspolrzednych pierwszego punktu jest mniejsza 
//od wiekszej wspolrzednej drugiego punktu
bool MaxDistanceAsc (const Point2D& point1, const Point2D& point2)	
{
	int first, second;
	if (point1.GetX() > point1.GetY()) first = 	point1.GetX();
		else first = point1.GetY();
	if (point2.GetX() > point2.GetY()) second = point2.GetX();
		else second = point2.GetY();	
			
	if (first < second) return true;
		else return false;
}

#endif