#include <iostream>

int main() {
	int contagem = 10;

	while(contagem <= 20) {
		std::cout << contagem << ' ';
		++contagem;
	}

	std::cout << "\n\tterminado\t\n";

	return 0;
}
