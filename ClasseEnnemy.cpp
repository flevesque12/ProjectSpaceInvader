#include <iostream.h>
#include "ClasseEnnemy.h"
#include "UIKit.h"

Ennemy::Ennemy():Martien(1,1)
{
	this->hp = 10;
	this->canon = true;
	this->up = true;
	this->coord.setPositionX(77);
	this->coord.setPositionY(1);
}

void Ennemy::putExtraTerrestre()
{
	UIKit s;
	s.color(7);
	this->coord.gotoxy(coord.getPositionX(),coord.getPositionY());
	cout << "        =_";
	this->coord.gotoxy(coord.getPositionX(),coord.getPositionY()+1);
	cout << "         |\\";
	this->coord.gotoxy(coord.getPositionX(),coord.getPositionY()+2);
	cout << "         / \\";
	this->coord.gotoxy(coord.getPositionX(),coord.getPositionY()+3);
	cout << "        / =/";
	this->coord.gotoxy(coord.getPositionX(),coord.getPositionY()+4);
	cout << "  (}-==( :[|";
	this->coord.gotoxy(coord.getPositionX(),coord.getPositionY()+5);
	cout << "        \\ =\\";
	this->coord.gotoxy(coord.getPositionX(),coord.getPositionY()+6);
	cout << "         \\ /";
	this->coord.gotoxy(coord.getPositionX(),coord.getPositionY()+7);
	cout << "       =_|/";

	s.color(2);
	this->coord.gotoxy(coord.getPositionX()+9,coord.getPositionY()+4);
	cout << ":[";

	s.color(12);
	this->coord.gotoxy(coord.getPositionX(),coord.getPositionY()+4);
	cout << " #";
	s.color(4);
	this->coord.gotoxy(coord.getPositionX(),coord.getPositionY()+4);
	cout << "#";
}

void Ennemy::removeExtraTerrestre()
{
	this->coord.gotoxy(coord.getPositionX(),coord.getPositionY());
	cout << "            ";
	this->coord.gotoxy(coord.getPositionX(),coord.getPositionY()+1);
	cout << "            ";
	this->coord.gotoxy(coord.getPositionX(),coord.getPositionY()+2);
	cout << "            ";
	this->coord.gotoxy(coord.getPositionX(),coord.getPositionY()+3);
	cout << "            ";
	this->coord.gotoxy(coord.getPositionX(),coord.getPositionY()+4);
	cout << "            ";
	this->coord.gotoxy(coord.getPositionX(),coord.getPositionY()+5);
	cout << "            ";
	this->coord.gotoxy(coord.getPositionX(),coord.getPositionY()+6);
	cout << "            ";
	this->coord.gotoxy(coord.getPositionX(),coord.getPositionY()+7);
	cout << "            ";
}

void Ennemy::moveEnnemy()
{
	if (this->up == false)
	{
		if (this->coord.getPositionY()+1 < 15)
		{
			this->removeExtraTerrestre();
			this->coord.setPositionY(coord.getPositionY()+1);
			this->putExtraTerrestre();
		} else {
			this->up = true;
		}
	} else if (this->up == true)
	{
		if (this->coord.getPositionY()-1 > 0)
		{
			this->removeExtraTerrestre();
			this->coord.setPositionY(coord.getPositionY()-1);
			this->putExtraTerrestre();
		} else {
			this->up = false;
		}
	}

	cout.flush();
}
