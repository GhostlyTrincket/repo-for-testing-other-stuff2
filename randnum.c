#include <stdio.h>

int randNum(int numEscolhido) {
	// o que eu eu tenho que fazer;;;
	// em primeiro lugar, eu tenho que dar alguns numeros para o computador...
	int seleção[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	// ai eu tenho que dar um jeito de deixar o computador calcular...
	// talvez com um loop "for"...?
	for(int i = 0; i < 10; i++) {
		if(i == seleção[7]) {
			numEscolhido = i;
		}
	};

	return numEscolhido; 
}

int main() {
	int seuNum, meuNum;

	printf("Olá, hoje você irá me dizer um numero que você está pensando e, eu irei pensar em um outro numero!\n");
	printf("Pois bem, digite um numero aqui:");
	scanf("%d", &seuNum);
	
	printf("Ótimo, agora me deixe pensar em um número, sim?\n");
	
	meuNum = randNum(seuNum);

	if(seuNum == meuNum) {
		printf("Parabéns! Você acertou!\n");
	} else {
		printf("Que pena, você não pensou no número que eu escolhi.\n");
	}

	return 0;
}
