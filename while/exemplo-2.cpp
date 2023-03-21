#include <iostream>

int main() {
//erro: unsigned ints são sempre verdadeiros.
//para que não ocorra esse tipo, deve-se para **signed int**, ou, somente **int**

	unsigned int contagem = 10;

	while(contagem >= 0) {
		if(contagem == 0) {
			std::cout << "Fim do programa.\n";
			return 1;
		} else {
			std::cout << contagem << ' ';
		}

		--contagem;
	}

	std::cout << '\n';

	std::cout << contagem << '\n';
	return 0;
}
