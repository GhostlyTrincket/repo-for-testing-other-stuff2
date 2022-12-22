#include <iostream>

int multipl(int numero1, int multiplic) {
	return numero1 * multiplic;
}

int adição(int numero1, int numero2) {
	return numero1 + numero2;
}

int subtração(int numero1, int numero2) {
	return numero1 - numero2;
}

float divisão(float numero1, float numero2) {
	if(numero1 == 0 || numero2 == 0) {
		//404 porque isso mostra que deu erro.
		return 404;
	} else {
		//eu sei que, por exemplo, se eu colocar "1/4" vai me dar um valor do tipo float.
		//mas por enquanto, sem dor de cabeça. Eu me preocupo com isso mais tarde.
		return numero2 / numero1;
	}
}

int main() {
	int num1;
	int num2;
	float resultDivi;
	char escolha;

	std::cout << "Insira dois numeros.\n";
	std::cin >> num1 >> num2;
	
	std::cout << "Você gostaria de efetuar uma [A]dição, [S]ubtração, [M]ultiplicação ou uma [D]ivisão, com estes numeros?\n";
	std::cin >> escolha;

	if(escolha == 'A') {
		std::cout << num1 << " + " << num2 << " = " << adição(num1,num2) << std::endl;
	} else if(escolha == 'S') {
		std::cout << num1 << " - " << num2 << " = " << subtração(num1,num2) << std::endl;
	}
	
	if(escolha == 'M') {
		std::cout << num1 << " X " << num2 << " = " << multipl(num1, num2) << std::endl;
	} else if(escolha == 'D') {
		resultDivi = divisão(num1,num2);

		if(resultDivi == 404) {
			std::cout << "Houve um erro ou dividir os numeros dados: certifique-se de não ter inserido 0.\n";
		} else {
			std::cout << num2 << " % " << num1 << " = " << resultDivi << std::endl;
		}
	}

	return 0;
}

