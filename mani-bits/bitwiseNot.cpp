#include <iostream>
#include <bitset>

int main() {
	std::bitset<8> binario = 11111111;

	std::cout << "Valor normal: " << binario << std::endl;
	std::cout << "Valor NOT: " << (~binario) << std::endl;

	return 0;
}
