#include "Martien.h"

Martien::Martien(int type,int valeur):ExtraTerrestre(type,valeur)
{
	jiggle=true;
}

void Martien::jiggleMartien()
{
	removeExtraTerrestre();
	if (jiggle)
	{
		coord.setPositionX(coord.getPositionX()-1);	
		jiggle=false;
	}
	else
	{
		coord.setPositionX(coord.getPositionX()+1);	
		jiggle=true;
	}

	putExtraTerrestre();

}

