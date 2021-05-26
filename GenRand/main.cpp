#include "GenRand.h"
using namespace std;

int main()
{
	vector<int> num;
	int a;
	GenRand object;

	cout << "Длинна регистра 24 бита." << endl;
	cout << "Введите 1 чтобы вручную ввести регистр, 2 чтобы воспользоваться регистром по умолчанию." << endl;
	cout << "Регистр по умолчанию: 101010000010010101100111" << endl;
	cout << "Или введите 0 чтобы выйти." << endl;

	cin >> a;
	if(a == 1) {
		cout << "Введите регистр." << endl;
		cout << "Регистр должен состоять из 0 или 1. Содержать минимум одну единицу." << endl;
		cout << "Символы регистра вводятся по одному. Длинна регистра 24 символа." << endl;
		for (int i = 0; i < 24; i++) {
			cin >> a;
			num.push_back(a);
		}
		object.setReg(num);
	}else if(a == 2){
		num = {1,0,1,0,1,0,0,0,0,0,1,0,0,1,0,1,0,1,1,0,0,1,1,1};
		object.setReg(num);
	}else{
		return 0;
	}

	cout << "Введите длинну псевдослучайной последовательности." << endl;
	cout << "Длина последовательности не может быть меньше 1." << endl;
	cin	>> a;

	num = object.gen(a);
	for (int i = 0; i < num.size(); i++)
		cout << num[i];
	cout << endl;

	return 0;
}
