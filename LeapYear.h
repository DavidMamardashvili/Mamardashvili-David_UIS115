#pragma once
#include<iostream>
#include<exception>
#include "Empty_class.h"
#include "independent_class.h"
#include "successor_class.h"
/**
* \brief Функция проверяющая год на високосность
* \param year год
* \return год
*/
bool is_leap_year(int year);

/**
* \brief Функция проверяющая год на високосность, спецификатор throw()
* \param year год
* \return год
*/
bool is_leap_year2(int year);

/**
* \brief Функция проверяющая год на високосность, с конкретной спецификацией с подход¤щим стандартным исключением
* \param year год
* \return год
*/
bool is_leap_year3(int year);

/**
* \brief Функция проверяющая год на високосность, со спецификацией с собственным реализованным исключением. (исключение как пустой класс)
* \param year год
* \return год
*/
bool is_leap_year4(int year);

/**
* \brief Функция проверяющая год на високосность, со спецификацией с собственным реализованным исключением. (исключение как независимый класс с пол¤ми-параметрами функции)
* \param year год
* \return год
*/
bool is_leap_year5(int year);

/**
* \brief Функция проверяющая год на високосность, со спецификацией с собственным реализованным исключением. (исключение как наследник от стандартного исключени¤ с пол¤ми)
* \param year год
* \return год
*/
bool is_leap_year6(int year);