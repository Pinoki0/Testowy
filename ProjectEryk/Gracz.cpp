#include <iostream>
#include "Gracz.h"
using namespace std;

Gracz::Gracz()
{
    cout<<"Prosze podac imie: "<<endl;
    cin>>imie;
    cout<<"Prosze podac nazwisko: "<<endl;
    cin>>nazwisko;
    cout<<"Prosze podac date: "<<endl;
    cin>>data;
    cout<<endl<<"Dziekujemy "<<imie<<" "<<nazwisko<<endl;
}

Gracz::~Gracz()
{


}

ostream &operator <<(ostream &ekran, const Gracz &wzor)
{
    ekran<<"Informacje o Graczu:  "<<"imie: "<<wzor.imie<<" nazwisko: "<<wzor.nazwisko<<" data: "<<wzor.data<<" liczba uzyskanych punktow: "<<wzor.punkty<<endl;
}
