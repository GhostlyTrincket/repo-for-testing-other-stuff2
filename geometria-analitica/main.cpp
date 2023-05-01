#include <iostream>
#include <cmath>

int main() {
	std::cout << "Vamos calcular a distancia entre dois pontos!\n";
	std::cout << "Para fazermos isso, será necessário dois X e Y!\n";

	float aX = 0;
	std::cout << "Insira o valor do X do ponto A aqui: ";
	std::cin >> aX;

	float aY = 0;
	std::cout << "Agora o Y do ponto A aqui: ";
	std::cin >> aY;

	float bX = 0;
	std::cout << "Insira o valor do X do ponto B aqui: ";
	std::cin >> bX;

	float bY = 0;
	std::cout << "Agora o Y do ponto B aqui: ";
	std::cin >> bY;

	std::cout << "Por fim, vamos calcular o resultado da conta!\n";

	float calculo = std::sqrt(pow(aX - bX,2) + pow(aY - bY,2));

	std::cout << "A distância entre A(" << aX << ',' << aY << ") e B(" << bX << ',' << bY << ") é " << calculo << '\n';

	return 0;
}
