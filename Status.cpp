#include "status.h"

UIKit s;

void updateHP(int percent)
{
	s.gotoXY(9, 28);
	if (percent == 100)
	{
		s.color(10);
	} else if (percent < 100 && percent >= 75)
	{
		cout << " ";
		s.color(2);
	} else if (percent < 75 && percent > 50)
	{
		cout << " ";
		s.color(6);
	} else if (percent <= 50 && percent > 10) {
		cout << " ";
		s.color(4);
	} else if (percent < 10)
	{
		cout << "  ";
		s.color(12);
	}
	cout << percent;
}

void updateShield(int percent)
{
	s.gotoXY(23, 28);
	cout << "  ";
	if (percent == 100)
	{
		s.color(10);
	} else if (percent < 100 && percent >= 75)
	{
		s.color(2);
	} else if (percent < 75 && percent > 50)
	{
		s.color(6);
	} else if (percent <= 50 && percent >= 10) {
		s.color(4);
	} else if (percent < 10)
	{
		s.color(12);
	}
	s.gotoXY(23, 28);
	cout << percent;
	cout.flush();
}

void updateWeapon(char* weapon)
{
	s.gotoXY(37, 28);
	s.color(9);
	cout << weapon;
}

void updateLevel(int lvl)
{
	s.gotoXY(86, 28);
	s.color(9);
	cout << lvl;
}

void drawBuilding(int step)
{
	s.color(6);

	if (step == 1)
	{
		s.gotoXY(1,22);
		cout << "ÚÄÄÄÄÄÄÄÄÄÄÄÄ¿                       ÚÄÄÄÄÄÄÄÄÄÄÄÄ¿                       ÚÄÄÄÄÄÄÄÄÄÄÄÄ¿";
		s.gotoXY(1,23);
		cout << "³  ___   ___ ³                       ³  ___   ___ ³                       ³  ___   ___ ³";
		s.gotoXY(1,24);
		cout << "³ ³___³ ³___³³            ÚÄÄÄÄÄÄÄÄ¿ ³ ³___³ ³___³³            ÚÄÄÄÄÄÄÄÄ¿ ³ ³___³ ³___³³";
		s.gotoXY(1,25);
		cout << "³  ___   ___ ³ ÚÄÄÄÄÄÄÄÄ¿ ³        ³ ³  ___   ___ ³ ÚÄÄÄÄÄÄÄÄ¿ ³        ³ ³  ___   ___ ³";
		s.gotoXY(1,26);
		cout << "³ ³___³ ³___³³ ³        ³ ³        ³ ³ ³___³ ³___³³ ³        ³ ³        ³ ³ ³___³ ³___³³";
	} else if (step == 2)
	{
		s.gotoXY(1,22);
		cout << "                      ÚÄÄÄÄÄÄÄÄÄÄÄÄ¿                       ÚÄÄÄÄÄÄÄÄÄÄÄÄ¿               ";
		s.gotoXY(1,23);
		cout << "                      ³  ___   ___ ³                       ³  ___   ___ ³               ";
		s.gotoXY(1,24);
		cout << "           ÚÄÄÄÄÄÄÄÄ¿ ³ ³___³ ³___³³            ÚÄÄÄÄÄÄÄÄ¿ ³ ³___³ ³___³³               ";
		s.gotoXY(1,25);
		cout << "ÚÄÄÄÄÄÄÄÄ¿ ³        ³ ³  ___   ___ ³ ÚÄÄÄÄÄÄÄÄ¿ ³        ³ ³  ___   ___ ³ ÚÄÄÄÄÄÄÄÄ¿    ";
		s.gotoXY(1,26);
		cout << "³        ³ ³        ³ ³ ³___³ ³___³³ ³        ³ ³        ³ ³ ³___³ ³___³³ ³        ³    ";
	} else if (step == 3)
	{
		s.gotoXY(1,22);
		cout << "           ÚÄÄÄÄÄÄÄÄÄÄÄÄ¿                       ÚÄÄÄÄÄÄÄÄÄÄÄÄ¿                          ";
		s.gotoXY(1,23);
		cout << "           ³  ___   ___ ³                       ³  ___   ___ ³                          ";
		s.gotoXY(1,24);
		cout << "ÚÄÄÄÄÄÄÄÄ¿ ³ ³___³ ³___³³            ÚÄÄÄÄÄÄÄÄ¿ ³ ³___³ ³___³³            ÚÄÄÄÄÄÄÄÄ¿    ";
		s.gotoXY(1,25);
		cout << "³        ³ ³  ___   ___ ³ ÚÄÄÄÄÄÄÄÄ¿ ³        ³ ³  ___   ___ ³ ÚÄÄÄÄÄÄÄÄ¿ ³        ³    ";
		s.gotoXY(1,26);
		cout << "³        ³ ³ ³___³ ³___³³ ³        ³ ³        ³ ³ ³___³ ³___³³ ³        ³ ³        ³    ";
	}
	cout.flush();
}