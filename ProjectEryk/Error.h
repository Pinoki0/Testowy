
#include<iostream>
#include<string>
#include<exception>
#pragma once
using namespace std;

class Error :public exception
{
	string komunikat;
public:
	virtual const char* what() const throw()
	{
		return komunikat.c_str();
	}
	static void menu(int wybor);

	Error(string);
	~Error() throw();
};
