#include <iostream>
#include <cmath>

int getNumber() {
	int number;

	std::cin >> number;

	return number;
}

int verifyA(int a) {
	if(a == 0) {
		std::cout << "Impossible to calculate if the value of 'a' is equal to zero.\n";
		exit(1);
	} 

	return 0;
}

int verifyDelta(int delta) {
	if(delta < 0) {
		std::cout << "Imaginary number detected, stopping calculus!\n";
		exit(1);
	}

	return delta;
}

int calcDelta(int a, int b, int c) {
	return pow(b,2) - 4 * (a * c);
}

void printResult(int firstRoot, int secondRoot) {
	std::cout << "First root: " << firstRoot << '\n';
	std::cout << "Second root: " << secondRoot << '\n';
}

int calcBashk(int a, int b, int delta) {
	int x1 = (-b + sqrt(delta)) / (2 * a);
	int x2 = (-b - sqrt(delta)) / (2 * a);
	
	printResult(x1,x2);

	return 0;
}
