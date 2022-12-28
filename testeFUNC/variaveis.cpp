#include <iostream>

int retorCalc(int numero1, int numero2) {
	return numero1 + numero2;
}

int main() {
	int num1;
	int num2;

	std::cout << "Insira dois numeros aqui: ";

	std::cin >> num1 >>  num2;

	std::cout << "O resultado da conta é " << retorCalc(num1, num2) << std::endl;

	return 0;
}
