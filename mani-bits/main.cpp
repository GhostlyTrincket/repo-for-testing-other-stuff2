#include <iostream>
#include <bitset>

int main() {
	int bitSelec;
	std::bitset<8> bits = 0b110'010'00;

	std::cout << "Olá, vamos manipular codigo binario?\n";
	std::cout << "Por agora, imagine um binario com 7 casas (" << bits << ")" << std::endl;
	std::cout << "Me diga qual casa você deseja interagir.\n";
	std::cin >> bitSelec;

	//flip vai inverter um bit.
	//set vai "ligar" um bit.
	//reset vai "desligar" um bit.
	//test vai pesquisar se o bit está "ligado" ou "desligado".

	std::cout << "O bit que foi requisitado é " << bits.test(bitSelec) << '.' << std::endl;

	return 0;
}
