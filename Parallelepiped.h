#pragma once
#include "Geometrik_figures.h"
class Parallelepiped :public Geometric_figures
{
private:
	double a, b, c;
	/**
	 \brief	Устанавливает правильные стороны
	 */
	void set_sides(const double a, const double b, const double c);
public:
	/**
	 \brief Конструктор с параметрами
	 */
	explicit Parallelepiped(const double a, const double b, const double c);
	/**
	 \brief Оператор сдвига
	 */
	friend ostream& operator<< (ostream& out, Parallelepiped& par);
	/**
	 \brief Виртуальный деструктор
	 */
	virtual ~Parallelepiped() {};
	/**
	 \brief Получает периметр
	 */
	double get_perimeter()override;
	/**
	 \brief Получает площадь
	 */
	double get_area() override;
};

