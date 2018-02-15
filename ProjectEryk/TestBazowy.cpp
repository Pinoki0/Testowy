#include <iostream>
#include "TestBazowy.h"
#include <fstream>
#include <string>
#include "Gracz.h"
#include "Test.h"

#include <cstdlib>
using namespace std;


 TestBazowy::~TestBazowy()
 {

 }

TestBazowy::TestBazowy()
 {

 }

/*
void TestBazowy::rozpocznijProbe(Test &obiekt, int poziom, Gracz &Marek)
{


    obiekt.tabPytan = new string * [10];

    for(int i=0;i<10;i++)
            obiekt.tabPytan[i]= new string [6];

          if(poziom==1)
            {

        fstream plik;
        plik.open("Easy.txt");
        string napis;

    int k=0;
    int h=0;
    if(plik.good())
    {
        while(!plik.eof())
        {
            getline(plik, napis, ';');
            obiekt.tabPytan[k][h]=napis;
            h++;
            if(h==6)
            {
                k++;
                h=0;
            }
            if(k==10)
            break;
        }

    }


            }
        else if(poziom==2)
            {

        fstream plik;
        plik.open("Medium.txt");
        string napis;

    int k=0;
    int h=0;
    if(plik.good())
    {
        while(!plik.eof())
        {
            getline(plik, napis, ';');
            obiekt.tabPytan[k][h]=napis;
            h++;
            if(h==6)
            {
                k++;
                h=0;
            }
            if(k==10)
            break;
        }

    }
            }
        else if(poziom==3)
            {

        fstream plik;
        plik.open("Easy.txt");
        string napis;

    int k=0;
    int h=0;
    if(plik.good())
    {
        while(!plik.eof())
        {
            getline(plik, napis, ';');
            obiekt.tabPytan[k][h]=napis;
            h++;
            if(h==6)
            {
                k++;
                h=0;
            }
            if(k==10)
            break;
        }

    }
            }



        cout<<"Zaczynamy test, podaj poprawny numer kazdej odpowiedzi do 10 pytan!"<<endl;
        string odpowiedz;

        for(int i=0;i<10;i++)
        {


          for(int j=0;j<5;j++)
        {

            cout<<obiekt.tabPytan[i][j]<<endl;


        }
        cout<<"Wprowadz odpowiedz: ";

        cin>>odpowiedz;
            if((obiekt.tabPytan[i][5].erase(0,1))==odpowiedz)
            {
            cout<<"Brawo!"<<endl;
            Marek.punkty+=obiekt.getPoint(poziom);
            }

        }
 cout<<"Zdobyles: "<<Marek.punkty<<" punkty"<<endl;

            }




void TestBazowy::rozpocznijTest(Test &obiekt, int poziom, Gracz &Marek)
{


    obiekt.tabPytan = new string * [10];

    for(int i=0;i<10;i++)
            obiekt.tabPytan[i]= new string [6];

          if(poziom==1)
            {

        fstream plik;
        plik.open("Easy.txt");
        string napis;

    int k=0;
    int h=0;
    if(plik.good())
    {
        while(!plik.eof())
        {
            getline(plik, napis, ';');
            obiekt.tabPytan[k][h]=napis;
            h++;
            if(h==6)
            {
                k++;
                h=0;
            }
            if(k==10)
            break;
        }

    }


            }
        else if(poziom==2)
            {

        fstream plik;
        plik.open("Medium.txt");
        string napis;

    int k=0;
    int h=0;
    if(plik.good())
    {
        while(!plik.eof())
        {
            getline(plik, napis, ';');
            obiekt.tabPytan[k][h]=napis;
            h++;
            if(h==6)
            {
                k++;
                h=0;
            }
            if(k==10)
            break;
        }

    }
            }
        else if(poziom==3)
            {

        fstream plik;
        plik.open("Easy.txt");
        string napis;

    int k=0;
    int h=0;
    if(plik.good())
    {
        while(!plik.eof())
        {
            getline(plik, napis, ';');
            obiekt.tabPytan[k][h]=napis;
            h++;
            if(h==6)
            {
                k++;
                h=0;
            }
            if(k==10)
            break;
        }

    }
            }



        cout<<"Zaczynamy test, podaj poprawny numer kazdej odpowiedzi do 10 pytan!"<<endl;
        string odpowiedz;

        for(int i=0;i<10;i++)
        {


          for(int j=0;j<5;j++)
        {

            cout<<obiekt.tabPytan[i][j]<<endl;


        }
        cout<<"Wprowadz odpowiedz: ";

        cin>>odpowiedz;
            if((obiekt.tabPytan[i][5].erase(0,1))==odpowiedz)
            {
            cout<<"Brawo!"<<endl;
            Marek.punkty+=obiekt.getPoint(poziom);
            }


        }
 cout<<"Zdobyles: "<<Marek.punkty<<" punkty"<<endl;
obiekt.zapiszWynik(Marek);
obiekt.posortuj();
            }



void TestBazowy::zapiszWynik(Gracz &Marek)
{

    string typ;
    ofstream plik;
    plik.open("ranking.txt",ios::app);

            plik<<Marek.imie<<";"<<Marek.nazwisko<<";"<<Marek.data<<";"<<Marek.punkty<<";"<<endl;

    plik.close();


}

void TestBazowy::posortuj()
{

        fstream plik;
        plik.open("ranking.txt");
        string napis;
        int licznikZawodnikow=0;

    if(plik.good())
    {
        while(!plik.eof())
        {
            getline(plik, napis, ';');
            licznikZawodnikow++;
        }


    }

    licznikZawodnikow=(licznikZawodnikow-1)/4;
cout<<"Licznik zawodnikow: "<<licznikZawodnikow;
    plik.close();
    string **tabRanking;
    tabRanking = new string * [licznikZawodnikow];

    for(int i=0;i<licznikZawodnikow;i++)
            tabRanking[i]= new string [4];



        plik.open("ranking.txt");

    int k=0;
    int h=0;
    if(plik.good())
    {
        while(!plik.eof())
        {
            getline(plik, napis, ';');
            tabRanking[k][h]=napis;
            h++;
            if(h==4)
            {
                k++;
                h=0;
            }
            if(k==licznikZawodnikow)
            break;
        }
    }
    plik.close();



   int maximum;
    for(int j=0;j<licznikZawodnikow;j++)
    {
        int pomocnik=0;
        maximum=31;
    for(int i=0;i<licznikZawodnikow;i++)
    {
        if(atoi(tabRanking[i][3].c_str())<=maximum)
            maximum=atoi(tabRanking[i][3].c_str());
    }

     for(int i=0;i<licznikZawodnikow;i++)
    {
        if(atoi(tabRanking[i][3].c_str())==maximum)
            {
                pomocnik=i;
                break;
            }
    }

        plik.open("rankingPosortowany.txt",ios::app);
        plik<<tabRanking[pomocnik][0]<<";"<<tabRanking[pomocnik][1]<<";"<<tabRanking[pomocnik][2]<<";"<<tabRanking[pomocnik][3]<<";"<<endl;
        plik.close();
        tabRanking[pomocnik][3]="32";

    }
    plik.open("rankingPosortowany.txt",ios::app);
    plik<<"=========NOWY RANKING========="<<endl;
    plik.close();
}
void TestBazowy::wlasnyTest(Gracz &Marek,Test &obiekt)
{
    ofstream plik;
    string tekst;
    cout<<"Ile pytan chcesz wprowadzic: ";
    int ilePyt;
    cin>>ilePyt;
    plik.open("nowyTest.txt",ios::app);
    cout<<endl<<"Wprowadz kolejno pytanie, 4 odpowiedzi do wyboru i nastepnie prawidlowa odp w formie cyfry 1-4."<<endl;
    for(int i=0;i<(ilePyt*6);i++)
    {

            getline(cin,tekst);
            plik<<tekst<<";"<<endl;

    }
    plik.close();



}

*/
