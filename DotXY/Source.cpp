#include"Point.h"

using namespace std;

int main()
{
	Point p;
	p.SetX(0);
	p.SetY(21);
	p.PrintPoint();

	Sleep(3000);

	p.MoveX(0);
	p.MoveY(6);
	p.PrintPoint();
}
