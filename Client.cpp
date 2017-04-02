#include "Polygon.h"
#include "Rectangle.h"
#include "Square.h"
#include "Triangle.h"

int main()
{
	Polygon * shapes[3];

	shapes[0] = new Rectangle(4.0, 2.0);

	shapes[1] = new Square(4.0);

	shapes[2] = new Triangle(4.0, 4.0, 4.0);

	for (int i = 0; i < 3; i++)
	{
		cout << shapes[i]->area() << " ," << shapes[i]->perimeter() << endl;
	}
	
	return 0;
}

