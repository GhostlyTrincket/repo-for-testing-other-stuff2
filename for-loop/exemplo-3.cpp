#include <iostream>

constexpr void loopar(int numero) {
//pode-se omitir areas em um loop for.
	for(int i = 0; i <= numero ;) {
		std::cout << i << ' ' << '\n';
		i += 2;
	}

//isso daqui é o mesmo que "while(true)"
	//for(;;) {
	//	std::cout << "Banana.\n";
	//}

}

int main() {
	constexpr int numero = 10;

	loopar(numero);

	return 0;
}
