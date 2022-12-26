#include <iostream>
#include "importantes.h"

int multiplicar(int numero1, int multiplic);

int somar(int numero1, int numero2);

int subtrair(int numero1, int numero2);

float dividir(float numero1, float numero2);

int main() {
	int num1;
	int num2;
	char escolha;

	num1 = obterNumero();
	num2 = obterNumero();
	escolha = escolherOpera();

	//eu gosto de parear as operações
	if(escolha == 'A') {
		std::cout << num1 << " + " << num2 << " = " << somar(num1,num2) << std::endl;
	} else if(escolha == 'S') {
		std::cout << num1 << " - " << num2 << " = " << subtrair(num1,num2) << std::endl;
	}
	
	if(escolha == 'M') {
		std::cout << num1 << " X " << num2 << " = " << multiplicar(num1, num2) << std::endl;
	} else if(escolha == 'D') {
		std::cout << num2 << " % " << num1 << " = " << dividir(num1,num2) << std::endl;
	}

	return 0;
}

