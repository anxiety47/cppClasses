// ten plik MOZNA modyfikowac

#pragma once
#include "StatekSilnikowy.h"
#include <iostream>
#include <string>

class LodzPodwodna : public StatekSilnikowy	//// klasa pochodna od klasy StatekSilnikowy, zawiera dostep do wszystkich metod i zmiennych klasy bazowej
{
	public:
  		void WypiszInformacje () const 	// metoda wypisujaca informacje na ekran, korzysta z metody WypiszInformacje() z klasy bazowej  oraz wlasnych zmiennych
  		{
  			StatekSilnikowy::WypiszInformacje(); 
  			std::cout<<"zanurzenie: "<<zanurzenieMax<<"\n";
  		}
  		
  		void UstawMaksymalneZanurzenie(float zanMax) { zanurzenieMax = zanMax;}		// metoda ustawiajaca wartosc zmiennej zanurzenieMax

	protected:
		float zanurzenieMax;		//zmienna okreslajaca maksymalne zanurzenie lodzi podwodnej
};

