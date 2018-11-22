#include "Coord.h"
#include <windows.h>
#include <iostream.h>


Coord::Coord()
{
	posX=0;
	posY=0;
}

void Coord::gotoxy(int x, int y)
{   
	COORD coord;
	cout.flush();   
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
int Coord::getPositionX()
{
	return posX;
}

int Coord::getPositionY()
{
	return posY;
}
void Coord::setPositionX(int x)
{
	posX=x;
}
void Coord::setPositionY(int y)
{
	posY=y;
}
