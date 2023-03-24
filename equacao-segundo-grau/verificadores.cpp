#include <iostream>
#include <cstdlib>

void verifyA(double a) {
//if a = 0 then...
//F(0) = a * 0² + b * x + c
//and then it stops being second degree, which is needed by default to calculate delta. 
	if(a == 0.0) {
		std::cout << "The value of 'a' is 0. Stopping calculus!\n";
		std::exit(0);
	}
}

void verifyDelta(double delta) {
	if(delta < 0.0) {
//delta = i
		std::cout << "Imaginary number detected, stopping calculus!\n";
		std::exit(0);
	}
}
