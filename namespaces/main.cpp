#include <iostream>
#include "calculos.h"

int main() {
	int numero1;
	int numero2;
	namespace constantes = Matematica::especiais;

	std::cout << "Por favor, insira dois numeros aqui:\n";
	numero1 = UserInput::pegarNum();
	numero2 = UserInput::pegarNum();
	
	std::cout << numero1 << '+' << numero2 << '=' << Matematica::somar(numero1,numero2) << std::endl;
	std::cout << numero1 << '*' << constantes::PI << '=' << numero1 * constantes::PI << std::endl;
	return 0;
}
