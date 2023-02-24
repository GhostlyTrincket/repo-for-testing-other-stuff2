#include <iostream>

int pegarNum() {
	int numero;
	
	std::cin >> numero;

	return numero;
}

int minimo(int numero1, int numero2) {
	return ((numero1 < numero2) ? numero1 : numero2);
}

int main() {
	std::cout << "Insira dois numeros aqui, e eu irei dizer qual que é o menor.\n";

	int numero1 = pegarNum();
	int numero2 = pegarNum();

	std::cout << "Entre " << numero1 << " e " << numero2 << " o menor numero é " << minimo(numero1,numero2) << '\n';

	return 0;
}
