#include <iostream>
#include "calculo.h"

//esse arquivo serve só pro usuario inserir os dados

int main() {
	std::cout << "Me de um valor para A, B e C:\n";
	int a = getUserNum();
	int b = getUserNum();
	int c = getUserNum();

	verifyA(a);

	int delta = calcDelta(a,b,c);

	verifyDeltaVal(delta);
	calcBashk(a,b,delta);

	return 0;
}
