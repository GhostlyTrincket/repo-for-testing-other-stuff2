#include <iostream>
#include <cmath>
#include "verificador.h"

//esse arquivo vai ser a parte mais bruta

int verificarDelta(int delta) {
	if(delta < 0) {
		std::cout << "Delta negativo. Conta invalida!\n";
		return 1;
	} else if(delta > 0) {
		return delta;
	}

	return 0;
}

int pegarNum() {
	int numero;

	std::cin >> numero;

	return numero;
}

int acharDelta(int a, int b, int c) {
	int delta = pow(b,2) - 4 * (a * c);
	
	verificarDelta(delta);
	
	return delta; 
}

int calcularBashk(int a, int b, int delta) {
	int X1 = ((b * (-1)) + sqrt(delta)) / (2 * a);
	int X2 = ((b * (-1)) - sqrt(delta)) / (2 * a);
	
	std::cout << "A primeira raiz é " << X1 << std::endl;
	std::cout << "A segunda raiz é " << X2 << std::endl;

	return 0;
}