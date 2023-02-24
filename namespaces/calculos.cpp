#include <iostream>
#include "calculos.h"

namespace Matematica {
	int somar(int num1, int num2) {
		return num1 + num2;
	}

	int subtrair(int num1, int num2) {
		return num1 - num2;
	}
}

namespace UserInput {
	int pegarNum() {
		int numero;

		std::cin >> numero;
		
		return numero;
	}
}
