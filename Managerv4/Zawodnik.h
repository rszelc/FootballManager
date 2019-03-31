#pragma once
#include "Header.h"
class Zawodnik {
	static int licznik;
protected:
	string nazwa;
	int id;
	int sila;
	int szybkosc;
	int kondycja;
	double overal;
	double off_overal;
	double deff_overal;
	double mid_overal;
	friend class Team;
	friend class Liga;
	friend class File;
public:
	Zawodnik();
	virtual ~Zawodnik();
	virtual void wypisz() = 0;
	virtual void trening() = 0;
	virtual int trening(int) = 0;
	virtual string get_nazwa() = 0;
	virtual string save() = 0;
	virtual void load(string*) = 0;
};
