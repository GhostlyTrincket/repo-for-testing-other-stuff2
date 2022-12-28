#include <iostream>
#include <cmath>

//esse arquivo vai ser a parte mais bruta

//foward function do header-- nem era para isso daqui estar aqui
int	verificarDelta(int delta);

int pegarNum() {
	int numero;

	std::cin >> numero;

	return numero;
}

int acharDelta(int a, int b, int c) {
	int delta = pow(b,2) - 4 * (a * c);
	
	verificarDelta(delta);
	
	return delta; 
}

int calcularBashk(int a, int b, int delta) {
	int X1 = ((b * (-1)) + sqrt(delta)) / (2 * a);
	int X2 = ((b * (-1)) - sqrt(delta)) / (2 * a);
	
	std::cout << "A primeira raiz é " << X1 << std::endl;
	std::cout << "A segunda raiz é " << X2 << std::endl;

	return 0;
}
