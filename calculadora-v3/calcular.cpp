#include <iostream>

double obterNumero() {
	double numero;
	
	std::cin >> numero;

	return numero;
}

char escolherOpera() {
	char operação;

	std::cout << "Você gostaria de efetuar uma [A]dição, [S]ubtração, [M]ultiplicação ou uma [D]ivisão, com estes numeros?\n";
	std::cin >> operação;
	
	return operação;
}

double multiplicar(double numero1, double multiplic) {
	return numero1 * multiplic;
}

double somar(double numero1, double numero2) {
	return numero1 + numero2;
}

double subtrair(double numero1, double numero2) {
	return numero1 - numero2;
}

double dividir(double numero1, double numero2) {
	if(numero1 == 0 || numero2 == 0) {
		std::cout << "ERRO.\nCODIGO DE SAÍDA:";
		return 1;
	} else {
		return numero2 / numero1;
	}
}
