#include <iostream>

int multiplicar(int numero1, int multiplic) {
	return numero1 * multiplic;
}

int somar(int numero1, int numero2) {
	return numero1 + numero2;
}

int subtrair(int numero1, int numero2) {
	return numero1 - numero2;
}

//talvez seja melhor um double...
float dividir(float numero1, float numero2) {
	if(numero1 == 0 || numero2 == 0) {
		std::cout << "ERRO.\nCODIGO DE SAÍDA:";
		return 1;
	} else {
		return numero2 / numero1;
	}
}
