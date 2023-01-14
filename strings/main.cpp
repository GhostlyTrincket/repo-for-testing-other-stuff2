#include <iostream>
#include <string>

int sumNameAge(int name, int age) {
	return name + age;
}

int main() {
	std::string name;
	int age;

	std::cout << "Insert a name and age here, so that I can sum both.\n";

	std::getline(std::cin >> std::ws, name);
	std::cin >> age;
	
	int Int_Name = static_cast<int>(name.length());

	std::cout << "The name and age provided has a length that is equals to " << sumNameAge(Int_Name, age) << "!" << std::endl;

	return 0;
}
