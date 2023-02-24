#include <iostream>

int max(int num1, int num2) {
	return (num1 > num2 ? num1 : num2);
}

int main() {
	 int numero1 = 7;
	 int numero2 = 9;

//já que numero1 e numero2 não são constexpr, o compilador irá dar um resultado que é visto na execução do programa, não na compilação.
	std::cout << max(numero1,numero2) << " é maior\n";

	return 0;
}
