#ifndef BIBLIOTEKA_H
#define BIBLIOTEKA_H

#include "biblioteka.h"
#include <string>
#include <fstream>
#include <vector>

using namespace std;

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
    float getwskaznik_skalujacy1();
    float getwskaznik_skalujacy2();
    float long_kolejka();
};

class klient
{
public:
    klient(){};
    void wczytaj(int i);
    void wczytaj_ksiazke(int i);
    bool czy_ma_kare();
    bool czy_wypozycza();
    float ile_ma_kary();
    int ile_ksiazek_wypozycza();
};

#endif
