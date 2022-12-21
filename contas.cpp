#include <iostream>

int multipl(int numero1, int multiplic) {
	return numero1 * multiplic;
}

int adição(int numero1, int numero2) {
	return numero1 + numero2;
}

int subtração(int numero1, int numero2) {
	return numero1 - numero2;
}

int main() {
	int num1;
	int num2;
	char escolha;

	std::cout << "Insira dois numeros.\n";
	std::cin >> num1 >> num2;
	
	std::cout << "Você gostaria de efetuar uma [A]dição, [S]ubtração ou uma [M]ultiplicação, com estes numeros?\n";
	std::cin >> escolha;

	if(escolha == 'A') {
		std::cout << num1 << " + " << num2 << " = " << adição(num1,num2) << std::endl;
	} else if(escolha == 'S') {
		std::cout << num1 << " - " << num2 << " = " << subtração(num1,num2) << std::endl;
	}
	
	if(escolha == 'M') {
		std::cout << num1 << " X " << num2 << " = " << multipl(num1, num2) << std::endl;
	}

	return 0;
}
