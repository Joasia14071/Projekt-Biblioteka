#ifndef BIBLIOTEKA_H
#define BIBLIOTEKA_H

#include "biblioteka.h"
#include <string>
#include <fstream>
#include <vector>

using namespace std;

class kolejka
{
public:
    kolejka(){};
    int ilosc_osob;
    float getwskaznik_skalujacy1();
    float getwskaznik_skalujacy2();
    float long_kolejka();
    string przypisanie_dostepnosci_ksiazka(string tablica[200]);
};

class klient
{
public:
    klient(){};
    int losowanie_ksiazki();
    int oddaj();
    int rezerwacja();
    void wczytaj(int i);
    string wczytaj_ksiazke(int i, string tab[200]);
    bool czy_rezerwuje();
    bool czy_oddaje();
    bool czy_ma_kare();
    bool czy_wypozycza();
    float ile_ma_kary();
    int ile_ksiazek_wypozycza();
};

#endif
