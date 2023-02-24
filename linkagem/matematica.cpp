#include <iostream>
#include "matematica.h"

//Linkagem externa.
//somar() e tudo que estiver abaixo vai ser compilada e reconhecido,
int somar(int num1, int num2) {
	return num1 + num2;
}

//o que eu estou fazendo aqui é uma linkagem interna.
//mostrPI() não irá compilar e ser reconhecida, porque é estatica
static void mostrPI() {

	std::cout << global::PI << '\n';
}


