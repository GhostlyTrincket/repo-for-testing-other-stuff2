#include <iostream>

consteval int max(int num1, int num2) {
	return (num1 > num2 ? num1 : num2);
}

int main() {
	constexpr int G = max(2,5);
	
	std::cout << max(5,6) << " é maior\n";

	int num = 6;

	std::cout << max(num,8) << '\n';

	return 0;
}
