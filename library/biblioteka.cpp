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

void klient :: wczytaj_ksiazke(int i)
{
    ifstream plik("spis_ksiazek.txt");
    if (plik.good() == true )
    {
                    int nr_wiersza=0;
                    string wiersz;
                    while ( !plik.eof() )
                    {
                          getline(plik,wiersz);
                          if(nr_wiersza==i){cout<<wiersz<<endl;}
                          nr_wiersza++;
                    }
    }
    else cout<<"ERROR\n\n";
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
