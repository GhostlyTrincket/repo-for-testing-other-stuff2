#include <iostream>
#include "calculo.h"

int main() {
	//our A and B

	int unknowNum1;
	int unknowNum2;
	
	std::cout << "Hello, today I will be using the following formula to calculate the numbers tha you will give to me: ";
	std::cout << "A² - B² = (A - B) * (A + B)";
	std::cout << "A and B are the numbers that you will insert.\n";
	std::cout << "Now give a value to A and B!\n";
	
	unknowNum1 = getUserNum();
	unknowNum2 = getUserNum();
	
	std::cout << unknowNum1 << "² - " << unknowNum2 << "² = " << calculate(unknowNum1,unknowNum2) << std::endl;

	return 0;
}
