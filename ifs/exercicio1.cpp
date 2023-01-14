#include <iostream>

float pegarNum() {
	float numero;

	std::cin >> numero;

	return numero;
}

void verificarNum(float num) {
	if(num > 0) {
		std::cout << num << " é maior do que zero." << std::endl;
	} else if(num < 0) {
		std::cout << num << " é menor do que zero." << std::endl;
	} else {
		std::cout << "É igual a 0.\n";
	}
}

int main() {
	float numero1;

	std::cout << "Escreva um número aqui e eu irei dizer se ele é maior, menor ou igual a 0:\n";
	numero1 = pegarNum();

	verificarNum(numero1);
}
