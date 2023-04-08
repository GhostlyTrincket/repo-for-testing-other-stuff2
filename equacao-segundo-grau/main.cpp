#include <iostream>
#include "calculo.h"
#include "checker.h"

//this function will stay here for the moment
double getNumber() {
	double number;

	std::cin >> number;

	return number;
}

int main() {
	std::cout << "Give a value to A.\n";
	double a = getNumber(); //a is the term that multiply x².
	verifyA(a);

	std::cout << "Give a value to B.\n";
	double b = getNumber(); //b is the term that multiply x.

	std::cout << "Give a value to C.\n";
	double c = getNumber(); //c is the discriminant.

	double delta = calcDelta(a,b,c);
	verifyDelta(delta);

	std::cout << "Delta = " << delta << '\n';
	calcBashk(a,b,delta);
	return 0;
}
