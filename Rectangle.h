#pragma once
#include "Pair.h"
using namespace std;
class Rectangle : public Pair
{
private:
	/**
	 \brief	������ ����������� ����� ������ � ����������� �� �� ���������������
	 */
	void set_sides(const double a, const double b);
public:
	/**
	 \brief	����������� ����������� ����� ����� � ������
	 */
	explicit Rectangle(const double width, const double height);
	/**
	\brief	���������� �� ���������
	*/
	~Rectangle() = default;
	/**
	 \brief	����������� �����������
	 */
	Rectangle(const  Rectangle&) = default;
	/**
	 \brief	����������� ����������
	 */
	Rectangle& operator=(const  Rectangle&) = default;
	/**
	 \brief	�������� ������
	 */
	friend ostream& operator<<(ostream& out, const Rectangle& rect);
	/**
	 \brief	���������� �������
	 \returns	get_composition().
	 */
	double get_area()const;
	/**
	 \brief	���������� ��������
	 \returns	(get_b() * 2) + (get_a() * 2).
	 */
	double get_perimeter()const;
};
