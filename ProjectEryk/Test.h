
#ifndef PL_H_INCLUDED
#define PL_H_INCLUDED
#include <iostream>

#pragma once



using namespace std;
class Gracz;



class Test
{
protected:


    int PointEasy=1;
    int PointMedium=2;
    int PointHard=3;
string **tabPytan;
public:

     Test();
     ~Test();



    virtual int getPoint(int poziomTrudnosci);
    virtual void rozpocznijTest(Test &obiekt, int poziom, Gracz &Marek);
    virtual void rozpocznijProbe(Test &obiekt, int poziom, Gracz &Marek);
    virtual void zapiszWynik(Gracz &Marek);

virtual void posortuj();
  virtual void wlasnyTest(Gracz &Marek,Test &obiekt);
};
#endif
