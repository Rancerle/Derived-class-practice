#pragma once
#include "Rectangle.h"

class Square : public Rectangle
{
public:
	Square();
	Square(double newSideI);

	double area();
	double perimeter();

private:
	double SideI;
};