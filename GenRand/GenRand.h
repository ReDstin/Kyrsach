#pragma once
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class GenRand
{
private:
	vector<int> reg;
public:
	GenRand();
	void setReg(vector<int> reg);
	vector<int> gen(int N);
};
