#include <iostream>
#include <bitset>

int main() {
	unsigned int bitSelec;
	std::bitset<8> bits = 0b110'010'00;

	std::cout << "Olá, vamos manipular codigo binario?\n";
	std::cout << "Por agora, imagine um binario com 7 casas (" << bits << ")" << std::endl;
	std::cout << "Me diga qual casa você deseja interagir.\n";
	std::cin >> bitSelec;

	//flip vai inverter um bit.
	//set vai "ligar" um bit.
	//reset vai "desligar" um bit.
	//test vai pesquisar se o bit está "ligado" ou "desligado".

	std::cout << "Resultado do uso da função test(): " << bits.test(bitSelec) << std::endl;
	std::cout << "Resultado do uso da função set():" << bits.set(bitSelec) << std::endl;
	std::cout << "Resultado do uso da função reset(): " << bits.reset(bitSelec) << std::endl;
	std::cout << "Resultado do uso da função flip(): " << bits.flip(bitSelec) << std::endl;

	return 0;
}
