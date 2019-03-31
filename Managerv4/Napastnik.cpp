#include "Napastnik.h"
Napastnik::Napastnik(double T)
{
	nazwa = "Napastnik";
	wykanczanie = (rand() % 20 + 1)*T;
	strzaly = (rand() % 20 + 1)*T;
	podania = (rand() % 20 + 1)*T;
	odbior = (rand() % 20 + 1)*T;
	sila = (rand() % 20 + 1)*T;
	kondycja = (rand() % 20 + 1)*T;
	szybkosc = (rand() % 20 + 1)*T;
	overal = 2 * sila + 2 * szybkosc + kondycja + 2 * wykanczanie + 2 * strzaly + 1.5*podania + odbior;
	off_overal = 2*sila + 2*strzaly;
	mid_overal = podania;
	deff_overal = 0.5*odbior;
}
Napastnik::Napastnik(double T, string name)
{
	nazwa = name;
	wykanczanie = (rand() % 20 + 1)*T;
	strzaly = (rand() % 20 + 1)*T;
	podania = (rand() % 20 + 1)*T;
	odbior = (rand() % 20 + 1)*T;
	sila = (rand() % 20 + 1)*T;
	kondycja = (rand() % 20 + 1)*T;
	szybkosc = (rand() % 20 + 1)*T;
	overal = 2 * sila + 2 * szybkosc + kondycja + 2 * wykanczanie + 2 * strzaly + 1.5*podania + odbior;
	off_overal = 2 * sila + 2 * strzaly;
	mid_overal = podania;
	deff_overal = 0.5*odbior;
}
Napastnik::~Napastnik()
{
}
void Napastnik::wypisz()
{
	cout << id << ". " << setw(20) << left << nazwa << setw(10) << left << "Poziom:" << setw(10) << left << overal << endl;
	cout << setw(15) << left << "Sila:" << sila << endl;
	cout << setw(15) << left << "Szybkosc:" << szybkosc << endl;
	cout << setw(15) << left << "Kondycja:" << kondycja << endl;
	cout << setw(15) << left << "Wykanczanie:" << wykanczanie << endl;
	cout << setw(15) << left << "Strzaly:" << strzaly << endl;
	cout << setw(15) << left << "Podania:" << podania << endl;
	cout << setw(15) << left << "Odbior:" << odbior << endl;
}
string Napastnik::get_nazwa()
{
	return nazwa;
}
void Napastnik::trening()
{
	int y = rand() % 6;
	if (y == 0)
		sila++;
	else if (y == 1)
		kondycja++;
	else if (y == 2)
		szybkosc++;
	else if (y == 3)
		wykanczanie++;
	else if (y == 4)
		strzaly++;
	else if (y == 5)
		podania++;
	else if (y == 6)
		odbior++;
	overal = 2 * sila + 2 * szybkosc + kondycja + 2 * wykanczanie + 2 * strzaly + 1.5*podania + odbior;
	off_overal = 2 * sila + 2 * strzaly;
	mid_overal = podania;
	deff_overal = 0.5*odbior;
}
int Napastnik::trening(int x)
{
	string y;
	if (x != 0)
	{
		
		while (x!=0)
		{
			cout << "Masz " << x << " punktow treningu, wybierz co trenowac:" << endl;
			cout << "1. Sila" << endl;
			cout << "2. Kondycja" << endl;
			cout << "3. Szybkosc" << endl;
			cout << "4. Wykanczanie" << endl;
			cout << "5. Strzaly" << endl;
			cout << "6. Podania" << endl;
			cout << "7. Odbior" << endl;
			cout << "q. Wroc" << endl;
			getline(cin >> ws, y);
			system("cls");
			if (y.compare("1") == 0)
			{
				sila++;
				x--;
			}
			else if (y.compare("2") == 0)
			{
				kondycja++;
				x--;
			}
			else if (y.compare("3") == 0)
			{
				szybkosc++;
				x--;
			}
			else if (y.compare("4") == 0)
			{
				wykanczanie++;
				x--;
			}
			else if (y.compare("5") == 0)
			{
				strzaly++;
				x--;
			}
			else if (y.compare("6") == 0)
			{
				podania++;
				x--;
			}
			else if (y.compare("7") == 0)
			{
				odbior++;
				x--;
			}
			else if (y.compare("q") == 0)
				break;
			else
				cout << "Error! Wybierz jeszcze raz" << endl;
		}
		if (x == 0)
		{
			cout << "Skonczyly sie punkty" << endl;
			system("pause");
			system("cls");
		}
	}
	else
	{
		cout << "Masz zbyt malo punktow, by trenowac" << endl;
		system("pause");
		system("cls");
	}
	overal = 2 * sila + 2 * szybkosc + kondycja + 2 * wykanczanie + 2 * strzaly + 1.5*podania + odbior;
	off_overal = 2 * sila + 2 * strzaly;
	mid_overal = podania;
	deff_overal = 0.5*odbior;
	return x;
}
string Napastnik::save()
{
	string zapis;
	zapis = to_string(wykanczanie) + "\n" + to_string(strzaly) + "\n" + to_string(podania) + "\n" + to_string(odbior) + "\n" + to_string(sila) + "\n" + to_string(kondycja) + "\n" + to_string(szybkosc) + "\n" + to_string(overal) + "\n" + to_string(id) + "\n" + nazwa + "\n"+to_string(off_overal)+"\n"+to_string(mid_overal)+"\n"+to_string(deff_overal)+"\n";
	/*cout << wykanczanie << endl;
	cout << strzaly << endl;
	cout << podania << endl;
	cout << odbior << endl;
	cout << sila << endl;
	cout << kondycja << endl;
	cout << szybkosc << endl;
	cout << overal << endl;
	cout << id << endl;
	cout << nazwa << endl;
	cout << off_overal << endl;
	cout << mid_overal << endl;
	cout << deff_overal << endl;*/
	return zapis;

}
void Napastnik::load(string *a)
{
	wykanczanie = atoi(a[0].c_str());
	strzaly = atoi(a[1].c_str());
	podania = atoi(a[2].c_str());
	odbior = atoi(a[3].c_str());
	sila = atoi(a[4].c_str());
	kondycja = atoi(a[5].c_str());
	szybkosc = atoi(a[6].c_str());
	overal = atof(a[7].c_str());
	id = atoi(a[8].c_str());
	nazwa = a[9];
	off_overal = atof(a[10].c_str());
	mid_overal = atof(a[11].c_str());
	deff_overal = atof(a[12].c_str());

}