#include<iostream>
#include "Rectangle.h"
using namespace std;
void Rectangle::set_sides(const double width, const double height)
{
	if (width > 0 && height > 0)
	{
		this->a = width;
		this->b = height;
	}
	else
	{
		throw invalid_argument{ "Стороны меньше нуля" };
	}
}
Rectangle::Rectangle(double width, double height)
{
	set_sides(width, height);
}
ostream& operator<<(ostream& out, const Rectangle& rect)
{
	out << "Rectangle: \n" << "Area = " << rect.get_area() << endl;
	out << "Perimeter = " << rect.get_perimeter() << endl;
	return out;
}
double Rectangle::get_area()const { return get_composition(); }
double Rectangle::get_perimeter()const
{
	return (a * 2) + (b * 2);
}