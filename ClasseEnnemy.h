#ifndef __ClasseEnnemy_H
#define __ClasseEnnemy_H

//#include "ClasseEnnemy.h"
#include "Martien.h"

class Ennemy: public Martien
{
public:
	bool up;
	bool canon;
	int hp;

	Ennemy();
	void putExtraTerrestre();
	void removeExtraTerrestre();
	void moveEnnemy();
};

#endif