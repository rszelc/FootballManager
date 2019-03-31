#include "File.h"

void File::save(Liga &A)
{
	ofstream plik;
	plik.open("save.txt", ios::out);
	if (plik.good() == true)
	{
		for (int i = 0; i < 8; i++)
		{
			plik << A.druzyny[i]->nazwa << endl;
			plik << A.druzyny[i]->poziom << endl;
			plik << A.druzyny[i]->id << endl;
			plik << A.druzyny[i]->bilans << endl;
			plik << A.druzyny[i]->bramkarz << endl;
			plik << A.druzyny[i]->forma << endl;
			plik << A.druzyny[i]->golp << endl;
			plik << A.druzyny[i]->golz << endl;
			plik << A.druzyny[i]->licznik << endl;
			plik << A.druzyny[i]->miejsce << endl;
			plik << A.druzyny[i]->pkt_treningu << endl;
			plik << A.druzyny[i]->punkty << endl;
			plik << A.druzyny[i]->taktyka << endl;
			plik << A.druzyny[i]->team_deff << endl;
			plik << A.druzyny[i]->team_mid << endl;
			plik << A.druzyny[i]->team_off << endl;
			plik << A.druzyny[i]->team_overal << endl;
			for (int j = 0; j < 11; j++)
			{
				plik << A.druzyny[i]->zawodnicy[j]->save();
			}
		}
		plik << to_string(A.licznik);
		cout << "Gra zostala zapisana pomyslnie!" << endl;
	}
	else
	{
		cout << "Error! Cos poszlo nie tak przy zapisie" << endl;
	}
}
void File::load(Liga &A)
{
	int k = 0;
	string bramkarz[10];
	string zawodnik1[13], zawodnik2[13], zawodnik3[13], zawodnik4[13], zawodnik5[13], zawodnik6[13], zawodnik7[13], zawodnik8[13], zawodnik9[13], zawodnik10[13];
	string bufor[1257];
	ifstream plik;
	plik.open("save.txt", ios::in);
	if (plik.good() == true)
	{
		for (int i = 0; i < 1257; i++)
		{
			getline(plik, bufor[i]);
		}
		for (int i = 0; i < 8; i++)
		{
			A.druzyny[i]->nazwa = bufor[k]; k++;
			A.druzyny[i]->poziom = atof(bufor[k].c_str()); k++;
			A.druzyny[i]->id = atoi(bufor[k].c_str()); k++;
			A.druzyny[i]->bilans = atoi(bufor[k].c_str()); k++;
			A.druzyny[i]->bramkarz = atof(bufor[k].c_str()); k++;
			A.druzyny[i]->forma = atoi(bufor[k].c_str()); k++;
			A.druzyny[i]->golp = atoi(bufor[k].c_str()); k++;
			A.druzyny[i]->golz = atoi(bufor[k].c_str()); k++;
			A.druzyny[i]->licznik = atoi(bufor[k].c_str()); k++;
			A.druzyny[i]->miejsce = atoi(bufor[k].c_str()); k++;
			A.druzyny[i]->pkt_treningu = atoi(bufor[k].c_str()); k++;
			A.druzyny[i]->punkty = atoi(bufor[k].c_str()); k++;
			A.druzyny[i]->taktyka = atoi(bufor[k].c_str()); k++;
			A.druzyny[i]->team_deff = atof(bufor[k].c_str()); k++;
			A.druzyny[i]->team_mid = atof(bufor[k].c_str()); k++;
			A.druzyny[i]->team_off = atof(bufor[k].c_str()); k++;
			A.druzyny[i]->team_overal = atof(bufor[k].c_str()); k++;
			for (int j = 0; j < 10; j++)
			{
				bramkarz[j] = bufor[k]; k++;
			}
			for (int j = 0; j < 13; j++)
			{
				zawodnik1[j] = bufor[k]; k++;
			}
			for (int j = 0; j < 13; j++)
			{
				zawodnik2[j] = bufor[k]; k++;
			}
			for (int j = 0; j < 13; j++)
			{
				zawodnik3[j] = bufor[k]; k++;
			}
			for (int j = 0; j < 13; j++)
			{
				zawodnik4[j] = bufor[k]; k++;
			}
			for (int j = 0; j < 13; j++)
			{
				zawodnik5[j] = bufor[k]; k++;
			}
			for (int j = 0; j < 13; j++)
			{
				zawodnik6[j] = bufor[k]; k++;
			}
			for (int j = 0; j < 13; j++)
			{
				zawodnik7[j] = bufor[k]; k++;
			}
			for (int j = 0; j < 13; j++)
			{
				zawodnik8[j] = bufor[k]; k++;
			}
			for (int j = 0; j < 13; j++)
			{
				zawodnik9[j] = bufor[k]; k++;
			}
			for (int j = 0; j < 13; j++)
			{
				zawodnik10[j] = bufor[k]; k++;
			}
			A.druzyny[i]->zawodnicy[0]->load(bramkarz);
			A.druzyny[i]->zawodnicy[1]->load(zawodnik1);
			A.druzyny[i]->zawodnicy[2]->load(zawodnik2);
			A.druzyny[i]->zawodnicy[3]->load(zawodnik3);
			A.druzyny[i]->zawodnicy[4]->load(zawodnik4);
			A.druzyny[i]->zawodnicy[5]->load(zawodnik5);
			A.druzyny[i]->zawodnicy[6]->load(zawodnik6);
			A.druzyny[i]->zawodnicy[7]->load(zawodnik7);
			A.druzyny[i]->zawodnicy[8]->load(zawodnik8);
			A.druzyny[i]->zawodnicy[9]->load(zawodnik9);
			A.druzyny[i]->zawodnicy[10]->load(zawodnik10);
		}
		A.licznik = atoi(bufor[k].c_str()); k++;
	}
	else
		cout << "Error! Nie udalo sie odczytac pliku" << endl;
}
File::File()
{

}
File::~File()
{

}