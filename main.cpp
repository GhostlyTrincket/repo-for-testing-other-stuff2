#include <iostream>
#include <iomanip>

float pegarFeet() {
	float comprimento;

	std::cin >> comprimento;

	return comprimento;
}

//vai avisar para o compilador que a função "feetParaMetros" existe.
float feetParaMetros(float metro);

int main() {
	//tradutor de feet (medida americana) para metros (medida universal)
	float feet;

	std::cout << "Insira a altura em feet aqui:\n";
	feet = pegarFeet();

	//eu estou usando o "setprecision" para limitar as casas decimais.
	//eu estou, no final da linha, chamando a função "feetParaMetros()" que está no arquivo "conversor.cpp".
	std::cout << std::setprecision(4) << feet << " pés é igual a " << feetParaMetros(feet) << std::endl;

	return 0;
}
