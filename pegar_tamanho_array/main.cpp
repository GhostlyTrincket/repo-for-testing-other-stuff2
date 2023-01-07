#include <iostream>

int getArrLenght(int arrayWidth, int byteSpace) {

	return arrayWidth / byteSpace;
}

int main() {
	int meu_arr[8] = {1,2,4,8,16,32,64,128};

	std::cout << "temos " << sizeof(meu_arr) << " bytes aqui." << std::endl;
	std::cout << "Agora.. de tamanho, nós temos: " << getArrLenght(sizeof(meu_arr), sizeof(int)) << std::endl;
	
	return 0;
}
