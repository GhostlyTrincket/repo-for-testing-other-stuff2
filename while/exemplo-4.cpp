#include <iostream>

int main() {
	int contadorEx = 0;

	while(contadorEx <= 5) {
		int contadorInte = 0;
		
		while(contadorInte <= contadorEx) {

			std::cout << contadorInte << ' ';
			++contadorInte;

		}

		std::cout << contadorInte << '\n';
		std::cout << '\n';
		++contadorEx;
	}
	
	std::cout << contadorEx << '\n';

	return 0;
}
