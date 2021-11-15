﻿/*
Created by Sinitsyn A.
*/

#include<iostream>
#include <clocale>
using namespace std;

int main()
{
	/*
	short int one = 16'974;
	int second = 56;
	long long three = 32e9;
	char four = 'K';
	bool five = true;
	float six = -4.5e-6;
	double seven = 6.34234;
	
	/*
	2. Создать перечисление (enum) с возможными вариантами символов для игры в крестики-нолики.
	*/

	setlocale(LC_ALL, "rus");
	enum TicTacToe
	{
		empty,
		zero,
		cross
	};

	/*
	3. Создать массив, способный содеражать значения такого перечесления и инициализировать его.
	*/

	char TicTacToe[3][3] = { {'o','x','x'},{'o','x','x'},{'x','x','x'} };


	/*
	4. * Создать структуру (struct) данных «Поле для игры в крестики-нолики» иснабдить его всеми необходимыми свойствами (подумайте что можетпонадобиться).
	*/

	struct CombinationToWin
	{
		bool diagonal;
		bool vertical;
		bool horizontal;
	};

	cout << "Введите имя первого игрока: " << endl;
	char theNameOfFirstPlayer[10];
	cin >> theNameOfFirstPlayer;

	cout << "Введите имя второго игрока: " << endl;
	char theNameOfSecondPlayer[10];
	cin >> theNameOfSecondPlayer;

	cout << "Имя первого игрока:\n" << theNameOfFirstPlayer << "\nИмя второго игрока:\n" << theNameOfSecondPlayer << endl;

	/*
	5. ** Создать структуру (struct MyVariant) объединяющую: union MyData (int,float, char) и 3-и битовых поля (флага) указывающими какого типа значение вданный момент содержится в объединении (isInt, isFloat, isChar).Продемонстрировать пример использования в коде этой структуры.
	*/

	union MyData {
		int Score1;
		float Score2;
		char Score3;
		int is_char : 1;
		int is_float : 10;
		int is_int : 20;
	};
	

	struct ThePlayer {
		char nikname[10];
		int age;
		double scoreForTheGames;
	};

	ThePlayer alexanderSinitsyn;
	alexanderSinitsyn.nikname =="sin27san";
	alexanderSinitsyn.age = 24;
	alexanderSinitsyn.scoreForTheGames = 4.5;

	ThePlayer teacher = { "ivan", 36, 5.0 };
	return 0;
}