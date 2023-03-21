#include <iostream>
#include <cstdint>

uint16_t elevado(int base, int expoente) {
	uint16_t valTotal = 1;

	for(int i = 0; i < expoente; i++) {
		valTotal *= base;
	}

	return valTotal;
}

int main() {
	std::cout << elevado(2,2) << '\n';

	return 0;
}
