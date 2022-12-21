#include <iostream>

int multipl(int numero1, int multiplic) {
	return numero1 * multiplic;
}

int main() {
	int num;

	std::cout << "Insira um numero e eu irei te dizer o dobro e o triplo do numero escolhido.\n";
	std::cin >> num;
	
	int dobro = multipl(num, 2);
	int triplo = multipl(num, 3);

	std::cout << "O dobro de " << num << " é " << dobro << std::endl;
	std::cout << "O triplo de " << num << " é " << triplo << std::endl;
	
	return 0;
}
