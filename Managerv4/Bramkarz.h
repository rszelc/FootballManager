#pragma once
#include "Zawodnik.h"
class Bramkarz
	:public Zawodnik {
	int lapanie;
	int refleks;
	int wykop;
	int jnj;
	
	
public:
	Bramkarz(double);
	Bramkarz(double, string);
	~Bramkarz();
	void wypisz();
	void trening();
	int trening(int);
	string get_nazwa();
	string save();
	void load(string*);
};
