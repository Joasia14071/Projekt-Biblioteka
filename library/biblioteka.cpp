#include "biblioteka.h"

#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>
#include <iostream>
#include <sstream>
#include <vector>
#include <iomanip>
#include <ctime>

using namespace std;

float kolejka :: getwskaznik_skalujacy1()
{
    return 0.2;
}
float kolejka :: getwskaznik_skalujacy2()
{
    return 0.8;
}

float kolejka :: long_kolejka()
{
    return ((rand() % 20 ) + 0); // 100 liczb_w_przedziale + startujemy od 0, losujemy dlugosc kolejki
}
void klient :: wczytaj(int i)
{
    ifstream plik("klienci.txt");
    if (plik.good() == true )
    {
                    int nr_wiersza=0;
                    string wiersz;
                    while ( !plik.eof() )
                    {
                          getline(plik,wiersz);
                          if(nr_wiersza==i){cout<<endl<<wiersz<<endl;}
                          nr_wiersza++;
                    }
    }
    else cout<<"ERROR\n\n";
}

int klient :: losowanie_ksiazki()
{
    return rand() % 200;
}

string klient :: wczytaj_ksiazke(int i, string tablica_ksiazek[200])
{
    ifstream plik("spis_ksiazek.txt");
    if (plik.good() == true )
    {
                    int nr_wiersza=0;
                    string wiersz;
                    while ( !plik.eof() )
                    {
                          getline(plik,wiersz);
                          if(nr_wiersza==i)
                            {
                                if (tablica_ksiazek[i]=="dostepna")
                                {
                                    tablica_ksiazek[i]="niedostepna";
                                    cout<<wiersz<<endl;
                                }
                                else{cout<<" *** Ta ksiazka jest juz wypozyczona."<<endl;}
                            }
                          nr_wiersza++;
                    }
    }
    else cout<<"ERROR\n\n";
}

string kolejka :: przypisanie_dostepnosci_ksiazka(string tab[200])
{
    ifstream plik("spis_ksiazek.txt");
    if (plik.good() == true )
    {
                    int nr_wiersza=0;
                    string wiersz;
                    while ( !plik.eof() )
                    {
                          getline(plik,wiersz);
                          for(int i=0; i<200; i++)
                            {tab[i]="dostepna";}
                    }
    }
    else cout<<"ERROR\n\n";
}

bool klient :: czy_oddaje()
{
    return rand() % 2;
}

bool klient :: czy_rezerwuje()
{
    return rand() % 2;
}

int klient :: oddaj()
{
    return (rand () % 20)+1;
}

int klient :: rezerwacja()
{
    return (rand() % 6)+1;
}
bool klient :: czy_ma_kare()
{
    return rand() % 2;
}

bool klient :: czy_wypozycza()
{
    return rand() % 2;
}

float klient :: ile_ma_kary()
{
    return (((rand() % 336 ) + 2) * 0.1); //kara za jeden dzien to 10 groszy
}

int klient ::ile_ksiazek_wypozycza()
{
    return (rand () % 20) +1; //wypozycza maksymalnie 20 ksizek
}
