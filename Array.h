#pragma once
#include <iostream>
class Array {
private:
	double* arr;
	int n;
public:
	void set_arr(int n);
	void get_arr();
	double find_max();
	double find_min();
	void find_key(double key);
	void sort_arr();
};