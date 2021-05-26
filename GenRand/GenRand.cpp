#include "GenRand.h"

GenRand::GenRand(){};

void GenRand::setReg(vector<int> reg){
	this->reg = reg;
}

// отводная последовательность (24, 4, 3, 1, 0)
vector<int> GenRand::gen(int N){
	vector<int> num;
	int new_num;
	
	for(int i = 0; i < N; i++) {
		num.push_back(reg[reg.size() - 1]);
		
		new_num = reg[23] ^ reg[3] ^ reg[2] ^ reg[0];

		for(int j = reg.size() - 1; j > 0; j--){
			reg[j] = reg[j - 1];
		}
		reg[0] = new_num;
	}

	return num;
}
