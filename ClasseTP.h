#ifndef __ClasseTP_H
#define __ClasseTP_H

#include "Vaisseau.h"

class Destroyer: public Vaisseau
{
public:
	Destroyer();
	void putVaisseau();
	void putVaisseau(int speed); //hihi
	void removeVaisseau();
	void modifierPosition(char);
};

#endif