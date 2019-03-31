#pragma once
#include "Header.h"
#include "Team.h"
#include "file.h"
class Liga {
	string nazwa = "Ekstraliga";
	Team *druzyny[8];
	friend int main();
	friend class File;
	friend ostream& operator<<(ostream &out, Liga&);
	int licznik;
	
public:
	
	Liga();
	Liga(int);
	~Liga();
	void wypisz();
	void mecz(int, int);
	void miejsce();
	void trening(int);
	void trening1(int);
	void trening2(int);
	void kolejka1();
	void kolejka2();
	void kolejka3();
	void kolejka4();
	void kolejka5();
	void kolejka6();
	void kolejka7();
	void kolejka8();
	void kolejka9();
	void kolejka10();
	void kolejka11();
	void kolejka12();
	void kolejka13();
	void kolejka14();
	void end_of_sezon();
};