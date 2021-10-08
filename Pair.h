#pragma once
using namespace std;
#include <iostream>

class Pair
{
protected:
	double a;
	double b;
public:
	/**
	 \brief	����������� �� ���������
	 */
	Pair();
	/**
	 \brief	����������� ����������� ����� a � b
	 */
	explicit Pair(const double a, const double b);
	/**
	 \brief	���������� �� ���������
	 */
	~Pair() = default;
	/**
	 \brief	�������� ������
	 */
	friend ostream& operator<<(ostream& out, const Pair& pr);
	/**
	 \brief	����������� �����������
	 */
	Pair(const  Pair&) = default;
	/**
	 \brief	����������� ����������
	 */
	Pair& operator=(const  Pair&) = default;
	/**
	 \brief	���������� a
	 \returns	a.
	 */
	double get_a()const;
	/**
	 \brief	���������� b
	 \returns	b.
	 */
	double get_b()const;
	/**
	 \brief	���������� ������������ a � b
	 \returns	a * b.
	 */
	double get_composition()const;
	/**
	 \brief	�������� ����� a
	 */
	void set_changing_a(const double change_a);
	/**
	 \brief	�������� ����� b
	 */
	void set_changing_b(const double change_b);
};