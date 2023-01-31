#include <iostream>
#include <bitset>

int main() {
	std::bitset<8> binario1 = 0b110'111'00; //binario de 220
	std::bitset<8> binario2 = 0b101'101'00; //binario de 180

	std::cout << "Operação OR dos dois valores: " << (binario1 | binario2) << std::endl;

	return 0;
}
