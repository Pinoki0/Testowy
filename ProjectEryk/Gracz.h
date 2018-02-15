
#include <iostream>
#include "Test.h"
#pragma once
using namespace std;

class Gracz
{
private:

    string imie;
    string nazwisko;
    string data;
    int punkty=0;
public:

    Gracz();
    ~Gracz();
    friend ostream &operator <<(ostream &ekran, const Gracz &wzor);
    friend class TestBazowy;
    friend class TestNowy;
    friend class Test;
};

