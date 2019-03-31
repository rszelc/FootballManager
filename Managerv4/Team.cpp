#include "Team.h"
int Team::licznik = 0;
Team::Team(double T, string name)
{
	poziom = T;
	id = ++licznik;
	nazwa = name;
	punkty = 0;
	golz = 0;
	golp = 0;
	bilans = 0;
	miejsce = id;
	pkt_treningu = 0;
	taktyka = rand() % 7;
	if (taktyka == 0)
	{
		zawodnicy[0] = new Bramkarz(T);
		zawodnicy[1] = new Obronca(T);
		zawodnicy[2] = new Obronca(T);
		zawodnicy[3] = new Obronca(T);
		zawodnicy[4] = new Pomocnik(T);
		zawodnicy[5] = new Pomocnik(T);
		zawodnicy[6] = new Pomocnik(T);
		zawodnicy[7] = new Pomocnik(T);
		zawodnicy[8] = new Pomocnik(T);
		zawodnicy[9] = new Napastnik(T);
		zawodnicy[10] = new Napastnik(T);
		forma = 200;
		team_overal = forma;
		team_off = 50;
		team_deff = 25;
		team_mid = 75;
		for (int i = 0; i < 11; i++)
		{
			team_overal += zawodnicy[i]->overal;
			if (i > 0)
			{
				team_off += zawodnicy[i]->off_overal;
				team_deff += zawodnicy[i]->deff_overal;
				team_mid += zawodnicy[i]->mid_overal;
			}
		}
		bramkarz = 0.001*zawodnicy[0]->overal;
		
	}
	if (taktyka == 1)
	{
		zawodnicy[0] = new Bramkarz(T);
		zawodnicy[1] = new Obronca(T);
		zawodnicy[2] = new Obronca(T);
		zawodnicy[3] = new Obronca(T);
		zawodnicy[4] = new Pomocnik(T);
		zawodnicy[5] = new Pomocnik(T);
		zawodnicy[6] = new Pomocnik(T);
		zawodnicy[7] = new Pomocnik(T);
		zawodnicy[8] = new Napastnik(T);
		zawodnicy[9] = new Napastnik(T);
		zawodnicy[10] = new Napastnik(T);
		forma = 200;
		team_overal = forma;
		team_off = 75;
		team_deff = 25;
		team_mid = 50;
		for (int i = 0; i < 11; i++)
		{
			team_overal += zawodnicy[i]->overal;
			if (i > 0)
			{
				team_off += zawodnicy[i]->off_overal;
				team_deff += zawodnicy[i]->deff_overal;
				team_mid += zawodnicy[i]->mid_overal;
			}
		}
		bramkarz = 0.001*zawodnicy[0]->overal;
	}
	if (taktyka == 2)
	{
		zawodnicy[0] = new Bramkarz(T);
		zawodnicy[1] = new Obronca(T);
		zawodnicy[2] = new Obronca(T);
		zawodnicy[3] = new Obronca(T);
		zawodnicy[4] = new Obronca(T);
		zawodnicy[5] = new Pomocnik(T);
		zawodnicy[6] = new Pomocnik(T);
		zawodnicy[7] = new Pomocnik(T);
		zawodnicy[8] = new Pomocnik(T);
		zawodnicy[9] = new Pomocnik(T);
		zawodnicy[10] = new Napastnik(T);
		forma = 200;
		team_overal = forma;
		team_off = 25;
		team_deff = 50;
		team_mid = 75;
		for (int i = 0; i < 11; i++)
		{
			team_overal += zawodnicy[i]->overal;
			if (i > 0)
			{
				team_off += zawodnicy[i]->off_overal;
				team_deff += zawodnicy[i]->deff_overal;
				team_mid += zawodnicy[i]->mid_overal;
			}
		}
		bramkarz = 0.001*zawodnicy[0]->overal;
	}
	if (taktyka == 3)
	{
		zawodnicy[0] = new Bramkarz(T);
		zawodnicy[1] = new Obronca(T);
		zawodnicy[2] = new Obronca(T);
		zawodnicy[3] = new Obronca(T);
		zawodnicy[4] = new Obronca(T);
		zawodnicy[5] = new Pomocnik(T);
		zawodnicy[6] = new Pomocnik(T);
		zawodnicy[7] = new Pomocnik(T);
		zawodnicy[8] = new Pomocnik(T);
		zawodnicy[9] = new Napastnik(T);
		zawodnicy[10] = new Napastnik(T);
		forma = 200;
		team_overal = forma;
		team_off = 50;
		team_deff = 50;
		team_mid = 50;
		for (int i = 0; i < 11; i++)
		{
			team_overal += zawodnicy[i]->overal;
			if (i > 0)
			{
				team_off += zawodnicy[i]->off_overal;
				team_deff += zawodnicy[i]->deff_overal;
				team_mid += zawodnicy[i]->mid_overal;
			}
		}
		bramkarz = 0.001*zawodnicy[0]->overal;
	}
	if (taktyka == 4)
	{
		zawodnicy[0] = new Bramkarz(T);
		zawodnicy[1] = new Obronca(T);
		zawodnicy[2] = new Obronca(T);
		zawodnicy[3] = new Obronca(T);
		zawodnicy[4] = new Obronca(T);
		zawodnicy[5] = new Pomocnik(T);
		zawodnicy[6] = new Pomocnik(T);
		zawodnicy[7] = new Pomocnik(T);
		zawodnicy[8] = new Napastnik(T);
		zawodnicy[9] = new Napastnik(T);
		zawodnicy[10] = new Napastnik(T);
		forma = 200;
		team_overal = forma;
		team_off = 75;
		team_deff = 50;
		team_mid = 25;
		for (int i = 0; i < 11; i++)
		{
			team_overal += zawodnicy[i]->overal;
			if (i > 0)
			{
				team_off += zawodnicy[i]->off_overal;
				team_deff += zawodnicy[i]->deff_overal;
				team_mid += zawodnicy[i]->mid_overal;
			}
		}
		bramkarz = 0.001*zawodnicy[0]->overal;
	}
	if (taktyka == 5)
	{
		zawodnicy[0] = new Bramkarz(T);
		zawodnicy[1] = new Obronca(T);
		zawodnicy[2] = new Obronca(T);
		zawodnicy[3] = new Obronca(T);
		zawodnicy[4] = new Obronca(T);
		zawodnicy[5] = new Obronca(T);
		zawodnicy[6] = new Pomocnik(T);
		zawodnicy[7] = new Pomocnik(T);
		zawodnicy[8] = new Pomocnik(T);
		zawodnicy[9] = new Pomocnik(T);
		zawodnicy[10] = new Napastnik(T);
		forma = 200;
		team_overal = forma;
		team_off = 25;
		team_deff = 75;
		team_mid = 50;
		for (int i = 0; i < 11; i++)
		{
			team_overal += zawodnicy[i]->overal;
			if (i > 0)
			{
				team_off += zawodnicy[i]->off_overal;
				team_deff += zawodnicy[i]->deff_overal;
				team_mid += zawodnicy[i]->mid_overal;
			}
		}
		bramkarz = 0.001*zawodnicy[0]->overal;
	}
	if (taktyka == 6)
	{
		zawodnicy[0] = new Bramkarz(T);
		zawodnicy[1] = new Obronca(T);
		zawodnicy[2] = new Obronca(T);
		zawodnicy[3] = new Obronca(T);
		zawodnicy[4] = new Obronca(T);
		zawodnicy[5] = new Obronca(T);
		zawodnicy[6] = new Pomocnik(T);
		zawodnicy[7] = new Pomocnik(T);
		zawodnicy[8] = new Pomocnik(T);
		zawodnicy[9] = new Napastnik(T);
		zawodnicy[10] = new Napastnik(T);
		forma = 200;
		team_overal = forma;
		team_off = 50;
		team_deff = 75;
		team_mid = 50;
		for (int i = 0; i < 11; i++)
		{
			team_overal += zawodnicy[i]->overal;
			if (i > 0)
			{
				team_off += zawodnicy[i]->off_overal;
				team_deff += zawodnicy[i]->deff_overal;
				team_mid += zawodnicy[i]->mid_overal;
			}
		}
		bramkarz = 0.001*zawodnicy[0]->overal;
	}


}
Team::Team()
{
	int x;
	double T;
	id = ++licznik;
	string poz;
	cout << "wybierz poziom trudnosci(easy, medium, hard, ultra): ";
	getline(cin, poz);
	system("cls");
	while (poz != "easy" && poz != "medium" && poz != "hard" && poz != "ultra")
	{
		cout << "Erorr! Podaj poziom jeszcze raz: ";
		getline(cin, poz);
		system("cls");

	}
	if (poz == "easy")
	{
		T = 1.3;
		poziom = 1.3;
	}
	else if (poz == "medium")
	{
		T = 1.2;
		poziom = 1.2;
	}
	else if (poz == "hard")
	{
		T = 1.1;
		poziom = 1.1;
	}
	else if (poz == "ultra")
	{
		T = 1.0;
		poziom = 1.0;
	}
	cout << "Podaj nazwe druzyny: ";
	getline(cin, nazwa);
	system("cls");
	while (nazwa.length() < 1)
	{
		cout << "Nie podales nazwy druzyny! Podaj nazwe druzyny: "<<endl;
		getline(cin, nazwa);
		system("cls");
	}
	cout << "Wybierz taktyke (Wybierz madrze, nie bedzie mozliwosci jej zmienic!!!): "<<endl;
	cout << "1. 3-5-2" << endl;
	cout << "2. 3-4-3" << endl;
	cout << "3. 4-5-1" << endl;
	cout << "4. 4-4-2" << endl;
	cout << "5. 4-3-3" << endl;
	cout << "6. 5-4-1" << endl;
	cout << "7. 5-3-2" << endl;

	cin >> x;
	system("cls");
	switch (x)
	{
	case 1:
		taktyka = 0;
		break;
	case 2:
		taktyka = 1;
		break;
	case 3:
		taktyka = 2;
		break;
	case 4:
		taktyka = 3;
		break;
	case 5:
		taktyka = 4;
		break;
	case 6:
		taktyka = 5;
		break;
	case 7:
		taktyka = 6;
		break;
	}
	punkty = 0;
	golz = 0;
	golp = 0;
	bilans = 0;
	miejsce = id;
	pkt_treningu = 0;
	if (taktyka == 0)
	{
		zawodnicy[0] = new Bramkarz(T, "Bramkarz");
		zawodnicy[1] = new Obronca(T, "Srodkowy Obronca 1");
		zawodnicy[2] = new Obronca(T, "Srodkowy Obronca 2");
		zawodnicy[3] = new Obronca(T, "Srodkowy Obronca 3");
		zawodnicy[4] = new Pomocnik(T, "Lewy Skrzydlowy");
		zawodnicy[5] = new Pomocnik(T, "Srodkowy Pomocnik 1");
		zawodnicy[6] = new Pomocnik(T, "Srodkowy Pomocnik 2");
		zawodnicy[7] = new Pomocnik(T, "Srodkowy Pomocnik 3");
		zawodnicy[8] = new Pomocnik(T, "Prawy Skrzydlowy");
		zawodnicy[9] = new Napastnik(T, "Napastnik 1");
		zawodnicy[10] = new Napastnik(T, "Napastnik 2");
		forma = 200;
		team_overal = forma;
		team_off = 50;
		team_deff = 25;
		team_mid = 75;
		for (int i = 0; i < 11; i++)
		{
			team_overal += zawodnicy[i]->overal;
			if (i > 0)
			{
				team_off += zawodnicy[i]->off_overal;
				team_deff += zawodnicy[i]->deff_overal;
				team_mid += zawodnicy[i]->mid_overal;
			}
		}
		bramkarz = 0.001*zawodnicy[0]->overal;

	}
	if (taktyka == 1)
	{
		zawodnicy[0] = new Bramkarz(T);
		zawodnicy[1] = new Obronca(T);
		zawodnicy[2] = new Obronca(T);
		zawodnicy[3] = new Obronca(T);
		zawodnicy[4] = new Pomocnik(T);
		zawodnicy[5] = new Pomocnik(T);
		zawodnicy[6] = new Pomocnik(T);
		zawodnicy[7] = new Pomocnik(T);
		zawodnicy[8] = new Napastnik(T);
		zawodnicy[9] = new Napastnik(T);
		zawodnicy[10] = new Napastnik(T);
		forma = 200;
		team_overal = forma;
		team_off = 75;
		team_deff = 25;
		team_mid = 50;
		for (int i = 0; i < 11; i++)
		{
			team_overal += zawodnicy[i]->overal;
			if (i > 0)
			{
				team_off += zawodnicy[i]->off_overal;
				team_deff += zawodnicy[i]->deff_overal;
				team_mid += zawodnicy[i]->mid_overal;
			}
		}
		bramkarz = 0.001*zawodnicy[0]->overal;
	}
	if (taktyka == 2)
	{
		zawodnicy[0] = new Bramkarz(T);
		zawodnicy[1] = new Obronca(T);
		zawodnicy[2] = new Obronca(T);
		zawodnicy[3] = new Obronca(T);
		zawodnicy[4] = new Obronca(T);
		zawodnicy[5] = new Pomocnik(T);
		zawodnicy[6] = new Pomocnik(T);
		zawodnicy[7] = new Pomocnik(T);
		zawodnicy[8] = new Pomocnik(T);
		zawodnicy[9] = new Pomocnik(T);
		zawodnicy[10] = new Napastnik(T);
		forma = 200;
		team_overal = forma;
		team_off = 25;
		team_deff = 50;
		team_mid = 75;
		for (int i = 0; i < 11; i++)
		{
			team_overal += zawodnicy[i]->overal;
			if (i > 0)
			{
				team_off += zawodnicy[i]->off_overal;
				team_deff += zawodnicy[i]->deff_overal;
				team_mid += zawodnicy[i]->mid_overal;
			}
		}
		bramkarz = 0.001*zawodnicy[0]->overal;
	}
	if (taktyka == 3)
	{
		zawodnicy[0] = new Bramkarz(T);
		zawodnicy[1] = new Obronca(T);
		zawodnicy[2] = new Obronca(T);
		zawodnicy[3] = new Obronca(T);
		zawodnicy[4] = new Obronca(T);
		zawodnicy[5] = new Pomocnik(T);
		zawodnicy[6] = new Pomocnik(T);
		zawodnicy[7] = new Pomocnik(T);
		zawodnicy[8] = new Pomocnik(T);
		zawodnicy[9] = new Napastnik(T);
		zawodnicy[10] = new Napastnik(T);
		forma = 200;
		team_overal = forma;
		team_off = 50;
		team_deff = 50;
		team_mid = 50;
		for (int i = 0; i < 11; i++)
		{
			team_overal += zawodnicy[i]->overal;
			if (i > 0)
			{
				team_off += zawodnicy[i]->off_overal;
				team_deff += zawodnicy[i]->deff_overal;
				team_mid += zawodnicy[i]->mid_overal;
			}
		}
		bramkarz = 0.001*zawodnicy[0]->overal;
	}
	if (taktyka == 4)
	{
		zawodnicy[0] = new Bramkarz(T);
		zawodnicy[1] = new Obronca(T);
		zawodnicy[2] = new Obronca(T);
		zawodnicy[3] = new Obronca(T);
		zawodnicy[4] = new Obronca(T);
		zawodnicy[5] = new Pomocnik(T);
		zawodnicy[6] = new Pomocnik(T);
		zawodnicy[7] = new Pomocnik(T);
		zawodnicy[8] = new Napastnik(T);
		zawodnicy[9] = new Napastnik(T);
		zawodnicy[10] = new Napastnik(T);
		forma = 200;
		team_overal = forma;
		team_off = 75;
		team_deff = 50;
		team_mid = 25;
		for (int i = 0; i < 11; i++)
		{
			team_overal += zawodnicy[i]->overal;
			if (i > 0)
			{
				team_off += zawodnicy[i]->off_overal;
				team_deff += zawodnicy[i]->deff_overal;
				team_mid += zawodnicy[i]->mid_overal;
			}
		}
		bramkarz = 0.001*zawodnicy[0]->overal;
	}
	if (taktyka == 5)
	{
		zawodnicy[0] = new Bramkarz(T);
		zawodnicy[1] = new Obronca(T);
		zawodnicy[2] = new Obronca(T);
		zawodnicy[3] = new Obronca(T);
		zawodnicy[4] = new Obronca(T);
		zawodnicy[5] = new Obronca(T);
		zawodnicy[6] = new Pomocnik(T);
		zawodnicy[7] = new Pomocnik(T);
		zawodnicy[8] = new Pomocnik(T);
		zawodnicy[9] = new Pomocnik(T);
		zawodnicy[10] = new Napastnik(T);
		forma = 200;
		team_overal = forma;
		team_off = 25;
		team_deff = 75;
		team_mid = 50;
		for (int i = 0; i < 11; i++)
		{
			team_overal += zawodnicy[i]->overal;
			if (i > 0)
			{
				team_off += zawodnicy[i]->off_overal;
				team_deff += zawodnicy[i]->deff_overal;
				team_mid += zawodnicy[i]->mid_overal;
			}
		}
		bramkarz = 0.001*zawodnicy[0]->overal;
	}
	if (taktyka == 6)
	{
		zawodnicy[0] = new Bramkarz(T);
		zawodnicy[1] = new Obronca(T);
		zawodnicy[2] = new Obronca(T);
		zawodnicy[3] = new Obronca(T);
		zawodnicy[4] = new Obronca(T);
		zawodnicy[5] = new Obronca(T);
		zawodnicy[6] = new Pomocnik(T);
		zawodnicy[7] = new Pomocnik(T);
		zawodnicy[8] = new Pomocnik(T);
		zawodnicy[9] = new Napastnik(T);
		zawodnicy[10] = new Napastnik(T);
		forma = 200;
		team_overal = forma;
		team_off = 50;
		team_deff = 75;
		team_mid = 50;
		for (int i = 0; i < 11; i++)
		{
			team_overal += zawodnicy[i]->overal;
			if (i > 0)
			{
				team_off += zawodnicy[i]->off_overal;
				team_deff += zawodnicy[i]->deff_overal;
				team_mid += zawodnicy[i]->mid_overal;
			}
		}
		bramkarz = 0.001*zawodnicy[0]->overal;
	}

	cout << "Gratuluje stworzyles druzyne: " << nazwa << endl;
	system("pause");
	system("cls");

}
Team::~Team()
{
	--licznik;
	for (int i = 0; i < 11; i++)
		delete[] zawodnicy[i];
}
void Team::wypisz()
{
	for (int i = 0; i < 11; i++)
		zawodnicy[i]->wypisz();
}
double Team::get_team_overal()
{
	return team_overal;
}
double Team::get_team_off()
{
	return team_off;
}
double Team::get_team_deff()
{
	return team_deff;
}
double Team::get_team_mid()
{
	return team_mid;
}
double Team::get_bramkarz()
{
	return bramkarz;
}
string Team::get_nazwa()
{
	return nazwa;
}
void Team::set_punkty(int x)
{
	punkty += x;
}
void Team::set_golz(int x)
{
	golz += x;
}
void Team::set_golp(int x)
{
	golp += x;
}
void Team::set_bilans()
{
	bilans = golz - golp;
}
int Team::get_punkty()
{
	return punkty;
}
void Team::set_miejsce(int x)
{
	miejsce = x;
}
int Team::get_miejsce()
{
	return miejsce;
}
int Team::get_bilans()
{
	return bilans;
}
int Team::get_golz()
{
	return golz;
}
void Team::set_forma(int x)
{
	forma -= x;
	team_overal -= x;
}

int Team::get_forma()
{
	return forma;
}
void Team::set_trening(int x)
{
	pkt_treningu += x;
}
int Team::get_trening()
{
	return pkt_treningu;
}
int Team::get_golp()
{
	return golp;
}
void Team::wypisz_liga()
{
	cout << miejsce <<". "<< setw(20)<<left<<nazwa <<setw(4)<<right<< golz  << "-" << setw(4)<<left<<golp <<setw(4)<<left<< bilans <<setw(4)<<left<< punkty << endl;

}
