#include <iostream>
#include "calcular.h"

int main() {
	//our A and B
	std::cout << "Hello, today I will be using the following formula to calculate the numbers tha you will give to me: ";
	std::cout << "A² - B² = (A - B) * (A + B)\n";
	std::cout << "A and B are the numbers that you will insert.\n";
	std::cout << "Now give a value to A and B!\n";

	int number1 = getUserNum();
	int number2 = getUserNum();
	
	std::cout << number1 << "²-" << number2 << "² = " << calculate(number1,number2) << std::endl;

	return 0;
}
