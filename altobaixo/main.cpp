#include <iostream>

void verificarNum(int seuNum); 

int verficarTentativas(int tentativas);

int main() {
	int seuNum;
	int tentativas = 3;
	std::cout << "Tente adivinhar o numero em que estou pensando. Você tem " << tentativas << " tentativas.\n";
	std::cout << "Insira o numero que você está pensando aqui:";

	std::cin >> seuNum;
	
	verificarNum(seuNum);
	return 0;
}
