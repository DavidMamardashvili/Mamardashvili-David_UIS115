#pragma once
#include <iostream>
#include <cmath>
using namespace std;

class Geometric_figures
{
protected:
	const double PI = 3.14159;
public:
	/**
	 \brief	Виртуальный геттер периметра
	 */
	virtual double get_perimeter() = 0;
	/**
	 \brief	Виртуальный геттер площади
	 */
	virtual double get_area() = 0;
	/**
	 \brief	Виртуальный деструктор
	 */
	virtual ~Geometric_figures() = 0;
};