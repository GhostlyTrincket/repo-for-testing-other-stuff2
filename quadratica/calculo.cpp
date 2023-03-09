#include <iostream>
#include <cmath>

int getNumber() {
	int number;

	std::cin >> number;

	return number;
}

int verifyA(int a) {
//if a == 0 then...
//F(X) = a * x² + b * x + c
//F(0) = a * 0² + b * 0 + c
//F(0) = 0 + 0 + c
//F(0) = c.

	if(a == 0) {
		std::cout << "Impossible to calculate if the value of 'a' is equal to zero.\n";
		exit(1);
	} 

	return 0;
}

int verifyDelta(int delta) {
	if(delta < 0) {
		//delta = i
		std::cout << "Imaginary number detected, stopping calculus!\n";
		exit(1);
	}

	return delta;
}

int calcDelta(int a, int b, int c) {
//Delta = b² - 4 * a * c
	return pow(b,2) - 4 * (a * c);
}

void printResult(int x1, int x2) {
	std::cout << "First root: " << x1 << '\n';
	std::cout << "Second root: " << x2 << '\n';
}

int calcBashk(int a, int b, int delta) {
//(-b) -+ SquareRootOf(Delta) / 2 * a
	int x1 = (-b + sqrt(delta)) / (2 * a);
	int x2 = (-b - sqrt(delta)) / (2 * a);
	
	printResult(x1,x2);

	return 0;
}
