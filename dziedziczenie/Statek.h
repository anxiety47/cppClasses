#pragma once
#include <iostream>
#include <string>

class Statek		//klasa bazowa, po niej dziedzicza wszystkie inne klasy, zawiera takie elementy, ktore wystepuja w kazdym obiekcie
{
	protected:
		std::string nazwa;		//zmienna okreslajaca nazwe statku
		int wypornosc;				// zmienna okreslajaca wypornosc statku
		
	public:
	///
		virtual void WypiszInformacje() const	// metoda wypisujaca podstawowe informacje na ekran
		{
			std::cout <<"nazwa: " << nazwa << std::endl;
			std::cout <<"wypornosc: " << wypornosc << std::endl;
		}
	///
		void UstawNazwe(std::string tekst) { nazwa = tekst;}		//metoda ustawiajaca zmienna nazwa statku
		void UstawWypornosc(int wyp) { wypornosc = wyp;}			//metoda ustawiajaca zmienna wypornosc statku
		


};