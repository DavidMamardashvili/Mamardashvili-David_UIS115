#include "Rhombus.h"

void Rhombus::set_side(const double side, const double height)
{
	if (side > 0 && height > 0)
	{
		this->side = side;
		this->height = height;
	}
	else
	{
		throw invalid_argument{ "Неверная сторона" };
	}
}
Rhombus::Rhombus(const double side, const double height)
{
	set_side(side, height);
}
ostream& operator<< (ostream& out, Rhombus& par)
{
	out << "Rhombus: \n" << "Perimeter = " << par.get_perimeter() << endl;
	out << "Area = " << par.get_area() << endl;
	return out;
}
double Rhombus::get_perimeter()
{
	return side * 4.0;
}
double Rhombus::get_area()
{
	return side * height;
}