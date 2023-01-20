#include <iostream>

int incrementarNum(int numero) {
	return numero++;
}

int diminuirNum(int numero) {
	return numero--;
}

int pegarNum() {
	int numero;

	std::cin >> numero;

	return numero;
}

int main() {
	int numUser;
	char escolha;

	std::cout << "Por favor insira um numero aqui.\n";
	numUser = pegarNum();
	
	std::cout << "Você gostaria de [I]ncrementar ou [D]iminuir o numero digitado?\n";
	std::cin >> escolha;

	if(escolha == 'I') {
		std::cout << "O valor foi incrementado para " << incrementarNum(numUser) << '.' << std::endl;
	} else {
		std::cout << "O valor foi reduzido para " << diminuirNum(numUser) << '.' << std::endl;
	}

	return 0;
}
