#pragma once
#include "Polygon.h"

class Rectangle : public Polygon
{
public:
	Rectangle();
	Rectangle(double newSideI, double newSideII);

	double area();
	double perimeter();

private:
	double SideI;
	double SideII;
};