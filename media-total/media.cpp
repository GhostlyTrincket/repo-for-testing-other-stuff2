#include <iostream>
#include <cstdlib>
#include "userInput.h"

double calcMedia(double notaTotal, double provasPeloAno) {
//(valor1 + valor2 + valor3 + valorN) / N

//TODO: Descobrir se precisa arredondar ou não.

	return notaTotal / provasPeloAno;
}

double notasAnuais(int provasAno) {
	double notaTotal = 0;

	for(int i = 1; i <= provasAno; ++i) {
		std::cout << "Me diga o quanto você tirou na " << i << "ª prova, por favor.\n";
		double notaProva = obterNota();

		notaTotal += notaProva;
	}

	return notaTotal;
}

void mostrNotas(double notaTotal, double notaFinal) {
	std::cout << "Somando as notas das provas, você tirou " << notaTotal << '\n';
	std::cout << "A sua média foi de " << notaFinal << '\n';
}

char obterOpção() {
	char opção = ' ';

	std::cin >> opção;

	return opção;
}

void obterValoresMedia() {

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

//TODO: Descobrir um jeito melhor de terminar o programa.

	if(userInput == 'S')
		std::exit(0);
}
