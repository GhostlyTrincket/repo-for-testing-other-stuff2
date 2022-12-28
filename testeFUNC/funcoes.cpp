#include <iostream>

char pegarLetr() {
	char letra;

	std::cin >> letra;

	return letra;
}

void letraDigit(char letra) {
	std::cout << "A letra digitada foi '" << letra << "'" << std::endl;
}	

int main() {
	char letraUSR;

	std::cout << "Escreva uma letra aqui:\n";
	letraUSR = pegarLetr();
		
	letraDigit(letraUSR);

	return 0;
}
