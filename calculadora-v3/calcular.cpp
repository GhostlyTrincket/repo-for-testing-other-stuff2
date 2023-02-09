#include <iostream>

double multiply(double num1, double multiplier) {
	return num1 * multiplier;
}

double add(double num1, double num2) {
	return num1 + num2;
}

double subtract(double num1, double num2) {
	return num1 - num2;
}

double divide(double num1, double num2) {
	if(num1 == 0 || num2 == 0) {
		std::cout << "ERROR.\nERROR CODE:";
		return 1;
	} else {
		return num1 / num2;
	}
}

double getNum() {
	double num;

	std::cin >> num;

	return num;
}

char chooseOp() {
	char operation;

	std::cin >> operation;

	return operation;
}

void showResult(double num1, double num2, char OP) {
	if(OP == 'A') {
		std::cout << num1 << '+' << num2 << '=' << add(num1,num2) << std::endl;
	} else if(OP == 'S') {
		std::cout << num1 << '-' << num2 << '=' << subtract(num1,num2) << std::endl;
	}

	if(OP == 'M') {
		std::cout << num1 << 'x' << num2 << '=' << multiply(num1,num2) << std::endl;
	} else if(OP == 'D') {
		std::cout << num1 << '/' << num2 << '=' << divide(num1,num2) << std::endl;
	}
}

