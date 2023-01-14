#include <iostream>
#include <bitset>

int main() {
	//altere o "015" para "0" alguma coisa.
	int octal = 015;

	std::cout << "Octal:\t" << octal << std::endl;
	
	//altere o "0x1" para "0xF" alguma coisa.
	int hexadecimal = 0x1;

	std::cout << "Hexadecimal:\t" << hexadecimal << std::endl;

	//altere o "0b1" para "0b1" alguma coisa.
	int binario = 0b110'010'00;

	std::cout << "Binario:\t" << binario << std::endl;

	//de decimal para valores.

	int decimal = 413;

	std::cout << decimal << std::endl; //decimal -> decimal.
	std::cout << std::hex << decimal << std::endl; //decimal -> hexadecimal.
	std::cout << std::oct << decimal << std::endl; //decimal -> octal.
	std::cout << std::dec << decimal << std::endl; //decimal -> decimal.
	std::cout << std::bitset<4>{10110} << std::endl; //binario com  quatro casas. 
	return 0;
}
