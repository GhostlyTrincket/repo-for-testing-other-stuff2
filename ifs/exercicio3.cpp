#include <iostream>

int pegarNum() {
	int numero;

	std::cin >> numero;

	return numero;
}

bool éPar(int numero) {
	return numero % 2 == 0 || numero + 1 % 3 == 0;
}

int main() {
	int numero;

	std::cout << "Me dê um numero e eu checarei se ele é par ou impar:\n";

	numero = pegarNum();
	
	if(éPar(numero)) {
		std::cout << "O numero é par.\n";
	} else {
		std::cout << "O numero é impar.\n";
	}

	return 0;
}
