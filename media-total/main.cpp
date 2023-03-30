#include <iostream>
#include "media.h"
#include "userInput.h"

int main() {
	std::cout << "Olá, vamos calcular a média de suas notas?\n";

	while(true) {
		std::cout << "Para calcularmos a média de suas notas, por favor me diga quantas provas ocorreram.\n";
		int quantiProvas = obterProvas();

		double notaTotal = notasAnuais(quantiProvas);
		double notaFinal = calcMedia(notaTotal,quantiProvas);

		mostrNotas(notaTotal,notaFinal);

		std::cout << "Você gostaria de sair do programa? [S/N].\n";
		char userInput = obterInput();

		if(userInput == 'S')
			break;
	}

	return 0;
}
