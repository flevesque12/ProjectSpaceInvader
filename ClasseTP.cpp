#include <iostream.h>
#include "ClasseTP.h"
#include "UIKit.h"

Destroyer::Destroyer()
{
	this->coord.setPositionX(2);
	this->coord.setPositionY(11);
	this->putVaisseau();
}

void Destroyer::modifierPosition(char key)
{
	this->removeVaisseau();
	switch(key)
	{
			case 'q' :
				if (this->coord.getPositionY()-1 > 0)
				{
					this->coord.setPositionY(coord.getPositionY()-1);
				}
				break;
			case 'a' :
				if (this->coord.getPositionY()+1 < 19)
				{
					this->coord.setPositionY(coord.getPositionY()+1);
				}
				break;
	}
	this->putVaisseau();
}

void Destroyer::removeVaisseau()
{
	coord.gotoxy(coord.getPositionX(),coord.getPositionY());
	cout << "                 ";
	coord.gotoxy(coord.getPositionX(),coord.getPositionY()+1);
	cout << "                 ";
	coord.gotoxy(coord.getPositionX(),coord.getPositionY()+2);
	cout << "                 ";
	coord.gotoxy(coord.getPositionX(),coord.getPositionY()+3);
	cout << "                 ";
	cout.flush();
}

void Destroyer::putVaisseau()
{
	UIKit::color(7);
	coord.gotoxy(coord.getPositionX(),coord.getPositionY());
	cout << "   __";
	coord.gotoxy(coord.getPositionX(),coord.getPositionY()+1);
	cout << "   \\ \\_____";
	coord.gotoxy(coord.getPositionX(),coord.getPositionY()+2);
	cout << " ##[==_____>";
	coord.gotoxy(coord.getPositionX(),coord.getPositionY()+3);
	cout << "   /_/";
	coord.gotoxy(coord.getPositionX(),coord.getPositionY()+2);
	UIKit::color(12);
	cout << " ##";
	coord.gotoxy(coord.getPositionX(),coord.getPositionY()+2);
	UIKit::color(4);
	cout << " #";
	cout.flush();
}

void Destroyer::putVaisseau(int speed)
{
	UIKit::color(7);
	if (speed == 1)
	{
		coord.gotoxy(coord.getPositionX(),coord.getPositionY());
		cout << "   __";
		coord.gotoxy(coord.getPositionX(),coord.getPositionY()+1);
		cout << "   \\ \\_____";
		coord.gotoxy(coord.getPositionX(),coord.getPositionY()+2);
		cout << "###[==_____>";
		coord.gotoxy(coord.getPositionX(),coord.getPositionY()+3);
		cout << "   /_/";
		coord.gotoxy(coord.getPositionX(),coord.getPositionY()+2);
		UIKit::color(12);
		cout << "###";
		coord.gotoxy(coord.getPositionX(),coord.getPositionY()+2);
		UIKit::color(4);
		cout << "#";
	} else if (speed == 2) {
		coord.gotoxy(coord.getPositionX(),coord.getPositionY());
		cout << "   __";
		coord.gotoxy(coord.getPositionX(),coord.getPositionY()+1);
		cout << "   \\ \\_____";
		coord.gotoxy(coord.getPositionX(),coord.getPositionY()+2);
		cout << "###[==_____>";
		coord.gotoxy(coord.getPositionX(),coord.getPositionY()+3);
		cout << "   /_/";
		coord.gotoxy(coord.getPositionX(),coord.getPositionY()+2);
		UIKit::color(12);
		cout << " ##";
		coord.gotoxy(coord.getPositionX(),coord.getPositionY()+2);
		UIKit::color(4);
		cout << " #";
	}
	cout.flush();
}
