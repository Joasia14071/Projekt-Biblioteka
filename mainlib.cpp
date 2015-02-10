#include "biblioteka.h"
#include "biblioteka.cpp"

using namespace std;

int main()
{
	Lib techniczna;
	hour dzien;
	kolejka kolejkowicze;
	while(dzien.godzina<20) //biblioteka jest otwarta do godizny 20:00, jedna petla to godzina czasu trwania biblioteki
    {
        cout<<"Jest godzina: "<<dzien.godzina<<endl;
        if(dzien.godzina<15){kolejkowicze.wskaznik_skalujacy=0.2;}
        else{kolejkowicze.wskaznik_skalujacy=0.8;}
        kolejkowicze.ilosc_osob=(kolejkowicze.long_kolejka()*kolejkowicze.wskaznik_skalujacy);
        cout<<kolejkowicze.wskaznik_skalujacy<<endl<<endl;
        cout<<kolejkowicze.long_kolejka()<<endl<<endl;
        cout<<"W trakcie tej godziny otwarcia biblioteki pojawilo sie:"<<kolejkowicze.ilosc_osob<<" osob"<<endl;
        techniczna.wczytaj();
        techniczna.przypisz();
        techniczna.wypisz();
        dzien.godzina=dzien.godzina++;
    }
    cout<<"Jest godzina 20:00 - zamkniecie biblioteki"<<endl;
    return 0;
};

