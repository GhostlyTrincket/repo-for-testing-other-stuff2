#include <iostream>
#include "calculo.h"

//esse arquivo serve só pro usuario inserir os dados

int getUserNum();

int main() {
	int a; //a é quem está multiplicando x².
	int b; //b é quem multiplica x.
	int c; //c é o termo solto.

	std::cout << "Me de um valor para A, B e C:\n";
	a = getUserNum();
	b = getUserNum();
	c = getUserNum();

	verifyA(a);
	
	int delta = findDeltaVal(a,b,c);

	calcBashk(a,b,delta);

	return 0;
}
