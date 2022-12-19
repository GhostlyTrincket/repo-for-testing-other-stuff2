#include <stdio.h>
// o objetivo aqui é só testar o loop for
int main() {
	int yerNumb;
	int maxVal = 100;

	printf("Insira um numero aqui:");
	scanf("%d", &yerNumb);

	if(yerNumb >= maxVal) {
		printf("Valor invalido!\n");
	} else {
		for(int i = 0; i <= maxVal; i = yerNumb) {
			printf("O valor atual é %d\n", yerNumb);
			yerNumb++;
		}
	}

	return 0;
}
