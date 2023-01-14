#include <iostream>

int pegarNum() {
	int numero;

	std::cin >> numero;
	
	return numero;
}

int main() {
	int ano;

	std::cout << "Digite um ano e, eu direi se ele é um ano bissexto ou não.\n";
	ano = pegarNum();
	
	if(ano % 4 == 0) {
		std::cout << "O ano " << ano << " é bissexto.\n";
	} else {
		std::cout << "O ano " << ano << " não é bissexto.\n";
	}

	return 0;
}
