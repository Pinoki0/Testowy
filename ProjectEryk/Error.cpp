#include"Error.h"

using namespace std;

Error::Error(string komunikat)
{
	this->komunikat = komunikat;
}

Error::~Error() throw()
{

}


void Error::menu(int wybor)
{
	string komunikat = "Podaj cyfre od 1 do 4 !";
	if (!(wybor==1 || wybor==2 || wybor==3 || wybor==4))
		throw Error(komunikat);
}

