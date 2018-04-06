#pragma once

#include "Statek.h"
#include <iostream>
#include <string>


class Zaglowiec : virtual public Statek //klasa pochodna od klasy Statek, jest wirtualna poniewaz klasa Jacht dziedziczy zarowno po tej klasie, jak i po klasie StatekSilnikowy
{
	protected:
		std::string stanZagli;		// zmienna okreslajaca stan zagli
		
	public:
		void ZagleStaw() {stanZagli = "postawione";}		//metoda ustawiajaca stan zagli na postawione
		void ZaglePrecz() {stanZagli = "zlozone";}		//metoda ustawiajaca stan zagli na zlozone
		void WypiszStanZagli () const {std::cout << "Zagle sa " << stanZagli << ".\n";}		//zmienna wypisujaca stan zagli na ekran
		void WypiszStanZagliDlaStatkow () const {std::cout << "zagle: " << stanZagli << "\n";}	//zmienna wypisujaca stan zagli na ekran (2 tak samo dzialajace metody poniewaz na ekranie maja pojawic 2 rozne wypisy)
		//
		void WypiszInformacje() const // metoda wypisujaca informacje na ekran, korzysta z metody WypiszInformacje() z klasy bazowej  oraz wlasnych metod
		{
			Statek::WypiszInformacje();
			WypiszStanZagliDlaStatkow();
		}
		
		//
};