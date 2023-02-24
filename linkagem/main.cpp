#include <iostream>

int somar(int,int);

void mostrPI();

void mostrLogNatural();

void mostrRaizDois();

void mostrGravidade();

int main() {
//vai funcionar se compilar no momento que a função mostrPI() for comentada. 
	std::cout << "4 + 5 = " << somar(4,5) << '\n'; 

//	mostrPI();
	mostrLogNatural();
	mostrRaizDois();
	mostrGravidade();

	return 0;
}
