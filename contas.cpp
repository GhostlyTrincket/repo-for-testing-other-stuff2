#include <iostream>

int multiplicar(int numero1, int multiplic) {
	return numero1 * multiplic;
}

int somar(int numero1, int numero2) {
	return numero1 + numero2;
}

int subtrair(int numero1, int numero2) {
	return numero1 - numero2;
}

float dividir(float numero1, float numero2) {
	if(numero1 == 0 || numero2 == 0) {
		std::cout << "ERRO.\nCODIGO DE SAÍDA:"; 
		return 1;
	} else {
		return numero2 / numero1;
	}
}

int main() {
	int num1;
	int num2;
	char escolha;

	std::cout << "Insira dois numeros.\n";
	std::cin >> num1 >> num2;

	std::cout << "Você gostaria de efetuar uma [A]dição, [S]ubtração, [M]ultiplicação ou uma [D]ivisão, com estes numeros?\n";
	std::cin >> escolha;

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

