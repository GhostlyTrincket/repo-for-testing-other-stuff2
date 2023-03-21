#include <iostream>

int main() {
	std::cout << "Por favor, escolha um tipo de operação.\n";
	
	char opção = ' ';
	
	do {
		std::cout << "[a]dicionar.\n";
		std::cout << "[m]ultiplicar.\n";
		std::cout << "[s]air.\n";

		std::cin >> opção;
	} while(opção != 'a' && opção != 'm' && opção != 's');

	std::cout << "Você selecionou a opção " << opção << '\n';

	return 0;
}
