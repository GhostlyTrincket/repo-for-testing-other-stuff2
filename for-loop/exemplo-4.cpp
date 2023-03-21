#include <iostream>
#include <cstdint>

std::uint64_t pegarNum() {
	std::uint64_t numero = 0;

	std::cin >> numero;

	return numero;
}

std::uint64_t elevado(int base, int expoente) {
	std::uint64_t total = 1;

	for(int i = 0; i < expoente; ++i) {
		total *= base;
	}

	return total;
}

int main() {
	std::cout << "Me dê um numero.\n";
	std::uint64_t numero = pegarNum();

	std::cout << "Me dê um expoente.\n";
	std::uint64_t expoente = pegarNum();

	std::cout << numero << " elevado por " << expoente << " é " << elevado(numero,expoente) << '\n';

	return 0;
}
