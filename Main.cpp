#include <iostream.h>
#include <string.h>
#include <conio.h>
#include "UIKit.h"
#include "Titre.h"
#include "Bordure.h"

int main()
{
	drawFrame();
	drawTitle();
	drawStory();
	drawBorder();
	drawBuilding(3);
	waitInput();

	return 0;
}

