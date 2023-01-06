#include <iostream>
#include "logica.h"

void verificarNum(int seuNum) {
	const int meuNum = 5;

	if(seuNum <= meuNum - 3) {
		std::cout << "FRIO.\n";
	} else if(seuNum > meuNum - 2) {
		std::cout << "QUENTE.\n";
	}

	if(seuNum == meuNum) {
		std::cout << "ACERTOU, VOCÊ NÃO GANHOU NADA, MAS VOCÊ ACERTOU!\n";
	}
}

int verificarTentativas(int tentativas) {
	return 0;
}
