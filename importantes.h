#include <iostream>

int obterNumero() {
	int numero;
	
	std::cout << "Insira um numero para efetuar as contas:";
	std::cin >> numero;

	return numero;
}

char escolherOpera() {
	char operação;

	std::cout << "Você gostaria de efetuar uma [A]dição, [S]ubtração, [M]ultiplicação ou uma [D]ivisão, com estes numeros?\n";
	std::cin >> operação;
	
	return operação;
}


