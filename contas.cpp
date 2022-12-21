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
	
	std::cout << "Você gostaria de efetuar uma [A]dição, [S]ubtração ou uma [M]ultiplicação?\n";
	std::cin >> escolha;

	if(escolha == 'A' || escolha == 'S' || escolha == 'M') {
		std::cout << "Deu certo\n";
	}

	//std::cout << num1 << " + " << num2 << " = " << adição(num1,num2) << std::endl;
	//std::cout << num1 << " - " << num2 << " = " << subtração(num1,num2) << std::endl;
	
	return 0;
}
