#include <iostream>
#include <string>
#include <string_view>

int largNome(std::string_view nomeDigi) {
	int larguNome = static_cast<int>(nomeDigi.length());

	return larguNome;
}

void mostrNome(int largNome) {
	std::cout << "Largura = " << largNome << std::endl;
}

int main() {
	std::string nome;
	int larguNome;

	std::cout << "Por favor, insira um nome aqui:\n";
	std::getline(std::cin >> std::ws, nome);
	
	larguNome = largNome(nome);
	mostrNome(larguNome);

	return 0;
}
