#pragma once
#include "Geometrik_figures.h"

class Rhombus :public Geometric_figures
{
private:
	double side;
	double height;
	/**
	 \brief	Устанавливает правильные стороны
	 */
	void set_side(const double side, const double height);
public:
	/**
	 \brief Конструктор с параметрами
	 */
	explicit Rhombus(const double side, const double angle);
	/**
	 \brief Виртуальный деструктор
	 */
	virtual ~Rhombus() {};
	/**
	 \brief Оператор сдвига
	 */
	friend ostream& operator<< (ostream& out, Rhombus& par);
	/**
	 \brief Получает периметр
	 */
	double get_perimeter()override;
	/**
	 \brief Получает площадь
	 */
	double get_area()override;
};

