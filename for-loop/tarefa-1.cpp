#include <iostream>

void loopar(int numero) {
	for(int i = 0; i <= numero; ++i) {
		std::cout << i << ' ';
	}

	std::cout << '\n';
}

int main() {
	constexpr int numero = 20;

	loopar(numero);

	return 0;
}
