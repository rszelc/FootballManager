#pragma once
#include "Zawodnik.h"
class Pomocnik
	:public Zawodnik {
	int podania;
	int technika;
	int wykanczanie;
	int krycie;
public:
	Pomocnik(double);
	Pomocnik(double, string);
	~Pomocnik();
	void wypisz();
	void trening();
	int trening(int);
	string get_nazwa();
	string save();
	void load(string*);
};
