#include <iostream>
#include <string_view>

int stringToInt(std::string_view strinGiven) {
	return static_cast<int>(strinGiven.length());
}

int sumNameAge(int nameLength, int age) {
	return nameLength + age;
}

void printResult(int sum) {
	std::cout << "The name and age provided has the length " << sum << "!" << std::endl;
}
