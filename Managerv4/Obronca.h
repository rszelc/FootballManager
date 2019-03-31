#pragma once
#include "Zawodnik.h"
class Obronca
	:public Zawodnik {
	int krycie;
	int odbior;
	int podania;
	int wykanczanie;
public:
	Obronca(double);
	Obronca(double, string);
	~Obronca();
	void wypisz();
	void trening();
	int trening(int);
	string get_nazwa();
	string save();
	void load(string*);
};
