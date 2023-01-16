#include <iostream>
#include <string>

int stringToInt(std::string strinGiven) {
	return static_cast<int>(strinGiven.length());
}

int sumNameAge(int nameLength, int age) {
	return nameLength + age;
}

void printResult(int sum) {
	std::cout << "The name and age provided has the length " << sum << "!" << std::endl;
}
