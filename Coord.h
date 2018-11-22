#ifndef COORD_H
#define COORD_H
class Coord
{
	
	int posX;
	int posY;
	
	public:			
				Coord();
				int getPositionX();
				int getPositionY();
				void setPositionX(int);
				void setPositionY(int);
				void gotoxy(int,int);
};

#endif