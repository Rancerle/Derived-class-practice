#include "Triangle.h"

Triangle::Triangle()
{
	SideI = 0;
	SideII = 0;
	SideIII = 0;
}

Triangle::Triangle(double newSideI, double newSideII, double newSideIII)
{
	SideI = newSideI;
	SideII = newSideII;
	SideIII = newSideIII;
}

double Triangle::area()
{
	double S = (SideI + SideII + SideIII) / 2.0;
	return sqrt(S*(S - SideI)*(S - SideII)*(S - SideIII));
}

double Triangle::perimeter()
{
	return (SideI + SideII + SideIII);
}