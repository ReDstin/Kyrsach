/**
* @file GenRand.h
* @author Петровичев А.А.
* @version 1.0
* @date 26.05.2021
* @copyright ИБСТ ПГУ
* @brief Заголовочный файл для модуля GenRand
*/
#pragma once
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
/**
* @brief Программа генерации псевдослучайной последовательности на базе регистра сдвига 
* с линейной обратной связью в конфигурации Фибоначи
*/
class GenRand
{
private:
	vector<int> reg;
public:
	GenRand();
	void setReg(vector<int> reg);
	vector<int> gen(int N);
};
/**
* @brief Класс обработки ошибок GenRandError
*/
class GenRandError: public std::invalid_argument
{
public:
	explicit GenRandError (const std::string& what_arg):
		std::invalid_argument(what_arg) {}
	explicit GenRandError (const char* what_arg):
		std::invalid_argument(what_arg) {}
};
