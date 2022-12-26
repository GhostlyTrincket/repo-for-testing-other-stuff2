#include <iostream>
#include <iomanip>

float pegarFeet() {
	float comprimento;

	std::cin >> comprimento;

	return comprimento;
}

float feetParaMetros(float metro);

int main() {
	//tradutor de feet (medida americana) para metros (medida universal)
	float feet;

	std::cout << "Insira a altura em feet aqui:\n";
	feet = pegarFeet();

	std::cout << std::setprecision(4) << feet << " pés é igual a " << feetParaMetros(feet) << std::endl;
	return 0;
}
