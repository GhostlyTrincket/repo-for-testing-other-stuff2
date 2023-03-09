#include <iostream>
#include "calculo.h"

int main() {
	std::cout << "Give a value to A.\n";
	int a = getNumber(); //a is the term that multiply x².
	verifyA(a);

	std::cout << "Give a value to B.\n";
	int b = getNumber(); //b is the term that multiply x.

	std::cout << "Give a value to C.\n";
	int c = getNumber(); //c is the discriminant.

	int delta = calcDelta(a,b,c);
	verifyDelta(delta);

	std::cout << "Delta = " << delta << '\n';
	calcBashk(a,b,delta);
	return 0;
}
