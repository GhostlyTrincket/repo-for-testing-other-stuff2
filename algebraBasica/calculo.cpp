#include <iostream>
#include <cmath>
#include "calculo.h"

//esse arquivo vai ser a parte mais bruta

int getUserNum() {
	int number;

	std::cin >> number;

	return number;
}

int calculate(int a, int b) {	
	int calculus = (a * a) + (a * b) + (b * (-1) * a) + (b * (-1) * b);

	return calculus;
}
