#include <iostream>
#include "Error.h"
#include "Test.h"
#include "Gracz.h"
#include "TestBazowy.h"
#include "TestNowy.h"
#include <cstdlib>
using namespace std;

int main()
{
    Gracz bazowy;
    cout<<"Witaj w tescie!"<<endl;
    cout<<"1. Test z bazowymi pytaniami."<<endl;
    cout<<"2. Test probny bez punktow z bazowymi pytaniami."<<endl;
    cout<<"3. Utworz wlasny test i rozwiaz go."<<endl;
    cout<<"4. Wyjscie."<<endl;
    cout<<"Wybierz numer: ";



    int poziom;
    string tekst;
    int wybor ;
	while (true)
	{
		getline(cin, tekst);
		wybor = atoi(tekst.c_str());
		try {
			Error::menu(wybor);
			break;
		}
		catch (Error &e)
		{
			cout << e.what() << endl;
		}
	}


    switch(wybor)
    {
        case 1:
            {


        TestBazowy test;

        cout<<"Prosze podac poziom trudnosci 1-easy, 2-medium, 3 hard"<<endl;
        cin>>poziom;
        test.rozpocznijTest(test,poziom,bazowy);
        break;
            }
        case 2:
            {


        TestBazowy test;

        cout<<"Prosze podac poziom trudnosci 1-easy, 2-medium, 3 hard"<<endl;
        cin>>poziom;
        test.rozpocznijProbe(test,poziom,bazowy);
        break;
            }
        case 3:
            {

            TestNowy test;
            test.wlasnyTest(bazowy,test);
            break;
            }

        case 4:
        return 0;
        break;
        deafult:
            cout<<"Zly wybor!"<<endl;


    }
    cout<<endl;
    cout<<bazowy;



    return 0;
}


/*-Obsluga b��d�w.
-TestNowy(funkcja rozocznijgre()- a w niej przeprowadzenie testu bez podzia�u na poziom trudno�ci
-w TestBazowy musze stworzy� funkcj� uzupe�niaj�c� tablice po przez podane z klawiatury pytania
-w klasie Gracz musz� stworzy� funkcje zapisuj�c� wynik
-w klasie Gracz musz� stworzy� funkcje zapisuj�c� i jednocze�nie uk�adaj�c� wed�ug wyniku w rankingu
*/
