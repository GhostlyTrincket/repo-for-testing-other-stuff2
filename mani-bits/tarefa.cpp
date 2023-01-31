#include <iostream>
#include <bitset>

std::bitset<4> alterarSeq(unsigned int shifts) {
	constexpr std::bitset<4> binario = 0b1001u;

	return ((binario << 1) | (binario >> shifts));
}

void mostrResult(unsigned int shifts) {
	std::cout << "A o resultado da operação é: " << alterarSeq(shifts) << std::endl;
}

int main() {
	unsigned int shifts;

	std::cout << "Olá, nós temos o seguinte binario: 1001.\n";
	std::cout << "Eu gostaria que você me desse um numero que está entre 0 e 255 para que possa alterar o binario mostrado!\n";
	std::cin >> shifts;

	mostrResult(shifts);

	return 0;
}
