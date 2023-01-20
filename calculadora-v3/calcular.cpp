#include <iostream>

double getNumber() {
	double number;
	
	std::cin >> number;

	return number;
}

double multiply(double number1, double multiplic) {
	return number1 * multiplic;
}

double add(double number1, double number2) {
	return number1 + number2;
}

double subtract(double number1, double number2) {
	return number1 - number2;
}

double divide(double number1, double number2) {
	if(number1 == 0 || number2 == 0) {
		std::cout << "ERRO.\nCODIGO DE SAÍDA:";
		return 1;
	} else {
		return number2 / number1;
	}
}

char chooseOp() {
	char operation;

	std::cout << "Would you like to [A]dd, [S]ubtract, [M]ultiply or [D]ivide, with the given numbers?\n";
	std::cin >> operation;
	
	return operation;
}
