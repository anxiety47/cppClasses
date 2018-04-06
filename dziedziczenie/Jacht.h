#pragma once

#include "Zaglowce.h"
#include "StatekSilnikowy.h"
#include <iostream>
#include <string>

//klasa Jacht dziedziczy po dwoch klasach: Zaglowiec i Statek Silnikowy, poniewaz ma cechy obu klas (np. stanZagli i poziomOleju)
// w ten sposob dziedziczy wszystkie zmienne zawarte w obu klasach
class Jacht : public StatekSilnikowy, public Zaglowiec	
{
	public:
	
	// Metoda wypisujaca informacje nt. Jachtu, korzysta z metody wirtualnej z klasy bazowej Statek 
	//oraz dwoch metod z klas po ktorych dziedziczy (w taki sposob, aby dane byly odpowiednio wypisywane)
		void WypiszInformacje() const
		{
			Statek::WypiszInformacje();
			Zaglowiec::WypiszStanZagliDlaStatkow();
			StatekSilnikowy::WypiszPoziomOlejuDlaStatkow();		
		}

};