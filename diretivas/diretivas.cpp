#include <iostream>

//#define MEU_NOME "John Egbert"

int main() {
	#ifdef MEU_NOME
		std::cout << "O meu nome é " << MEU_NOME << std::endl;
	#endif
	#ifndef MEU_NOME
		std::cout << "Eu não sei o meu nome!\n";
	#endif

	return 0;
}
