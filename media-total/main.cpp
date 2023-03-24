#include <iostream>
#include "media.h"
#include "userInput.h"

int main() {
	std::cout << "Olá, vamos calcular a média de suas notas?\n";

	while(true) {
//TODO: Tentar arranjar de diminuir o máximo possivel essa função.
		std::cout << "Para calcularmos a média de suas notas, por favor me diga quantas provas ocorreram.\n";
		int quantiProvas = obterProvas();

		double notaTotal = notasAnuais(quantiProvas);
		double notaFinal = calcMedia(notaTotal,quantiProvas);

		mostrNotas(notaTotal,notaFinal);

//Talvez eu não precise disso daqui...
		std::cout << "Você gostaria de sair do programa? [S/N].\n";
		char userInput = obterInput();

//eu não sei se tem outro jeito de terminar esse programa que não seja usando o std::exit
//update: eu descobri... outro jeito.

		if(userInput == 'S')
			break;
	}

	return 0;
}
