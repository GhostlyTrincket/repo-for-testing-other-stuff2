#include <iostream>

int main() {
	switch(1) {
		case 1:
		{
			int numero = 5;

			std::cout << numero << '\n';
		}
		break;
		default:
			std::cout << "banana\n";
		break;
	}

	return 0;
}
