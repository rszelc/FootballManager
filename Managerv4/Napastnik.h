#pragma once
#include "Zawodnik.h"
class Napastnik
	:public Zawodnik {
	int wykanczanie;
	int strzaly;
	int podania;
	int odbior;
public:
	Napastnik(double);
	Napastnik(double, string);
	~Napastnik();
	void wypisz();
	void trening();
	int trening(int);
	string get_nazwa();
	string save();
	void load(string*);
};