#include "Bramkarz.h"
Bramkarz::Bramkarz(double T)
{
	nazwa = "Bramkarz";
	lapanie = (rand() % 20 + 1)*T;
	refleks = (rand() % 20 + 1)*T;
	wykop = (rand() % 20 + 1)*T;
	jnj = (rand() % 20 + 1)*T;
	sila = (rand() % 20 + 1)*T;
	kondycja = (rand() % 20 + 1)*T;
	szybkosc = (rand() % 20 + 1)*T;
	overal = 1.5*szybkosc + 1.5*kondycja + 1.5*sila + 2 * lapanie + 2 * refleks + 1.5*wykop + 1.5*jnj;
}
Bramkarz::Bramkarz(double T, string name)
{
	nazwa = name;
	lapanie = (rand() % 20 + 1)*T;
	refleks = (rand() % 20 + 1)*T;
	wykop = (rand() % 20 + 1)*T;
	jnj = (rand() % 20 + 1)*T;
	sila = (rand() % 20 + 1)*T;
	kondycja = (rand() % 20 + 1)*T;
	szybkosc = (rand() % 20 + 1)*T;
	overal = 1.5*szybkosc + 1.5*kondycja + 1.5*sila + 2 * lapanie + 2 * refleks + 1.5*wykop + 1.5*jnj;
}
Bramkarz::~Bramkarz()
{

}
void Bramkarz::wypisz()
{
	cout << id << ". " << setw(20)<<left<<nazwa <<setw(10)<<left<<"Poziom:"<<setw(10)<<left<<overal<<endl;
	cout << setw(12) << left << "Sila:" << sila << endl;
	cout << setw(12) << left << "Szybkosc:" << szybkosc << endl;
	cout << setw(12) << left << "Kondycja:" << kondycja << endl;
	cout << setw(12) << left << "Lapanie:" << lapanie << endl;
	cout << setw(12) << left << "Refleks:" << refleks << endl;
	cout << setw(12) << left << "Wykop:" << wykop << endl;
	cout << setw(12) << left << "JnJ:" << jnj << endl;
}
string Bramkarz::get_nazwa()
{
	return nazwa;
}

void Bramkarz::trening()
{
	int y = rand() % 6;
	if (y == 0)
		sila++;
	else if (y == 1)
		kondycja++;
	else if (y == 2)
		szybkosc++;
	else if (y == 3)
		refleks++;
	else if (y == 4)
		lapanie++;
	else if (y == 5)
		wykop++;
	else if (y == 6)
		jnj++;
	overal = 1.5*szybkosc + 1.5*kondycja + 1.5*sila + 2 * lapanie + 2 * refleks + 1.5*wykop + 1.5*jnj;
}
int Bramkarz::trening(int x)
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
			cout << "4. Refleks" << endl;
			cout << "5. Lapanie" << endl;
			cout << "6. Wykop" << endl;
			cout << "7. JnJ" << endl;
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
				refleks++;
				x--;
			}
			else if (y.compare("5") == 0)
			{
				lapanie++;
				x--;
			}
			else if (y.compare("6") == 0)
			{
				wykop++;
				x--;
			}
			else if (y.compare("7") == 0)
			{
				jnj++;
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
	overal = 1.5*szybkosc + 1.5*kondycja + 1.5*sila + 2 * lapanie + 2 * refleks + 1.5*wykop + 1.5*jnj;
	return x;
}
string Bramkarz::save()
{
	string zapis;
	zapis = to_string(lapanie) + "\n"+to_string(refleks)+"\n"+to_string(wykop)+"\n"+to_string(jnj)+"\n"+to_string(sila)+"\n"+to_string(kondycja)+"\n"+to_string(szybkosc)+"\n"+to_string(overal)+"\n"+to_string(id)+"\n"+nazwa+"\n";
	/*cout << lapanie << endl;
	cout << refleks << endl;
	cout << wykop << endl;
	cout << jnj << endl;
	cout << sila << endl;
	cout << kondycja << endl;
	cout << szybkosc << endl;
	cout << overal << endl;
	cout << id << endl;
	cout << nazwa << endl;*/
	return zapis;
}
void Bramkarz::load(string *a)
{
	lapanie = atoi(a[0].c_str());
	refleks = atoi(a[1].c_str());
	wykop = atoi(a[2].c_str());
	jnj = atoi(a[3].c_str());
	sila = atoi(a[4].c_str());
	kondycja = atoi(a[5].c_str());
	szybkosc = atoi(a[6].c_str());
	overal = atof(a[7].c_str());
	id = atoi(a[8].c_str());
	nazwa = a[9];
}