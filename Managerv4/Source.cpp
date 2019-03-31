#include "Team.h"
#include "Liga.h"
#include "file.h"

int main()
{
	srand(time(NULL));

	int x, y = 0;
	string iks, z, k, o, e, n, t;
	string enter;
	while (1)
	{
		cout << "1. Nowa gra" << endl;
		cout << "2. Wczytaj gre" << endl;
		cout << "3. Wyjdz" << endl;
		getline(cin >> ws, n);
		system("cls");
		if (n.compare("1") == 0)
		{
			cout << "Nowa gra!" << endl;
			system("pause");
			system("cls");
			Liga A;
			while (1)
			{
				cout << "1. Przejdz do skladu" << endl;
				cout << "2. Zobacz tabele " << endl;
				cout << "3. Rozegraj nastepna kolejke" << endl;
				cout << "4. Zapisz gre" << endl;
				cout << "5. Wczytaj gre" << endl;
				cout << "6. Wyjdz z gry" << endl;
				getline(cin >> ws, iks);
				if (iks.length() != 1)
				{
					system("cls");
					cout << "1. Przejdz do skladu" << endl;
					cout << "2. Zobacz tabele " << endl;
					cout << "3. Rozegraj nastepna kolejke" << endl;
					cout << "4. Zapisz gre" << endl;
					cout << "5. Wczytaj gre" << endl;
					cout << "6. Wyjdz z gry" << endl;
					getline(cin >> ws, iks);

				}
				else if (iks.at(0)<'1' || iks.at(0)>'6')
				{
					system("cls");
					cout << "Error! Podaj jeszcze raz" << endl;
					cout << "1. Przejdz do skladu" << endl;
					cout << "2. Zobacz tabele " << endl;
					cout << "3. Rozegraj nastepna kolejke" << endl;
					cout << "4. Zapisz gre" << endl;
					cout << "5. Wczytaj gre" << endl;
					cout << "6. Wyjdz z gry" << endl;
					getline(cin >> ws, iks);

				}
				x = atoi(iks.c_str());
				system("cls");
				switch (x)
				{
				case 1:
					while (1)
					{
						cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
						cout << "1. Przeglad skladu" << endl;
						cout << "2. Trening" << endl;
						cout << "q. Powrot" << endl;
						getline(cin >> ws, z);
						system("cls");
						if (z.compare("1") == 0)
						{
							cout << "Twoj sklad:" << endl;
							A.druzyny[6]->wypisz();
							system("pause");
							system("cls");
						}
						else if (z.compare("2") == 0)
						{
							A.trening1(6);
							while (1)
							{

								cout << "Twoje punkty treningu: " << A.druzyny[6]->get_trening() << endl;
								cout << "Wybierz, ktorego zawodnika trenowac:" << endl;
								for (int i = 1; i <= 11; i++)
								{
									cout << i << ". " << A.druzyny[6]->zawodnicy[i - 1]->get_nazwa() << endl;
								}
								cout << "q. Powrot" << endl;
								getline(cin >> ws, k);
								system("cls");
								if (k.compare("1") == 0 || k.compare("2") == 0 || k.compare("3") == 0 || k.compare("4") == 0 || k.compare("5") == 0 || k.compare("6") == 0 || k.compare("7") == 0 || k.compare("8") == 0 || k.compare("9") == 0 || k.compare("10") == 0 || k.compare("11") == 0)
								{
									A.druzyny[6]->pkt_treningu = A.druzyny[6]->zawodnicy[atoi(k.c_str()) - 1]->trening(A.druzyny[6]->get_trening());
								}
								else if (k.compare("q") == 0)
								{
									A.trening2(6);
									break;
								}
								else
									cout << "Error! Wybierz jeszcze raz" << endl;
							}
						}
						else if (z.compare("q") == 0)
						{

							break;
						}
						else
						{
							cout << "Error! Wybierz jeszcze raz" << endl;
						}

					}

					break;
				case 2:
					cout << "Tabela po " << A.licznik - 1 << " kolejkach" << endl;
					cout << setw(3) << left << "#" << setw(23) << left << "druzyna" << setw(5) << left << "Gole" << setw(5) << left << "+/-" << setw(5) << "Pkt" << endl;
					cout << A;
					system("pause");
					system("cls");
					break;
				case 3:
					if (A.licznik == 1)
					{
						A.kolejka1();
						A.licznik++;
					}
					else if (A.licznik == 2)
					{
						A.kolejka2();
						A.licznik++;
					}
					else if (A.licznik == 3)
					{
						A.kolejka3();
						A.licznik++;
					}
					else if (A.licznik == 4)
					{
						A.kolejka4();
						A.licznik++;
					}
					else if (A.licznik == 5)
					{
						A.kolejka5();
						A.licznik++;
					}
					else if (A.licznik == 6)
					{
						A.kolejka6();
						A.licznik++;
					}
					else if (A.licznik == 7)
					{
						A.kolejka7();
						A.licznik++;
					}
					else if (A.licznik == 8)
					{
						A.kolejka8();
						A.licznik++;
					}
					else if (A.licznik == 9)
					{
						A.kolejka9();
						A.licznik++;
					}
					else if (A.licznik == 10)
					{
						A.kolejka10();
						A.licznik++;
					}
					else if (A.licznik == 11)
					{
						A.kolejka11();
						A.licznik++;
					}
					else if (A.licznik == 12)
					{
						A.kolejka12();
						A.licznik++;
					}
					else if (A.licznik == 13)
					{
						A.kolejka13();
						A.licznik++;
					}
					else if (A.licznik == 14)
					{
						A.kolejka14();
						system("pause");
						system("cls");
						cout << "KONIEC SEZONU!" << endl;
						cout << "Klasyfikacja koncowa: " << endl;
						A.wypisz();
						if (A.druzyny[6]->miejsce == 1)
						{
							cout << "GRATULACJE! zdobyles mistrzostwo!" << endl;
							cout << "Czy chcesz kontynuowac Managera?" << endl;
							cout << "1. Tak" << endl;
							cout << "2. Nie" << endl;
							getline(cin >> ws, o);
							system("cls");
							if (o.compare("2") == 0)
							{
								cout << "Gratulujemy zwyciestwa i zyczymy milego dnia :)" << endl;
								system("pause");
								exit(0);
							}
							else if (o.compare("1") == 0)
							{
								cout << "Cieszymy sie ze chcesz zostac dluzej, powodzenia w dalszej grze" << endl;
								A.end_of_sezon();
								A.licznik = 1;
							}
							else
							{
								cout << "Error! Wybierz jeszcze raz" << endl;
							}
						}
						else
						{
							cout << "Zajales: " << A.druzyny[6]->miejsce << ". miejsce. Gratulacje! Zapraszamy do nastepnego sezonu" << endl;
							A.end_of_sezon();
							A.licznik = 1;
						}



					}
					system("pause");
					system("cls");
					break;
				case 4:
					File::save(A);
					break;
				case 6:
					cout << "Czy jestes pewny, ze chcesz opuscic gre" << endl;
					cout << "1. Tak" << endl;
					cout << "2. Nie" << endl;
					getline(cin >> ws, e);
					while (1)
					{
						if (e.compare("1") == 0)
						{
							exit(0);
						}
						else if (e.compare("2") == 0)
						{
							system("cls");
							break;
						}
						else
						{
							cout << "Error! Podaj jeszcze raz" << endl;
							getline(cin >> ws, e);

						}
					}
					break;
				case 5:
					while (1)
					{
						cout << "Czy jestes pewny, ze chcesz wczytac gre? Caly dotychczasowy postep w grze zostanie utracony" << endl;
						cout << "1. Tak" << endl;
						cout << "2. Nie" << endl;
						getline(cin >> ws, t);
						system("cls");
						if (t.compare("1") == 0)
						{
							cout << "Wczytales gre!" << endl;
							File::load(A);
							break;
						}
						else if (t.compare("2") == 0)
							break;
						else
							cout << "Error! Podaj jeszcze raz" << endl;
					}
					break;
				default:
					cout << "Error! Podaj jeszcze raz" << endl;
					//system("cls");
					break;

				}

			}
	
		}
		else if (n.compare("2") == 0)
		{
			cout << "Wczytales gre!" << endl;
			Liga A(0);
			File::load(A);
			while (1)
			{
				cout << "1. Przejdz do skladu" << endl;
				cout << "2. Zobacz tabele " << endl;
				cout << "3. Rozegraj nastepna kolejke" << endl;
				cout << "4. Zapisz gre" << endl;
				cout << "5. Wczytaj gre" << endl;
				cout << "6. Wyjdz z gry" << endl;
				getline(cin >> ws, iks);
				if (iks.length() != 1)
				{
					system("cls");
					cout << "Error! Podaj jeszcze raz" << endl;
					cout << "1. Przejdz do skladu" << endl;
					cout << "2. Zobacz tabele " << endl;
					cout << "3. Rozegraj nastepna kolejke" << endl;
					cout << "4. Zapisz gre" << endl;
					cout << "5. Wczytaj gre" << endl;
					cout << "6. Wyjdz z gry" << endl;
					getline(cin >> ws, iks);

				}
				else if (iks.at(0)<'1' || iks.at(0)>'6')
				{
					system("cls");
					cout << "Error! Podaj jeszcze raz" << endl;
					cout << "1. Przejdz do skladu" << endl;
					cout << "2. Zobacz tabele " << endl;
					cout << "3. Rozegraj nastepna kolejke" << endl;
					cout << "4. Zapisz gre" << endl;
					cout << "5. Wczytaj gre" << endl;
					cout << "6. Wyjdz z gry" << endl;
					getline(cin >> ws, iks);

				}
				x = atoi(iks.c_str());
				system("cls");
				switch (x)
				{
				case 1:
					while (1)
					{
						cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
						cout << "1. Przeglad skladu" << endl;
						cout << "2. Trening" << endl;
						cout << "q. Powrot" << endl;
						getline(cin >> ws, z);
						system("cls");
						if (z.compare("1") == 0)
						{
							cout << "Twoj sklad:" << endl;
							A.druzyny[6]->wypisz();
							system("pause");
							system("cls");
						}
						else if (z.compare("2") == 0)
						{
							A.trening1(6);
							while (1)
							{

								cout << "Twoje punkty treningu: " << A.druzyny[6]->get_trening() << endl;
								cout << "Wybierz, ktorego zawodnika trenowac:" << endl;
								for (int i = 1; i <= 11; i++)
								{
									cout << i << ". " << A.druzyny[6]->zawodnicy[i - 1]->get_nazwa() << endl;
								}
								cout << "q. Powrot" << endl;
								getline(cin >> ws, k);
								system("cls");
								if (k.compare("1") == 0 || k.compare("2") == 0 || k.compare("3") == 0 || k.compare("4") == 0 || k.compare("5") == 0 || k.compare("6") == 0 || k.compare("7") == 0 || k.compare("8") == 0 || k.compare("9") == 0 || k.compare("10") == 0 || k.compare("11") == 0)
								{
									A.druzyny[6]->pkt_treningu = A.druzyny[6]->zawodnicy[atoi(k.c_str()) - 1]->trening(A.druzyny[6]->get_trening());
								}
								else if (k.compare("q") == 0)
								{
									A.trening2(6);
									break;
								}
								else
									cout << "Error! Wybierz jeszcze raz" << endl;
							}
						}
						else if (z.compare("q") == 0)
						{

							break;
						}
						else
						{
							cout << "Error! Wybierz jeszcze raz" << endl;
						}

					}

					break;
				case 2:
					cout << "Tabela po " << A.licznik - 1 << " kolejkach" << endl;
					cout << setw(3) << left << "#" << setw(23) << left << "druzyna" << setw(5) << left << "Gole" << setw(5) << left << "+/-" << setw(5) << "Pkt" << endl;
					cout << A;
					system("pause");
					system("cls");
					break;
				case 3:
					if (A.licznik == 1)
					{
						A.kolejka1();
						A.licznik++;
					}
					else if (A.licznik == 2)
					{
						A.kolejka2();
						A.licznik++;
					}
					else if (A.licznik == 3)
					{
						A.kolejka3();
						A.licznik++;
					}
					else if (A.licznik == 4)
					{
						A.kolejka4();
						A.licznik++;
					}
					else if (A.licznik == 5)
					{
						A.kolejka5();
						A.licznik++;
					}
					else if (A.licznik == 6)
					{
						A.kolejka6();
						A.licznik++;
					}
					else if (A.licznik == 7)
					{
						A.kolejka7();
						A.licznik++;
					}
					else if (A.licznik == 8)
					{
						A.kolejka8();
						A.licznik++;
					}
					else if (A.licznik == 9)
					{
						A.kolejka9();
						A.licznik++;
					}
					else if (A.licznik == 10)
					{
						A.kolejka10();
						A.licznik++;
					}
					else if (A.licznik == 11)
					{
						A.kolejka11();
						A.licznik++;
					}
					else if (A.licznik == 12)
					{
						A.kolejka12();
						A.licznik++;
					}
					else if (A.licznik == 13)
					{
						A.kolejka13();
						A.licznik++;
					}
					else if (A.licznik == 14)
					{
						A.kolejka14();
						system("pause");
						system("cls");
						cout << "KONIEC SEZONU!" << endl;
						cout << "Klasyfikacja koncowa: " << endl;
						A.wypisz();
						if (A.druzyny[6]->miejsce == 1)
						{
							cout << "GRATULACJE! zdobyles mistrzostwo!" << endl;
							cout << "Czy chcesz kontynuowac Managera?" << endl;
							cout << "1. Tak" << endl;
							cout << "2. Nie" << endl;
							getline(cin >> ws, o);
							system("cls");
							if (o.compare("2") == 0)
							{
								cout << "Gratulujemy zwyciestwa i zyczymy milego dnia :)" << endl;
								system("pause");
								exit(0);
							}
							else if (o.compare("1") == 0)
							{
								cout << "Cieszymy sie ze chcesz zostac dluzej, powodzenia w dalszej grze" << endl;
								A.end_of_sezon();
								A.licznik = 1;
							}
							else
							{
								cout << "Error! Wybierz jeszcze raz" << endl;
							}
						}
						else
						{
							cout << "Zajales: " << A.druzyny[6]->miejsce << ". miejsce. Gratulacje! Zapraszamy do nastepnego sezonu" << endl;
							A.end_of_sezon();
							A.licznik = 1;
						}



					}
					system("pause");
					system("cls");
					break;
				case 4:
					File::save(A);
					break;
				case 6:
					cout << "Czy jestes pewny, ze chcesz opuscic gre" << endl;
					cout << "1. Tak" << endl;
					cout << "2. Nie" << endl;
					getline(cin >> ws, e);
					while (1)
					{
						if (e.compare("1") == 0)
						{
							exit(0);
						}
						else if (e.compare("2") == 0)
						{
							system("cls");
							break;
						}
						else
						{
							cout << "Error! Podaj jeszcze raz" << endl;
							getline(cin >> ws, e);

						}
					}
					break;
				case 5:
					while (1)
					{
						cout << "Czy jestes pewny, ze chcesz wczytac gre? Caly dotychczasowy postep w grze zostanie utracony" << endl;
						cout << "1. Tak" << endl;
						cout << "2. Nie" << endl;
						getline(cin >> ws, t);
						system("cls");
						if (t.compare("1") == 0)
						{
							cout << "Wczytales gre!" << endl;
							File::load(A);
							break;
						}
						else if (t.compare("2") == 0)
							break;
						else
							cout << "Error! Podaj jeszcze raz" << endl;
					}
					break;

				default:
					cout << "Error! Podaj jeszcze raz" << endl;
					break;

				}

			}
		}
		else if (n.compare("3") == 0)
		{
			exit(0);
		}
		else
			cout << "Error! Podaj jeszcze raz" << endl;
	}

}
