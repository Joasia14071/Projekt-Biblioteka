#include "biblioteka.h"
#include "biblioteka.cpp"

using namespace std;

int main()
{
	Lib techniczna;
	hour dzien;
	kolejka kolejkowicze;
    srand( time( NULL ) );
	while(dzien.godzina<20) //biblioteka jest otwarta do godizny 20:00, jedna petla to godzina czasu trwania biblioteki
    {
        cout<<"Jest godzina: "<<dzien.godzina<<endl;
        if(dzien.godzina<15)
            {kolejkowicze.ilosc_osob=(kolejkowicze.long_kolejka()*kolejkowicze.getwskaznik_skalujacy1());}
        else
            {kolejkowicze.ilosc_osob=(kolejkowicze.long_kolejka()*kolejkowicze.getwskaznik_skalujacy2());}
        cout<<"W trakcie tej godziny otwarcia biblioteki pojawilo sie: "<<kolejkowicze.ilosc_osob<<" osob"<<endl;
        for(int i=0; i<kolejkowicze.ilosc_osob; i++)
        {
            klient *Jan_Kowalski=new klient;
            Jan_Kowalski->wczytaj(i);
            if(Jan_Kowalski->czy_ma_kare())
            {
                float kara=Jan_Kowalski->ile_ma_kary();
                cout<<"Naliczono :" <<kara<<" zlotych kary."<<endl<<endl;
            }
            else
            {
                cout<<"Nie przetrzymal ksiazek, wiec nie naliczono kary."<<endl<<endl;
            }
            if(Jan_Kowalski->czy_wypozycza())
            {
                int ile_ksiazek=Jan_Kowalski->ile_ksiazek_wypozycza();
                cout<<"Osoba wypozycza: "<<ile_ksiazek<<" ksiazek"<<endl<<endl;
            }
            else
            {
                cout<<"Osoba nie wypozycza ksiazek."<<endl<<endl;
            }
            //techniczna.wczytaj();
            //techniczna.przypisz();
            //techniczna.wypisz();
            delete Jan_Kowalski;
        }
    dzien.godzina=dzien.godzina++;
    }
    cout<<"Jest godzina 20:00 - zamkniecie biblioteki"<<endl;
    return 0;
};
