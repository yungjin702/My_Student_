#pragma once

#include "all.h"

using namespace std;

class GamesInfo
{
private:
	string gamename;
	string info;
	int diffcult;

public:
	GamesInfo( const char* name, const char* file, int star);
	void InfoGame();
};



