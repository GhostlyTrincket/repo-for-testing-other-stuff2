#include <iostream>
#include <cmath>

double calcDelta(double a, double b, double c) {
//Delta = b² - 4 * a * c
	return (b * b) - 4 * (a * c);
}

void printResult(double x1, double x2) {
	std::cout << "First root: " << x1 << '\n';
	std::cout << "Second root: " << x2 << '\n';
}

void calcBashk(double a, double b, double delta) {
//(-b) -+ SquareRootOf(Delta) / 2 * a
//if delta = 0 then, there will be only one root.
//if delta > 0 then, two roots.
	double x1 = (-b + sqrt(delta)) / (2 * a);
	double x2 = (-b - sqrt(delta)) / (2 * a);
	
	printResult(x1,x2);
}
