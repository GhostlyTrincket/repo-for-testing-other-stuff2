#include <iostream>
#include <iomanip>
#include "userInput.h"

double calcMedia(double notaTotal, double provasPeloAno) {
//(valor1 + valor2 + valor3 + valorN) / N
	return notaTotal / provasPeloAno;
}

double notasAnuais(int provasAno) {
	double notaTotal = 0;

//loop para obter as nota(s) da(s) prova(s) pelo ano
	for(int provaAtual = 1; provaAtual <= provasAno; ++provaAtual) {
		std::cout << "Me diga o quanto você tirou na " << provaAtual << "ª prova, por favor.\n";
		double notaProva = obterNota();

		notaTotal += notaProva;
	}

	return notaTotal;
}

void mostrNotas(double notaTotal, double notaFinal) {
	std::cout << "Somando as notas das provas, você tirou " << notaTotal << '\n';
	std::cout << std::setprecision(2);
	std::cout << "A sua média foi de " << notaFinal << '\n';
}
