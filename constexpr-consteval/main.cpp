#include <iostream>

//está função vai ser avaliada na compilação do programa.
constexpr int max(int num1, int num2) {
	return (num1 > num2 ? num1 : num2);
}

//agora, "int max(int num1, int num2)" vai ser avaliada na execução do programa.

int main() {
	constexpr int numero1 = 7;
	constexpr int numero2 = 9;
	constexpr int resultado = max(numero1,numero2);

	std::cout << resultado << " é maior\n";

	return 0;
}

/*
*
*Eu só quero dizer que: o compilador pode decidir entre poder avaliar o código em dois estados:
*
* - Na compilação do programa.
* - Na execução do programa.
*
*/
