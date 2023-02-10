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
		return 1;
	} else {
		return a;
	}
}

int verifyDeltaVal(int delta) {
	if(delta < 0) {
		std::cout << "Numero imaginario detectado, parando a conta!\n";
		return 1;
	} else {
		return delta;
	}
	return 0;
}

int calcDelta(int a, int b, int c) {
	int delta = pow(b,2) - 4 * (a * c);
	
	verifyDeltaVal(delta);
	
	return delta; 
}

void mostrResult(int primeiroVal, int segundVal) {
	std::cout << "O primeiro valor: " << primeiroVal << '\n';
	std::cout << "O segundo valor: " << segundVal << '\n';
}

int calcBashk(int a, int b, int delta) {
	int x1 = (-b + sqrt(delta)) / (2 * a);
	int x2 = (-b - sqrt(delta)) / (2 * a);
	
	mostrResult(x1,x2);

	return 0;
}
