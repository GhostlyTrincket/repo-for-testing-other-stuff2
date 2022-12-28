#include <iostream>

//aqui vai ser a parte de pegar erros.
//esse arquivo vai servir para pegar falhas.
//eu acho que não deveria fazer isso em um header

int verificarA(int a) {
	if(a == 0) {
		std::cout << "Impossível calcular, sendo A = 0!\n";
	} else {
		return a;
	}

	return 0;
}

//eu sinto que... eu vou precisar de mais alguma função aqui...

int verificarDelta(int delta) {
	if(delta < 0) {
		std::cout << "Delta negativo. Conta invalida!\n";
		return 1;
	} else if(delta > 0) {
		return delta;
	}

	return 0;
}
