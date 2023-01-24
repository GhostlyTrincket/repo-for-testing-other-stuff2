#include <iostream>
#include <bitset>

int main() {
	std::bitset<8> binario = 0b110'111'00; // binario de 220
	unsigned int casasDesloc;

	std::cout << "Hoje, iremos utilizar operadores binarios!\n";
	std::cout << "Binario escolhido para hoje: " << binario << '.' << std::endl;
	std::cout << "Me diga a quantidade de casas que irão ser movidas:\n";
	std::cin >> casasDesloc;
	
	std::cout << "O binario " << binario << " foi alterado para " << (binario << casasDesloc) << '.' << std::endl;
	return 0;
}
