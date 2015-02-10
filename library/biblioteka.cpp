#include "biblioteka.h"

#include <fstream>
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
    string tablica[20];
    getline(plik, tablica[i]);
    cout<<tablica[i]<<endl;
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
    return (((rand() % 336 ) + 2) * 0,1); //kara za jeden dzien to 10 groszy
}

int klient ::ile_ksiazek_wypozycza()
{
    return (rand () % 20) +1; //wypozycza maksymalnie 20 ksi¹¿ek
}

void Lib :: wczytaj()
{
	plik.open("lektury.txt");

	if( plik.good() == true )
    {
        cout << "Wczytano baze lektur" <<endl<<endl;
    }
    else cout << "Brak dostepu do bazy lektur" <<endl<<endl;
}

void Lib :: przypisz()
{
	int i = 1;
	int k = 0;
	string a;
	while(!plik.eof())
    {
		plik >> a;
		regal[i].push_back(a);
		i=(i+1)%3;
	}
}

void Lib :: wypisz()
 {
	int i = 0;
	int k = 0;

	while(k<regal[i].size())
    {
		cout << setw(20) << regal[i].at(k);
		i++;
		if (i==3)
		 {
			i=0;
			k++;
			cout << endl;
		}
	}
}

void Lib :: zamknij()
{
	plik.close();
}
