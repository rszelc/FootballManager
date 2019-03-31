#pragma once
#include "Header.h"
#include "Zawodnik.h"
#include "Team.h"
#include "Liga.h"
#include  "fstream"

class File
{
public:
	static void save(Liga&);
	static void load(Liga &);
	File();
	~File();
};