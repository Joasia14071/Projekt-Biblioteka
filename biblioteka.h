#ifndef BIBLIOTEKA_H
#define BIBLIOTEKA_H

#include "biblioteka.h"
#include <string>
#include <fstream>
#include <vector>

using namespace std;

class Lib
{
	public:
	    Lib(){};
		void menu();
		void wczytaj();
		void przypisz();
		void wypisz();
		void zamknij();
	private:
		fstream plik;
		vector<string> regal[6];
		int lib[8][2];
};

class hour
{
public:
    hour(){};
    int godzina=10;//biblioteka jest otwierana o 10:00
};

class kolejka
{
public:
    kolejka(){};
    int ilosc_osob;
    int wskaznik_skalujacy;
    int long_kolejka();
};


#endif
