#include"Pair.h"
using namespace std;
Pair::Pair()
{
	a = 0.0;
	b = 0.0;
}
Pair::Pair(const double a, const double b)
{
	this->a = a;
	this->b = b;
}
ostream& operator<<(ostream& out, const Pair& pr)
{
	out << "Composition = " << pr.get_composition() << endl;
	return out;
}
void Pair::set_changing_a(const double change_a)
{
	a = change_a;
}
void Pair::set_changing_b(const double change_b)
{
	b = change_b;
}
double Pair::get_a()const { return a; }
double Pair::get_b()const { return b; }
double Pair::get_composition()const { return a * b; }