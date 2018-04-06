#pragma once 

#include "Statek.h"
#include <iostream>
#include <string>

class StatekSilnikowy : virtual public Statek	//klasa pochodna od klasy Statek, jest wirtualna poniewaz klasa Jacht dziedziczy zarowno po tej klasie, jak i po klasie Zaglowce 
{
	protected:
		float poziomOleju;	//zmienna przechowujaca poziom oleju
	
	public:
		void UstawPoziomOleju(float poziom) {poziomOleju = poziom;}		//metoda ustawiajaca wartosc zmiennej poziomOleju
		void WypiszPoziomOlejuDlaStatkow()const {std::cout << "olej: " << poziomOleju << "\n";}		//zmienna wypisujaca  poziom oleju na ekran (2 tak samo dzialajace metody poniewaz na ekranie maja pojawic 2 rozne wypisy)
		void WypiszPoziomOleju () const {std::cout << "Poziom oleju wynosi " << poziomOleju <<".\n";}	//zmienna wypisujaca  poziom oleju na ekran
		//
		void WypiszInformacje() const		// metoda wypisujaca informacje na ekran, korzysta z metody WypiszInformacje() z klasy bazowej  oraz wlasnych metod
		{
			Statek::WypiszInformacje();
			WypiszPoziomOlejuDlaStatkow();		
		}
		//

};