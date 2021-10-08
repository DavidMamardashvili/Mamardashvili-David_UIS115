#include "LeapYear.h"
bool is_leap_year(int year)
{
	return !(year % 4 != 0 && (year % 100 == 0 || year % 400 != 0));
}
bool is_leap_year2(int year)
{
	if (year > 0)
	{
		is_leap_year(year);
	}
	else
	{
		throw 1;
	}
}
bool is_leap_year3(int year)
{
	if (year > 0)
	{
		is_leap_year(year);
	}
	else
	{
		throw invalid_argument{ "Error! Year is equal to / less than 0, standard exception" };
	}
}
bool is_leap_year4(int year)
{
	if (year > 0)
	{
		is_leap_year(year);
	}
	else
	{
		throw empty_class();
	}
}
bool is_leap_year5(int year)
{
	if (year > 0)
	{
		is_leap_year(year);
	}
	else
	{
		throw independent_class("Error! Year is equal to / less than 0, independent class with function parameter fields");
	}
}
bool is_leap_year6(int year)
{
	if (year > 0)
	{
		is_leap_year(year);
	}
	else
	{
		throw successor_class("Error! Year is equal to / less than 0, successor class");
	}
}