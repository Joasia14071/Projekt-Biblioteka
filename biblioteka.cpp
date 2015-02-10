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

int kolejka :: long_kolejka()
{
    srand( time( NULL ) );
    return ((rand() % 100 ) + 0); // 100 liczb_w_przedziale + startujemy od 0, losujemy dlugosc kolejki
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
