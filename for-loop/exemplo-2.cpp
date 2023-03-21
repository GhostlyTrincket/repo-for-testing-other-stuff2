#include <iostream>

void loopar(int numero) {
	for(int i = 0; i <= numero; i += 2) {
		std::cout << i << ' ';
	}
	
	std::cout << '\n';
}

int main() {
	constexpr int numero = 10;

	loopar(numero);

	return 0;
}
