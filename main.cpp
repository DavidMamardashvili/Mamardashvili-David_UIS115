#include "Ellipse.h"
#include "Rhombus.h"
#include "Parallelepiped.h"

int main()
{
	Ellipse el(5, 4);
	Rhombus rh(4, 5);
	Parallelepiped pr(2, 2, 2);
	cout << el << endl << rh << endl << pr << endl;
}