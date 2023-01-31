#include <iostream>
#include <cstdint>
#include <bitset>

// 0x01 = 0000 0001
// 0x02 = 0000 0010
// 0x04 = 0000 0100
// 0x08 = 0000 1000
// 0x10 = 0001 0000

int main() {
//flag para pesquisas binarias.
//os 0s representam bits que não queremos e 1s para os quais que queremos.
	[[maybe_unused]] constexpr std::uint8_t opçãoVista = 0x01;
	[[maybe_unused]] constexpr std::uint8_t opçãoEditada = 0x02;
	[[maybe_unused]] constexpr std::uint8_t opçãoFavo = 0x04;
	[[maybe_unused]] constexpr std::uint8_t opçãoComp = 0x08;
	[[maybe_unused]] constexpr std::uint8_t opçãoDel = 0x10;
	std::uint8_t flag = opçãoFavo; 

	std::cout << std::bitset<8>{flag} << std::endl;

//para se favoritar um algo é necessario vê-lo.
//é redundante eu deixar desse jeito, já que a flag **já tem** o valor da variavel 'opçãoFavo', mas... eu quero deixar deste jeito. 
	flag |= (opçãoFavo | opçãoVista);

	std::cout << "Artigo visto: " << std::bitset<8>{flag} << std::endl;

//para se apagar um artigo do historico eu preciso comparar com os meu historico.
	flag &= opçãoDel;

	std::cout << "Artigo deletado: " << std::bitset<8>{flag} <<  std::endl;

//para retirar algo dos favoritos eu devo inverter...?
	flag &= ~opçãoFavo;
	
	std::cout << "Artigo retirado dos favoritos: " << std::bitset<8>{flag} << std::endl;
	return 0;
}
