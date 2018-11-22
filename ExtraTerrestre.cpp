#include "ExtraTerrestre.h"
#include <stdlib.h>
#include<iostream.h>

int ExtraTerrestre::nombreExtraTerrestre=0;

ExtraTerrestre::ExtraTerrestre(int type,int valeur)
{
	typeExtraTerrestre=type;
	valeurExtraTerrestre=valeur;
}
void ExtraTerrestre::reduireNombreExtraTerrestre()
{
	nombreExtraTerrestre--;
}
void ExtraTerrestre::resetExtraTerrestre()
{
	coord.setPositionX(rand()%40+1);
	coord.setPositionY(rand()%20+1);
	isAlive=true;
	nombreExtraTerrestre++;
}
void ExtraTerrestre::putExtraTerrestre()
{
	coord.gotoxy(coord.getPositionX(),coord.getPositionY());
	cout<<char(typeExtraTerrestre);
}

void ExtraTerrestre::removeExtraTerrestre()
{
	coord.gotoxy(coord.getPositionX(),coord.getPositionY());
	cout<<" ";	
}

int ExtraTerrestre::getNombreExtraTerrestre()
{
	return nombreExtraTerrestre;
}

int ExtraTerrestre::ajouterPoints()
{
	return valeurExtraTerrestre;
}
void ExtraTerrestre::resetNombreExtraTerrestre()
{
	nombreExtraTerrestre=0;
}










