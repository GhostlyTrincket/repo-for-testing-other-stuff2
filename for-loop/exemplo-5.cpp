#include <iostream>

constexpr void loopar() {
	for(unsigned int i = 0, k = 9; i < 10; ++i,--k) {
		std::cout << i << ' ' << k << '\n';
	}
}

int main() {
	loopar();

	return 0;
}
