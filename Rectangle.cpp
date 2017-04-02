#include"Rectangle.h"

Rectangle::Rectangle()
{
	SideI = 0;
	SideII = 0;
}

Rectangle::Rectangle(double newSideI, double newSideII)
{
	SideI = newSideI;
	SideII = newSideII;
}

double Rectangle::area()
{
	return SideI * SideII;
}

double Rectangle::perimeter()
{
	return (2 * SideI) + (2 * SideII);
}