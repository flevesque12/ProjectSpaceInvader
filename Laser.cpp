#include "Laser.h"
#include <iostream.h>


void Laser::startLaser(int x)
{
	posX=x;
	posY=37;
	coord.setPositionX(posX);
	coord.setPositionY(posY);
	coord.gotoxy(coord.getPositionX(),coord.getPositionY());
	cout<<char(15);
}
void Laser::removeLaser()
{	
	coord.gotoxy(coord.getPositionX(),coord.getPositionY());
	cout<<" ";
}
void Laser::putLaser()
{	
	coord.gotoxy(coord.getPositionX(),coord.getPositionY());
	cout<<char(15);		
}

void Laser::moveLaser()
{	
	removeLaser();
	if (posY>0)
	{
		posY--;
		coord.setPositionY(posY);
		putLaser();
	}
}
void Laser::killLaser()
{
	coord.setPositionX(0);
	coord.setPositionY(0);
	putLaser();
}
