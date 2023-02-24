#include <iostream>

bool parImpar(int numero) {
	return numero % 2 == 0;
}

int main() {
	int numero;

	std::cout << "Por favor, insira um numero e, eu irei dizer se ele é par ou impar!\n";
	std::cin >> numero;
	
	if(parImpar(numero)) {
		std::cout << "O numero digitado é par.\n";
	} else {
		std::cout << "O numero digitado é impar.\n";
	}

	return 0;
}
