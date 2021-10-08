#include "Parallelepiped.h"
void Parallelepiped::set_sides(const double a, const double b, const double c)
{
	if (a > 0 && b > 0 && c > 0)
	{
		this->a = a;
		this->b = b;
		this->c = c;
	}
	else
	{
		throw invalid_argument{ "Неверные стороны" };
	}
}
Parallelepiped::Parallelepiped(const double a, const double b, const double c)
{
	set_sides(a, b, c);
}
ostream& operator<< (ostream& out,  Parallelepiped& par)
{
	out << "Parallelepiped \n" << "Perimeter = " << par.get_perimeter() << endl;
	out << "Area = " << par.get_area() << endl;
	return out;
}
double Parallelepiped::get_perimeter()
{
	return 4.0 * a + 4.0 * b + 4.0 * c;
}
double Parallelepiped::get_area() 
{
	return 2 * (a * b + b * c + a * c);
}