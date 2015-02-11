#include "biblioteka.h"
#include "biblioteka.cpp"

using namespace std;

int main()
{
	kolejka kolejkowicze;
    srand( time( NULL ) );
    int godzina=10;
    string tablica_ksiazek[200];
    kolejkowicze.przypisanie_dostepnosci_ksiazka(tablica_ksiazek);
	while(godzina<20) //biblioteka jest otwarta do godizny 20:00, jedna petla to godzina czasu trwania biblioteki
    {
        cout<<endl<<"Jest godzina: "<<godzina<<endl;
        if(godzina<15)
            {kolejkowicze.ilosc_osob=(kolejkowicze.long_kolejka()*kolejkowicze.getwskaznik_skalujacy1());}
        else
            {kolejkowicze.ilosc_osob=(kolejkowicze.long_kolejka()*kolejkowicze.getwskaznik_skalujacy2());}
        cout<<"W trakcie tej godziny otwarcia biblioteki pojawilo sie: "<<kolejkowicze.ilosc_osob<<" osob"<<endl;
        for(int i=0; i<kolejkowicze.ilosc_osob; i++)
        {
            klient *Jan_Kowalski=new klient;
            Jan_Kowalski->wczytaj(i);
            if(Jan_Kowalski->czy_oddaje())
                {cout<<"Oddaje "<< Jan_Kowalski->oddaj()<< " ksiazek."<<endl;}
            if(Jan_Kowalski->czy_ma_kare())
                {cout<<"Naliczono:" <<Jan_Kowalski->ile_ma_kary()<<" zlotych kary."<<endl;}
            else{cout<<"Nie przetrzymal ksiazek, wiec nie naliczono kary."<<endl;}
            if(Jan_Kowalski->czy_rezerwuje())
                {cout<<"Rezerwuje "<<Jan_Kowalski->rezerwacja()<<" ksiazki."<<endl;}
            if(Jan_Kowalski->czy_wypozycza())
            {
                int ile_ksiazek=Jan_Kowalski->ile_ksiazek_wypozycza();
                cout<<"Osoba wypozycza: "<<ile_ksiazek<<" ksiazek"<<endl<<"Tytuly i autorzy ksiazek to: "<<endl;
                for(int j=0; j<ile_ksiazek; j++)
                    {Jan_Kowalski->wczytaj_ksiazke(Jan_Kowalski->losowanie_ksiazki(),tablica_ksiazek);}
            }
            else{cout<<"Osoba nie wypozycza ksiazek."<<endl<<endl;}
            delete Jan_Kowalski;
        }
    godzina=godzina++;
    system("pause");
    }
    cout<<"Jest godzina 20:00 - zamkniecie biblioteki"<<endl;
    return 0;
};
