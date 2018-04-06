// ten plik MOZNA modyfikowac

#pragma once
#include "StatekSilnikowy.h"
#include <iostream>
#include <string>


class Motorowka : public StatekSilnikowy	// klasa pochodna od klasy StatekSilnikowy, zawiera dostep do wszystkich metod i zmiennych klasy bazowej
{
public:
  void WypiszInformacje () const // metoda wypisujaca informacje na ekran, korzysta z metody WypiszInformacje() z klasy bazowej oraz wlasnych zmiennych
   {
  		StatekSilnikowy::WypiszInformacje();
	   std::cout<<"pasazerowie: "<<iloscPasazerow<<"\n";
	}

	void UstawIloscPasazerow(int ilosc) { iloscPasazerow = ilosc;}	//metoda ustawiajaca wartosc zmiennej iloscPasazerow

protected:
	int iloscPasazerow;	//zmienna okreslajaca ilosc pasazerow motorowki
};
