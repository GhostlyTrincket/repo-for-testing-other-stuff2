#include <stdio.h>

int main() {
	int meuNum;

	printf("Insira um numero aqui para que depois eu aumente o valor do mesmo até 100:\n");
	scanf("%d", &meuNum);

	for(int i = 0; meuNum <= 100; i++) {
		printf("O valor atual do numero é %d\n", meuNum);

		meuNum += 1;
	};

	return 0;
}
