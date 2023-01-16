#include <iostream>
#include "converter.h"

int main() {
	std::string name;
	int age;

	std::cout << "Insert a name and age here, so that I can sum both.\n";

	std::getline(std::cin >> std::ws, name);
	std::cin >> age;
	
	int Int_Name = stringToInt(name);
	int sum = sumNameAge(Int_Name, age);
	
	printResult(sum);

	return 0;
}
