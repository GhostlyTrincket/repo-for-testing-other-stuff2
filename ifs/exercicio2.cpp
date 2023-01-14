#include <iostream>

int pegarNum() {
	int numero;

	std::cin >> numero;
	
	return 0;
}

int main() {
	int numero;

	std::cout << "Me dê um número e eu direi se ele é divisivel por 5 ou 11:\n";
	
	numero = pegarNum();

//yanderedev 2.0	
	if(numero % 5 == 0 && numero % 11 == 0) {
		std::cout << "O numero escolhido pode ser dividido por 11 e 5.\n";
	} else {
		std::cout << "Não houve como efetuar a divisão.\n";
	}

	return 0;
}
