#include <iostream>

consteval auto tempoComp(auto tempo) {
	return tempo;
}

constexpr int max(int num1, int num2) {
	return (num1 > num2 ? num1 : num2);
}

int main() {
//talvez seja executado na compilação
	std::cout << max(8,10) << '\n';

//vai ser executado na hora de compilar
	std::cout << tempoComp(max(8,10)) << '\n';

//podemos chamar a versão constexpr
	int numero = 8;
	std::cout << max(numero,10) << '\n';

	return 0;
}
