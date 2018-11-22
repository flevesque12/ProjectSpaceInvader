#include "Titre.h"


void drawFrame()
{
	UIKit s;
	s.gotoXY(0,0);
	s.color(8);
	s.curseurVisible(false);
	s.setDimensionFenetre(0,0,90, 30);
	cout << "ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿" << endl;
	cout << "³                                                                                        ³" << endl;
	cout << "³                                                                                        ³" << endl; 
	cout << "³                                                                                        ³" << endl;
	cout << "³                                                                                        ³" << endl;
	cout << "ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´" << endl;
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
	cout << "ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ" << endl;
}

void drawTitle()
{
	UIKit s;
	int intStep = 0;
	char* strDatas[4];

	for(int i=0; i < 4; i++)
	{
		strDatas[i] = new char[78];
	}
	strDatas[0] = "                    __             ___                                      ";
	strDatas[1] = "                   (_ ._  _. _ _    | ._    _. _| _ ._                      ";
	strDatas[2] = "                   __)|_)(_|(_(/_  _|_| |\\/(_|(_|(/_|                       ";
	strDatas[3] = "                      |                                                     ";

	s.color(9);

	for(int x = 0; x < 4; x++)
	{
		s.gotoXY(1,++intStep);
		cout << strDatas[x];
	}
}

void drawStory()
{
	UIKit s;
	int intStep = 5;
	char* strDatas[17];

	for(int i = 0; i < 17; i++)
	{
		strDatas[i] = new char[74];
		strDatas[i] = "STORY LINES";
	}

	for(int x = 0; x < 17; x++)
	{
		s.gotoXY(2,++intStep);
		Sleep(100);
		s.color(1);//1
		cout << x << strDatas[x];
	}
}