#include <iostream>
#include "calcular.h"

int main() {
	double number1;
	double number2;
	char operation;

	std::cout << "Please, insert two numbers here:\n";
	number1 = getNumber();
	number2 = getNumber();

	operation = chooseOp();
	
	if(operation == 'A') {
		std::cout << number1 << '+' << number2 << '=' << add(number1,number2) << std::endl;
	} else if(operation == 'S') {
		std::cout << number1 <<  '-' << number2 << '=' << subtract(number1,number2) << std::endl;
	}

	if(operation == 'M') {
		std::cout << number1 << 'X' << number2 << '=' << multiply(number1,number2) << std::endl;
	} else if(operation == 'D') {
		std::cout << number1 << '/' << number2 << '=' << divide(number1,number2) << std::endl;
	}
	return 0;
}
