#include <iostream>

int main() {
	
	int contagem = 1;

	while(contagem <= 50) {

		if(contagem < 10) {
			std::cout << '0';
		}

		std::cout << contagem << ' ';

		if(contagem % 10 == 0) {
			std::cout << '\n';
		}

		++contagem;
	}

	return 0;
}
