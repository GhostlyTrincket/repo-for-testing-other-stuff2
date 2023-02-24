#include <iostream>
#include "calculo.h"

int main() {
	std::cout << "Give to me a value for A, B and C:\n";

	int a = getNumber(); //a is the term that multiply x².
	int b = getNumber(); //b is the term that multiply x.
	int c = getNumber(); //c is the discriminant.

	verifyA(a);

	int delta = calcDelta(a,b,c);

	calcBashk(a,b,delta);
	return 0;
}
