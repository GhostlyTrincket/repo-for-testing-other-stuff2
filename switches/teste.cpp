#include <iostream>

bool éVolgal(char caractere) {
	switch(caractere) {
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			return true;
		
		default:
			return false;
	}
}

int main() {
	std::cout << éVolgal('p') << '\n';

	return 0;
}
