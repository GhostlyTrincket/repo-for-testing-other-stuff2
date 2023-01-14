#include "calcular.h"

//esse arquivo vai ser a parte mais bruta

int getUserNum() {
	int number;

	std::cin >> number;

	return number;
}

int invertSign(int number) {
	return number * (-1);
}

int calculate(int a, int b) {	
	int calculus = (a * a) + (a * b) + (invertSign(b) * a) + (invertSign(b) * b);
	return calculus;
}
