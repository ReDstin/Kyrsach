/**
 * @file GenRand.cpp
 */
#include "GenRand.h"
GenRand::GenRand() {};
/**
* @brief Конструктор класса GenRand
* @param reg - регистр состоящий из нулей и едениц
* @warning Регистр не может состоять только из нулей.
* @throw GenRandError, если произошла ошибка
*/
void GenRand::setReg(vector<int> reg)
{
	if(reg.size() != 24)
		throw GenRandError("Ошибка! Недопустимая длина регистра!");
	
	for(int i = 0; i < reg.size(); i++) {
		if(reg[i] != 1 && reg[i] != 0)
			throw GenRandError("Ошибка! Недопустимый символ!");
	}
	
	int reg_sum = 0;
	for(int i = 0; i < reg.size(); i++)
		reg_sum += reg[i];
	if(reg_sum == 0)
		throw GenRandError("Ошибка! Регистр из нулей!");

	this->reg = reg;
}
/**
* @brief Генерация последовательности псевдослучайных чисел
* @param N длинна выходной последовательности (N > 0)
* @param Отводная последовательность (24, 4, 3, 1, 0)
* @throw GenRandError, если произошла ошибка
* @return Псевдослучайная последовательность в виде вектора 
*/
vector<int> GenRand::gen(int N)
{
	vector<int> num;
	int new_num;

	if(N <= 0)
		throw GenRandError("Ошибка! Не возможная длинна выходной последовательности!");

	for(int i = 0; i < N; i++) {
		num.push_back(reg[reg.size() - 1]);

		new_num = reg[23] ^ reg[3] ^ reg[2] ^ reg[0];

		for(int j = reg.size() - 1; j > 0; j--) {
			reg[j] = reg[j - 1];
		}
		reg[0] = new_num;
	}

	return num;
}
