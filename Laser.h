#include"Coord.h"
#ifndef LASER_H
#define LASER_H

class Laser
{
	protected:
	int posX;
	int posY;

	public:
				bool isAlive;
				Coord coord;
				void startLaser(int);
				void removeLaser();
				void putLaser();
				virtual void moveLaser();
				void killLaser();


};

#endif