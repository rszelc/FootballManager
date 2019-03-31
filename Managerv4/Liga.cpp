#include "Liga.h"
Liga::Liga()
{
	druzyny[0] = new Team(1.3, "Piechota Warszawa");
	druzyny[1] = new Team(1.3, "Jaroslaw Poznan");
	druzyny[2] = new Team(1.2, "Stoczniowiec Zabrze");
	druzyny[3] = new Team(1.2, "Piast Bialystok");
	druzyny[4] = new Team(1.1, "Wyzyna Lubin");
	druzyny[5] = new Team(1.1, "Barka Gdynia");
	druzyny[6] = new Team();
	druzyny[7] = new Team(1.0, "Pradnik Krakow");
	licznik = 1;

}
Liga::Liga(int x)
{
	druzyny[0] = new Team(1.3, "Piechota Warszawa");
	druzyny[1] = new Team(1.3, "Jaroslaw Poznan");
	druzyny[2] = new Team(1.2, "Stoczniowiec Zabrze");
	druzyny[3] = new Team(1.2, "Piast Bialystok");
	druzyny[4] = new Team(1.1, "Wyzyna Lubin");
	druzyny[5] = new Team(1.1, "Barka Gdynia");
	druzyny[6] = new Team(1.0, "Wczytaj");
	druzyny[7] = new Team(1.0, "Pradnik Krakow");
	licznik = 1;

}
Liga::~Liga()
{
	for (int i = 0; i < 8; i++)
		delete[] druzyny[i];
}
void Liga::mecz(int a, int b)
{
	double Agol, Bgol;
	int Awynik = 0, Bwynik = 0;
	double Aprawd = 0.55;
	double Bprawd = 0.45;
	Aprawd = (Aprawd*(druzyny[a]->get_team_overal() / druzyny[b]->get_team_overal())*(druzyny[a]->get_team_off() / druzyny[b]->get_team_deff())*(druzyny[a]->get_team_mid() / druzyny[b]->get_team_mid())) - druzyny[b]->get_bramkarz();
	Bprawd = (Bprawd*(druzyny[b]->get_team_overal() / druzyny[a]->get_team_overal())*(druzyny[b]->get_team_off() / druzyny[a]->get_team_deff())*(druzyny[b]->get_team_mid() / druzyny[a]->get_team_mid())) - druzyny[a]->get_bramkarz();
	if (Aprawd > 0.95)
		Aprawd = 0.95;
	if (Aprawd < 0.05)
		Aprawd = 0.05;
	if (Bprawd > 0.95)
		Bprawd = 0.95;
	if (Bprawd < 0.05)
		Bprawd = 0.05;
	for (int i = 0; i < 5; i++)
	{
		Agol = (rand() % 100 + 1) / 100.00;
		Bgol = (rand() % 100 + 1) / 100.00;
		if (Agol < Aprawd)
		{
			Awynik++;
		}
		if (Bgol < Bprawd)
		{
			Bwynik++;
		}
	}
	cout << setw(20) << right << druzyny[a]->get_nazwa() << setw(5) << right << Awynik << " : " << setw(5) << left << Bwynik << setw(20) << left << druzyny[b]->get_nazwa() << endl;
	if (Awynik > Bwynik)
	{
		druzyny[a]->set_punkty(3);
		druzyny[a]->set_trening(3);
		druzyny[b]->set_trening(4);
		if (druzyny[a]->get_forma() < 300)
			druzyny[a]->set_forma(-20);
		if (druzyny[b]->get_forma() > 100)
			druzyny[b]->set_forma(20);
	}
	else if (Awynik < Bwynik)
	{
		druzyny[b]->set_punkty(3);
		druzyny[b]->set_trening(3);
		druzyny[a]->set_trening(4);
		if (druzyny[b]->get_forma() < 300)
			druzyny[b]->set_forma(-20);
		if (druzyny[a]->get_forma() > 100)
			druzyny[a]->set_forma(20);
	}
	else
	{
		druzyny[a]->set_punkty(1);
		druzyny[b]->set_punkty(1);
		druzyny[b]->set_trening(3);
		druzyny[a]->set_trening(3);

	}
	druzyny[a]->set_golp(Bwynik);
	druzyny[a]->set_golz(Awynik);
	druzyny[a]->set_bilans();
	druzyny[b]->set_golp(Awynik);
	druzyny[b]->set_golz(Bwynik);
	druzyny[b]->set_bilans();
	miejsce();

}
void Liga::miejsce()
{
	int x = 1;
	for (int i = 0; i < 8; i++)
	{
		x = 1;
		for (int j = 0; j < 8; j++)
		{
			
			if (druzyny[j]->get_punkty() > druzyny[i]->get_punkty())
				x++;
			else if (druzyny[j]->get_punkty() == druzyny[i]->get_punkty())
			{
				if (druzyny[j]->get_bilans() > druzyny[i]->get_bilans())
					x++;
				else if (druzyny[j]->get_bilans() == druzyny[i]->get_bilans())
					if (druzyny[j]->get_golz() > druzyny[i]->get_golz())
						x++;
			}

		}
		druzyny[i]->set_miejsce(x);
		
	}
	
}
ostream& operator<<(ostream &out, Liga &A)
{
	int x = 1;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (A.druzyny[j]->get_miejsce() == x)
				out << A.druzyny[j]->get_miejsce() << ". " << setw(20) << left << A.druzyny[j]->get_nazwa() << setw(4) << right << A.druzyny[j]->get_golz() << "-" << setw(4) << left << A.druzyny[j]->get_golp() << setw(4) << left << A.druzyny[j]->get_bilans() << setw(4) << left << A.druzyny[j]->get_punkty() << endl;
				
		}
		x++;
	}
	return out;

}

void Liga::wypisz()
{
	int x = 1;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (druzyny[j]->get_miejsce() == x)
				druzyny[j]->wypisz_liga();
		}
		x++;
	}
}
void Liga::trening(int x)
{
	for (int i = 0; i < 11; i++)
	{
		if (i > 0)
		{
			druzyny[x]->team_off -= druzyny[x]->zawodnicy[i]->off_overal;
			druzyny[x]->team_deff -= druzyny[x]->zawodnicy[i]->deff_overal;
			druzyny[x]->team_mid -= druzyny[x]->zawodnicy[i]->mid_overal;
		}
	}
	int y;
	for (int i = druzyny[x]->pkt_treningu; i > 0; i--)
	{
		y = rand() % 11;
		druzyny[x]->zawodnicy[y]->trening();
		druzyny[x]->pkt_treningu--;
	}
	druzyny[x]->team_overal = druzyny[x]->forma;
	for (int i = 0; i < 11; i++)
	{
		druzyny[x]->team_overal += druzyny[x]->zawodnicy[i]->overal;
		if (i > 0)
		{
			druzyny[x]->team_off += druzyny[x]->zawodnicy[i]->off_overal;
			druzyny[x]->team_deff += druzyny[x]->zawodnicy[i]->deff_overal;
			druzyny[x]->team_mid += druzyny[x]->zawodnicy[i]->mid_overal;
		}
	}
	druzyny[x]->bramkarz = 0.001*druzyny[x]->zawodnicy[0]->overal;
}
void Liga::trening1(int x)
{
	for (int i = 0; i < 11; i++)
	{
		if (i > 0)
		{
			druzyny[x]->team_off -= druzyny[x]->zawodnicy[i]->off_overal;
			druzyny[x]->team_deff -= druzyny[x]->zawodnicy[i]->deff_overal;
			druzyny[x]->team_mid -= druzyny[x]->zawodnicy[i]->mid_overal;
		}
	}
}
void Liga::trening2(int x)
{
	druzyny[x]->team_overal = druzyny[x]->forma;
	for (int i = 0; i < 11; i++)
	{
		druzyny[x]->team_overal += druzyny[x]->zawodnicy[i]->overal;
		if (i > 0)
		{
			druzyny[x]->team_off += druzyny[x]->zawodnicy[i]->off_overal;
			druzyny[x]->team_deff += druzyny[x]->zawodnicy[i]->deff_overal;
			druzyny[x]->team_mid += druzyny[x]->zawodnicy[i]->mid_overal;
		}
	}
	druzyny[x]->bramkarz = 0.001*druzyny[x]->zawodnicy[0]->overal;
}
void Liga::kolejka1()
{
	mecz(0, 7);
	mecz(1, 6);
	mecz(2, 5);
	mecz(3, 4);
	trening(0);
	trening(1);
	trening(2);
	trening(3);
	trening(4);
	trening(5);
	trening(7);
}
void Liga::kolejka2()
{
	mecz(6,0);
	mecz(5,1);
	mecz(4,2);
	mecz(7,3);
	trening(0);
	trening(1);
	trening(2);
	trening(3);
	trening(4);
	trening(5);
	trening(7);
}
void Liga::kolejka3()
{
	mecz(0, 5);
	mecz(1, 4);
	mecz(2, 7);
	mecz(3, 6);
	trening(0);
	trening(1);
	trening(2);
	trening(3);
	trening(4);
	trening(5);
	trening(7);
}
void Liga::kolejka4()
{
	mecz(4,0);
	mecz(7,1);
	mecz(6,2);
	mecz(5,3);
	trening(0);
	trening(1);
	trening(2);
	trening(3);
	trening(4);
	trening(5);
	trening(7);
}
void Liga::kolejka5()
{
	mecz(0, 1);
	mecz(7,6);
	mecz(2,3);
	mecz(5,4);
	trening(0);
	trening(1);
	trening(2);
	trening(3);
	trening(4);
	trening(5);
	trening(7);
}
void Liga::kolejka6()
{
	mecz(2,0);
	mecz(5,7);
	mecz(3,1);
	mecz(4,6);
	trening(0);
	trening(1);
	trening(2);
	trening(3);
	trening(4);
	trening(5);
	trening(7);
}
void Liga::kolejka7()
{
	mecz(0,3);
	mecz(7,4);
	mecz(1,2);
	mecz(6,5);
	trening(0);
	trening(1);
	trening(2);
	trening(3);
	trening(4);
	trening(5);
	trening(7);
}
void Liga::kolejka8()
{
	mecz(3,0);
	mecz(4,7);
	mecz(2,1);
	mecz(5,6);
	trening(0);
	trening(1);
	trening(2);
	trening(3);
	trening(4);
	trening(5);
	trening(7);
}
void Liga::kolejka9()
{
	mecz(0, 2);
	mecz(7,5);
	mecz(1,3);
	mecz(6,4);
	trening(0);
	trening(1);
	trening(2);
	trening(3);
	trening(4);
	trening(5);
	trening(7);
}
void Liga::kolejka10()
{
	mecz(1,0);
	mecz(6,7);
	mecz(3,2);
	mecz(4,5);
	trening(0);
	trening(1);
	trening(2);
	trening(3);
	trening(4);
	trening(5);
	trening(7);
}
void Liga::kolejka11()
{
	mecz(0, 4);
	mecz(1, 7);
	mecz(2, 6);
	mecz(3, 5);
	trening(0);
	trening(1);
	trening(2);
	trening(3);
	trening(4);
	trening(5);
	trening(7);
}
void Liga::kolejka12()
{
	mecz(5,0);
	mecz(4,1);
	mecz(7,2);
	mecz(6,3);
	trening(0);
	trening(1);
	trening(2);
	trening(3);
	trening(4);
	trening(5);
	trening(7);
}
void Liga::kolejka13()
{
	mecz(0, 6);
	mecz(1, 5);
	mecz(2, 4);
	mecz(3, 7);
	trening(0);
	trening(1);
	trening(2);
	trening(3);
	trening(4);
	trening(5);
	trening(7);
}
void Liga::kolejka14()
{
	mecz(7,0);
	mecz(6,1);
	mecz(5,2);
	mecz(4,3);
	trening(0);
	trening(1);
	trening(2);
	trening(3);
	trening(4);
	trening(5);
	trening(7);
}
void Liga::end_of_sezon()
{
	for (int i = 0; i < 8; i++)
	{
		druzyny[i]->miejsce = 1;
		druzyny[i]->punkty = 0;
		druzyny[i]->golz = 0;
		druzyny[i]->golp = 0;
		druzyny[i]->bilans = 0;
	}
}
