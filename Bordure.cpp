#include "Bordure.h"
#include "Status.h"
#include "ClasseEnnemy.h"

void drawBorder()
{
	UIKit s;
	s.gotoXY(0,0);
	s.color(8);
	cout << "ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿" << endl;
	cout << "³                                                                                        ³" << endl;
	cout << "³                                                                                        ³" << endl; 
	cout << "³                                                                                        ³" << endl;
	cout << "³                                                                                        ³" << endl;
	cout << "³                                                                                        ³" << endl;
	cout << "³                                                                                        ³" << endl;
	cout << "³                                                                                        ³" << endl;
	cout << "³                                                                                        ³" << endl;
	cout << "³                                                                                        ³" << endl;
	cout << "³                                                                                        ³" << endl;
	cout << "³                                                                                        ³" << endl;
	cout << "³                                                                                        ³" << endl;
	cout << "³                                                                                        ³" << endl;
	cout << "³                                                                                        ³" << endl;
	cout << "³                                                                                        ³" << endl;
	cout << "³                                                                                        ³" << endl;
	cout << "³                                                                                        ³" << endl;
	cout << "³                                                                                        ³" << endl;
	cout << "³                                                                                        ³" << endl;
	cout << "³                                                                                        ³" << endl;
	cout << "³                                                                                        ³" << endl;
	cout << "³                                                                                        ³" << endl;
	cout << "³                                                                                        ³" << endl;
	cout << "³                                                                                        ³" << endl;
	cout << "³                                                                                        ³" << endl;
	cout << "³                                                                                        ³" << endl;
	cout << "ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´" << endl;
	cout << "³ ARMOR [   %] SHIELD [   %] WEAPON [            ]                             LEVEL [ ] ³" << endl;
	cout << "ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ" << endl;

	updateHP(100);
	updateShield(0);
	updateWeapon("Laser");
	updateLevel(1);
}



//Fonction pour faire apparaitre le vaisseau
void waitInput()
{
	UIKit s;

	int key;
	int speed = 200;
	int step = 1;
	int shield = 1;
	Destroyer d;
	Ennemy e;

	do {
		if (shield < 100)
		{
			shield++;
			updateShield(shield);
		}
		step++;
		if (step == 4)
		{
			step = 1;
		}
		if (kbhit())
		{
			key = getch();
			if (key == 224)
			{
				key = getch();
			}
		}

		switch(key)
		{
		case 72: // up
			d.modifierPosition('q');
			break;
		case 80: // down
			d.modifierPosition('a');
			break;
		case 75: // slower <-
			d.removeVaisseau();
			d.putVaisseau(2);
			speed = 200;
			break;
		case 77: // faster ->
			d.removeVaisseau();
			d.putVaisseau(1);
			speed = 100;
			break;
		case 107: // K Laser
			updateWeapon("Laser   ");
			break;
		case 108: // L missiles
			updateWeapon("Missiles");
			break;
		case 32:
			//Fire
			break;
		default:
			break;
		}

		e.moveEnnemy();

		cout.flush();
		drawBuilding(step);
		Sleep(speed);
	} while(key != 27);
}