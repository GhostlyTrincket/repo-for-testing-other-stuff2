#include <iostream>

void mostrNum(int numero) {
	//vai verificar se "int numero" é == a 1,2,3.
	switch(numero) {
		case 1:
			std::cout << "um.\n";
		break;
		case 2:
			std::cout << "dois.\n";
			[[fallthrough]];
		case 3:
			std::cout << "três.\n";
		break;
		//valor padrão, em caso de não tiver nenhum numero nas condições acima.
		default:
			std::cout << "numero desconhecido.\n";
		break;
	}
}

int main() {
	int numero = 0;
	std::cout << "Insira um numero aqui, e eu irei dizer o numero por extenso:\n";
	std::cin >> numero;

	mostrNum(numero);

	return 0;
}
