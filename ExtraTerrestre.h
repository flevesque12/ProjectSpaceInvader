#ifndef EXTRATERRESTRE_H
#define EXTRATERRESTRE_H

#include"Coord.h"
class ExtraTerrestre
{
	protected:

	static int nombreExtraTerrestre;
	int typeExtraTerrestre;
	int valeurExtraTerrestre;
	public:

				Coord coord;
				ExtraTerrestre(int,int);
				bool isAlive;
				void removeExtraTerrestre();
				void putExtraTerrestre();
				static int getNombreExtraTerrestre();
				int ajouterPoints();
				void reduireNombreExtraTerrestre();
				void resetExtraTerrestre();
				void resetNombreExtraTerrestre();

};
#endif




