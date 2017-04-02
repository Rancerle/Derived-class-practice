#include "Square.h"

Square::Square()
{
	SideI = 0;
}

Square::Square(double newSideI)
{
	SideI = newSideI;
}

double Square::area()
{
	return SideI * SideI;
}

double Square::perimeter()
{
	return 4 * SideI;
}