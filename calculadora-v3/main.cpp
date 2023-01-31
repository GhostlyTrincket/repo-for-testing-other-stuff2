#include <iostream>
#include "calcular.h"

int main() {
	double number1;
	double number2;
	char operation;

	std::cout << "Please, insert two numbers here:\n";
	number1 = getNumber();
	number2 = getNumber();

	std::cout << "Would you like to [A]dd, [S]ubtract, [M]ultiply or [D]ivide?\n";
	operation = chooseOp();
	
	showResult(number1,number2,operation);
	return 0;
}
