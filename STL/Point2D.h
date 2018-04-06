#ifndef POINT
#define POINT

#include <iostream>
#include <cmath>

// klasa przetrzymujaca punkt o wspolrzednych x i y oraz odleglosc od srodka ukladu  
class Point2D
{
	private:
		//wspolrzedna X
		int _x;	
		// wspolrzedna y			
		int _y;		
		// odleglosc punktu od sroda ukladu wspolrzednych
		float _distance;
		
	public:
		// konstruktor ustawiajacy podane wartosci wspolrzednym, dodatkowo oblicza odleglosc
		Point2D(int x, int y);	
		// metoda zwracajaca wspolrzedna x
		int GetX ()const;
		// metoda zwracajaca wspolrzedna y
		int GetY()const  ;
		//metoda zwracajaca odleglosc
		float GetDistance()const;
		// metoda wypisujaca na ekran wspolrzedne i odleglosc
		void Print() const ;	
		// statyczna metoda wypisujaca wspolrzedne na ekran (dziala jak metoda Print() )
		static void PrintPoint(const Point2D& point);
		// statyczna metoda wypisujaca wspolrzedna Y na ekran
		static void FunctionPrintY (const Point2D& point);
		
		// przeladowanie operatora <
		bool operator< (const Point2D& point2) const;
};

#endif