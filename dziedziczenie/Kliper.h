// ten plik MOZNA modyfikowac

#pragma once
#include "Zaglowce.h"
#include <iostream>
#include <string>

class Kliper : public Zaglowiec	// klasa pochodna od klasy Zaglowiec, zawiera dostep do wszystkich metod i zmiennych klasy bazowej
{
public:
  void WypiszInformacje() const { Zaglowiec::WypiszInformacje();}	// metoda wypisujaca informacje na ekran, korzysta z metody WypiszInformacje() z klasy bazowej
};

