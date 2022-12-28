#include <iostream>
#include "verificador.h"

//esse arquivo serve só pro usuario inserir os dados
int pegarNum();

int verificarA(int a) {
	if(a == 0) {
		std::cout << "Impossível calcular, sendo A = 0!\n";
	} else {
		return a;
	}

	return 0;
}



int acharDelta(int a, int b, int c); 

int calcularBashk(int a, int b, int delta);

int main() {
	int a; //a é quem está multiplicando x².
	int b; //b é quem multiplica x.
	int c; //c é o termo solto

	std::cout << "Me de um valor para A, B e C:\n";
	a = pegarNum();

	verificarA(a);

	b = pegarNum();
	c = pegarNum();
	
	int delta = acharDelta(a,b,c);

	calcularBashk(a,b,delta);

	return 0;
}
