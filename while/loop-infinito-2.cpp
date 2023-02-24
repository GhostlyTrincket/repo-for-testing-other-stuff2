#include <iostream>

int main() {
//este loop vai ser sempre infinito, já que não vai ter como sair dele, a não ser, é claro, se for com um "exit();", "return 0;" ou "CTRL-C"
	char input = ' ';

	while(true) {
		std::cout << "Vocẽ entrou em um loop.\n";
		std::cout << "Para sair dele, por favor, digite [A].\n"; 

		std::cin >> input;

		if(input == 'A') {
			exit(0);
		}
	}

	return 0;
}
