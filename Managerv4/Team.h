#pragma once
#include "Header.h"
#include "Bramkarz.h"
#include "Obronca.h"
#include "Pomocnik.h"
#include "Napastnik.h"
class Team {
	static int licznik;
	int id;
	string nazwa;
	double poziom;
	int taktyka;
	int forma;
	int punkty;
	int golz;
	int golp;
	int bilans;
	int miejsce;
	int pkt_treningu;
	double team_overal;
	double team_off;
	double team_deff;
	double team_mid;
	double bramkarz;
	friend class Zawodnik;
	friend class Liga;
	friend class File;
	friend int main();
	Zawodnik *zawodnicy[11];
public:
	Team(double, string);
	Team();
	~Team();
	void wypisz();
	void wypisz_liga();
	double get_team_overal();
	double get_team_off();
	double get_team_deff();
	double get_team_mid();
	double get_bramkarz();
	string get_nazwa();
	void set_punkty(int);
	void set_golz(int);
	void set_golp(int);
	void set_bilans();
	void set_miejsce(int);
	int get_punkty();
	int get_miejsce();
	int get_bilans();
	int get_golz();
	void set_forma(int);
	int get_forma();
	void set_trening(int);
	int get_trening();
	int get_golp();
};
