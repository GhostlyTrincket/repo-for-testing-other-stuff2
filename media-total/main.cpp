#include <iostream>
#include "media.h"
#include "userInput.h"

void calcularMedia() {
	std::cout << "Para calcularmos a média de suas notas, por favor me diga quantas provas ocorreram.\n";
	int quantiProvas = obterProvas();

	double notaTotal = 0;

	for(int i = 1; i <= quantiProvas; ++i) {
		std::cout << "Me diga o quanto você tirou na " << i << "ª prova, por favor.\n";
		double notaProva = obterNota();

		notaTotal += notaProva;
	}

	std::cout << "Somando as notas das provas, você tirou " << notaTotal << '\n'; 
	std::cout << "A sua média anual é de " << calcMedia(notaTotal,quantiProvas) << '\n';

	std::cout << "Você gostaria de sair do programa? [S/N].\n";
	char userInput = obterInput();
	
	if(userInput == 'S') {
		exit(0);
	}
}

int main() {
	std::cout << "Olá, vamos calcular a média de suas notas?\n";

	while(true) {
		calcularMedia();
	}

	return 0;
}
