#pragma once
#include "Polygon.h"

class Triangle : public Polygon
{
public:
	Triangle();
	Triangle(double newSideI, double newSideII, double newSideIII);

	double area();
	double perimeter();

private:
	double SideI;
	double SideII;
	double SideIII;
};