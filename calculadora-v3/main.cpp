#include <iostream>
#include "calcular.h"

int main() {
	double numero1;
	double numero2;
	char operação;

	std::cout << "Por favor, insira dois números aqui:\n";
	numero1 = obterNumero();
	numero2 = obterNumero();

	operação = escolherOpera();
	
	if(operação == 'A') {
		std::cout << numero1 << " + " << numero2 << " = " << somar(numero1,numero2) << std::endl;
	} else if(operação == 'S') {
		std::cout << numero1 << " - " << numero2 << " = " << subtrair(numero1,numero2) << std::endl;
	}

	if(operação == 'M') {
		std::cout << numero1 << " X " << numero2 << " = " << multiplicar(numero1,numero2) << std::endl;
	} else if(operação == 'D') {
		std::cout << numero1 << " / " << numero2 << " = " << dividir(numero1,numero2) << std::endl;
	}

	return 0;
}
