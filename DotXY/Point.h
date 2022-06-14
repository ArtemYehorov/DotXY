#include<iostream>
#include<Windows.h>
using namespace std;

#pragma once

class Point
{
	int x;
	int y;

public:

	Point();
	Point(int Px, int Py);

	void PrintPoint();

	int MoveX(int moveX);
	int MoveY(int moveY);

	//Setters
	void SetX(int Px);
	void SetY(int Py);

	//Getters
	int GetX() const;
	int GetY() const;
};

