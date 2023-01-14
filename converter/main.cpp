#include <iostream>

int delvolASCII(int valorASCII) {
	return valorASCII;
}

int main() {
	char letra;

	std::cout << "Insira um letra aqui e eu irei te mostrar o equivalente em ASCII.\n";

	std::cin >> letra;

	std::cout << "Você digitou '" << letra << "', o equivalente em ASCII é " << delvolASCII(letra) << std::endl;
	return 0;
}
