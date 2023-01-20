#include <iostream>
#include "converter.h"

int main() {
	std::string name;
	int age;

	std::cout << "Insert a name here.\n";
	std::getline(std::cin >> std::ws, name);

	std::cout << "And a age here, so that I can sum the age and the length of the name.\n";
	std::cin >> age;
	
	int Int_Name = stringToInt(name);
	int sum = sumNameAge(Int_Name, age);
	
	printResult(sum);

	return 0;
}
