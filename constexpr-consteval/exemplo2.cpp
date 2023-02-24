#include <iostream>

constexpr int max(int num1, int num2) {
	return (num1 > num2 ? num1 : num2);
}

int main() {
	constexpr int G = max(7,9); 

//avaliado na hora de compilar
	std::cout << G << " é maior\n";

	int numero = 7; //int normal

//avaliado na execução
	std::cout << max(numero,9) << " é maior\n"; 

//pode ser avaliado tanto na execução tanto na compilação do programa
	std::cout << max(7,9) << " é maior\n"; 

	return 0;
}
