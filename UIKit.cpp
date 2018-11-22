#include "UIKit.h"

//impl�mentation des m�thodes statiques de gestion d'�cran

#include <windows.h>
#include <iostream.h>

void UIKit::curseurVisible(bool visibilite)
/*
	T�che: Rend le curseur visible ou invisible
	Entr�e: visibilite = le curseur doit �tre invisible (VRAI ou FAUX)
*/
{
	CONSOLE_CURSOR_INFO curseur;
	GetConsoleCursorInfo (GetStdHandle(STD_OUTPUT_HANDLE), &curseur);
	curseur.bVisible = visibilite;
	SetConsoleCursorInfo (GetStdHandle(STD_OUTPUT_HANDLE), &curseur);
}

int UIKit::wherex()
/*
	T�che: Retourne la position courante horizontale
	du curseur dans la fen�tre d'affichage
*/
{
	cout.flush();
	PCONSOLE_SCREEN_BUFFER_INFO tampon=new CONSOLE_SCREEN_BUFFER_INFO;
	GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), tampon);
	return tampon->dwCursorPosition.X;
}

int UIKit::wherey()
/*
	T�che: Retourne la position courante verticale
	du curseur dans la fen�tre d'affichage
*/
{
	cout.flush();
	PCONSOLE_SCREEN_BUFFER_INFO tampon=new CONSOLE_SCREEN_BUFFER_INFO;
	GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), tampon);
	return tampon->dwCursorPosition.Y;
}


void UIKit::dimensionnerCurseur(int pourcentage)
/*
	Change la taille du curseur
	Entr�e: pourcentage = le pourcentage de taille du curseur (0% � 100%)
*/
{
	if (pourcentage >= 0 && pourcentage <= 100)
	{
		CONSOLE_CURSOR_INFO curseur;
		GetConsoleCursorInfo (GetStdHandle(STD_OUTPUT_HANDLE), &curseur);
		curseur.dwSize = pourcentage;
		SetConsoleCursorInfo (GetStdHandle(STD_OUTPUT_HANDLE), &curseur);
	}
}

//void UIKit::definirFenetre(int x1, int y1, int x2, int y2)
/*
	T�che: Dimensionner une fenetre
	Entr�es: x1, y1 = coin sup�rieur gauche de la fen�tre
			 x2, y2 = coin inf�rieur droit de la fen�tre
*/
/*{
	const SMALL_RECT fenetre = {x1, y1, x2, y2};
	SetConsoleWindowInfo(GetStdHandle(STD_OUTPUT_HANDLE), true, &fenetre);
}*/

/*************************
positioner le curseur
**************************/
void UIKit::gotoXY(int x, int y)
/* 
	Positionne le curseur � l'�cran
	Entr�es: x = num�ro de colonne (0 � 79)
			 y = num�ro de ligne (0 � 24)
*/
{   
	cout.flush();
	COORD coord;   
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}




/*************************
configurer les dimension de la fen�tre
**************************/
void UIKit::setDimensionFenetre(int x1, int y1, int x2, int y2)
/*
dimensionner la fenetre
relatif au settings par d�faut de la console
*/
{
	COORD coord,max; 
	coord.X =x2+1;
	coord.Y =y2+1;
	//v�rifier que la taille voulue est possible
	max=GetLargestConsoleWindowSize(GetStdHandle(STD_OUTPUT_HANDLE));
	if(coord.X>max.X){
		coord.X=max.X;
		x2=max.X-1;
	}
	if(coord.Y>max.Y){
		coord.Y=max.Y;
		y2=max.Y-1;
	}
	SetConsoleScreenBufferSize(GetStdHandle(STD_OUTPUT_HANDLE),coord);

	const SMALL_RECT fenetre = {x1, y1, x2, y2};
	SetConsoleWindowInfo(GetStdHandle(STD_OUTPUT_HANDLE), true, &fenetre);
}

/*
d�finir la couleur d'affichage
*/
void UIKit::color(unsigned short laCouleur)
{
	cout.flush();
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute (handle, laCouleur);
}



/**************************
focntion cadre
***************************/
/************************Dessiner cadre*/
void UIKit::cadre(int cd,int ld,int cf,int lf, int couleur)
{
int i,l=1;
color(couleur);  //d�finir la couleur du cadre
gotoXY(cd,ld);
cout<<(char)201;  //coin sup�rieur gauche
for(i=cd+1;i<cf;i++)
{
	 cout<<(char)205; //ligne horizontale du haut
}
cout<<(char)187;  //coin sup�rieur droit
for(i=ld+1;i<lf;i++)
{
	 gotoXY(cd,ld+l); 
	 cout<<(char)186;  //ligne verticale gaughe
	 gotoXY(cf,ld+l);
	 cout<<(char)186;  //ligne verticale droite
	 l++;
}
gotoXY(cd,lf);
cout<<(char)200;  //coin inf�rieur gauche
for(i=cd+1;i<cf;i++)
{
	cout<<(char)205;  //ligne horizontale inf�rieure
}
cout<<(char)188;  //coin inf�rieur droit
cout.flush();
color(15);

}


/*********
rouler un ex�cutable:

  ShellExecute(NULL, "", "blaster.bat", NULL, NULL, SW_HIDE);

COULEUR UIKit::couleurDeFond()
/*
	Retourne la couleur du fond d'�cran
*//*
{
	cout.flush();
	PCONSOLE_SCREEN_BUFFER_INFO attribut = new CONSOLE_SCREEN_BUFFER_INFO;
	GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), attribut);
	return static_cast<COULEUR>(attribut->wAttributes >> 4);
}
*/
//COULEUR UIKit::couleurDeTexte()
/*
	Retourne la couleur de texte d'�cran
*//*
{
	cout.flush();
	PCONSOLE_SCREEN_BUFFER_INFO attribut = new CONSOLE_SCREEN_BUFFER_INFO;
	GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), attribut);
	return static_cast<COULEUR>(attribut->wAttributes % 16);
}
*/
//void UIKit::cadre(int x1,int y1,int x2,int y2, COULEUR laCouleur)
/*
	T�che: Trace un cadre � l'�cran
	Entr�es: x1, y1 = coin sup�rieur gauche du cadre
			 x2, y2 = coin inf�rieur droit du cadre
			 couleur = couleur du cadre
*/
/*
{
	int i,l=1;
	changerCouleur(laCouleur);  //d�finir la couleur du cadre
	gotoXY(x1,y1);
	cout<<(char)201;  //coin sup�rieur gauche
	for(i=x1+1;i<x2;i++)
	{
		 cout<<(char)205; //ligne horizontale du haut
	}
	cout<<(char)187;  //coin sup�rieur droit
	for(i=y1+1;i<y2;i++)
	{
		 gotoxy(x1,y1+l); 
		 cout<<(char)186;  //ligne verticale gaughe
		 gotoxy(x2,y1+l);
		 cout<<(char)186;  //ligne verticale droite
		 l++;
	}
	gotoxy(x1,y2);
	cout<<(char)200;  //coin inf�rieur gauche
	for(i=x1+1;i<x2;i++)
	{
		cout<<(char)205;  //ligne horizontale inf�rieure
	}
	cout<<(char)188<<endl;  //coin inf�rieur droit
	cout.flush();
}

*/




/*  *****************/
