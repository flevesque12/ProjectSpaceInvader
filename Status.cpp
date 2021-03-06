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
		cout << "旼컴컴컴컴컴커                       旼컴컴컴컴컴커                       旼컴컴컴컴컴커";
		s.gotoXY(1,23);
		cout << "�  ___   ___ �                       �  ___   ___ �                       �  ___   ___ �";
		s.gotoXY(1,24);
		cout << "� �___� �___납            旼컴컴컴커 � �___� �___납            旼컴컴컴커 � �___� �___납";
		s.gotoXY(1,25);
		cout << "�  ___   ___ � 旼컴컴컴커 �        � �  ___   ___ � 旼컴컴컴커 �        � �  ___   ___ �";
		s.gotoXY(1,26);
		cout << "� �___� �___납 �        � �        � � �___� �___납 �        � �        � � �___� �___납";
	} else if (step == 2)
	{
		s.gotoXY(1,22);
		cout << "                      旼컴컴컴컴컴커                       旼컴컴컴컴컴커               ";
		s.gotoXY(1,23);
		cout << "                      �  ___   ___ �                       �  ___   ___ �               ";
		s.gotoXY(1,24);
		cout << "           旼컴컴컴커 � �___� �___납            旼컴컴컴커 � �___� �___납               ";
		s.gotoXY(1,25);
		cout << "旼컴컴컴커 �        � �  ___   ___ � 旼컴컴컴커 �        � �  ___   ___ � 旼컴컴컴커    ";
		s.gotoXY(1,26);
		cout << "�        � �        � � �___� �___납 �        � �        � � �___� �___납 �        �    ";
	} else if (step == 3)
	{
		s.gotoXY(1,22);
		cout << "           旼컴컴컴컴컴커                       旼컴컴컴컴컴커                          ";
		s.gotoXY(1,23);
		cout << "           �  ___   ___ �                       �  ___   ___ �                          ";
		s.gotoXY(1,24);
		cout << "旼컴컴컴커 � �___� �___납            旼컴컴컴커 � �___� �___납            旼컴컴컴커    ";
		s.gotoXY(1,25);
		cout << "�        � �  ___   ___ � 旼컴컴컴커 �        � �  ___   ___ � 旼컴컴컴커 �        �    ";
		s.gotoXY(1,26);
		cout << "�        � � �___� �___납 �        � �        � � �___� �___납 �        � �        �    ";
	}
	cout.flush();
}