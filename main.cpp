#include "LeapYear.h"
void year_is(bool year)
{
	if (year)
	{
		cout << "Year is leap" << endl;
	}
	else
	{
		cout << "Year is not leap" << endl;
	}
}
int main() {
	year_is(is_leap_year(2004));
	try {
		year_is(is_leap_year2(1));
		year_is(is_leap_year3(1));
		year_is(is_leap_year4(1));
		year_is(is_leap_year5(0));
		year_is(is_leap_year6(0));

	}
	catch (int) {
		cout << "Error! Year is 0, throw specifier" << endl;
	}
	catch (invalid_argument error) {
		cerr << error.what() << endl;
	}
	catch (empty_class) {
		cerr << "Error! Year is 0, empty class" << endl;
	}
	catch (independent_class error) {
		cerr << error.message << endl;
	}
	catch (successor_class error) {
		cerr << error.what() << endl;
	}
}