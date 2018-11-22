#include "Vaisseau.h"
#include<iostream.h>

Vaisseau::Vaisseau()
{
	coord.setPositionX(20);
	coord.setPositionY(40);
	//putVaisseau();
}
void Vaisseau::putVaisseau()
{
	coord.gotoxy(coord.getPositionX(),coord.getPositionY());
	cout<<char(18);
}
void Vaisseau::removeVaisseau()
{	
	coord.gotoxy(coord.getPositionX(),coord.getPositionY());
	cout<<" ";
}
void Vaisseau::modifierPosition(char key)
{	

		removeVaisseau();
		switch(key)
		{
			case 'q' :	coord.setPositionX(coord.getPositionX()-1);	break;
			case 'a' :	coord.setPositionX(coord.getPositionX()+1);
		}
		putVaisseau();
	
}









