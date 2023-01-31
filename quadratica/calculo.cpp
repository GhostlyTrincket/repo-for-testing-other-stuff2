#include <iostream>
#include <cmath>

//esse arquivo vai ser a parte mais bruta

int getUserNum() {
	int number;

	std::cin >> number;

	return number;
}

int verifyA(int a) {
	if(a == 0) {
		std::cout << "Impossível calcular, sendo A = 0!\n";
		return -1;
	} else {
		return a;
	}
}

int verifyDeltaVal(int delta) {
	if(delta < 0) {
		std::cout << "Delta negativo. Conta invalida!\n";
		return -1;
	} else {
		return delta;
	}
	return 0;
}

int findDeltaVal(int a, int b, int c) {
	int delta = pow(b,2) - 4 * (a * c);
	
	verifyDeltaVal(delta);
	
	return delta; 
}

void calcBashk(int a, int b, int delta) {
	int X1 = (-b + sqrt(delta)) / (2 * a);
	int X2 = (-b - sqrt(delta)) / (2 * a);
	
	std::cout << "A primeira raiz é " << X1 << std::endl;
	std::cout << "A segunda raiz é " << X2 << std::endl;
}
