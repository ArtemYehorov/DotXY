#include "Point.h"

Point::Point() : Point(0, 0) {}
Point::Point(int Px, int Py)
{
	SetX(Px);
	SetY(Py);
}

void Point::PrintPoint()
{
	system("cls");

	static const int width = 50;
	static const int height = 25;

	char ar[height][width];

	for (int Py = 0; Py < height; Py++)
	{
		for (int Px = 0; Px < width; Px++)
		{
			ar[Py][Px] = ' ';
			cout << ar[Py][Px];

			if (Px == x && Py == y)
			{
				ar[Py][Px] = '.';
				cout << ar[Py][Px];
			}
		}
		cout << endl;
	}
}

int Point::MoveX(int moveX)
{
	if (x == 0 && moveX < 0)
	{
		x = 49 - (moveX - 1);
		return x;
	}
	else if (x == 49 && moveX > 0)
	{
		x = moveX - 1;
		return x;
	}
	else if (x + moveX <= 0 && x != 0)
	{
		x = 49 - (x - moveX);
		return x;
	}
	else if (x + moveX > 49 && x != 49)
	{
		x = (x - moveX);
		return x;
	}
	else
	{
		x += moveX;
		return x;
	}
}
int Point::MoveY(int moveY)
{
	if (y == 0 && moveY < 0)
	{
		y = 24 - (moveY + 1);
		return x;
	}
	else if (y == 24 && moveY > 0)
	{
		y = moveY-1;
		return y;
	}
	else if (y + moveY <= 0 && y != 0)
	{
		y = 24 - (y - moveY);
		return y;
	}
	else if (y + moveY > 24 && y != 24)
	{
		y = (y - moveY);
		return y;
	}
	else
	{
		y += moveY;
		return y;
	}
}

void Point::SetX(int Px)
{
	if (Px > 0 || Px < 50) x = Px;
	else cout << "Incorrect X position!" << endl;
}
void Point::SetY(int Py)
{
	if (Py > 0 || Py < 25) y = Py;
	else cout << "Incorrect Y position!" << endl;
}

int Point::GetX() const
{
	return x;
}
int Point::GetY() const
{
	return y;
}