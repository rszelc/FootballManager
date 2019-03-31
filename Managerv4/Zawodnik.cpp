#include "Zawodnik.h"
int Zawodnik::licznik = 0;
Zawodnik::Zawodnik()
{
	id = ++licznik;
	
}
Zawodnik::~Zawodnik()
{
	--licznik;
}