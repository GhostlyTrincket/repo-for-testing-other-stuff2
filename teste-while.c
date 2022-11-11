#include <stdio.h>

int main() {
	int numero;
	int i = 0;

	printf("Insira um numero aqui para ser multiplicado por 10:");
	scanf("%d", &numero);

	while(i <= 100) {
		int conta = numero * i;

		printf("%d X %d = %d\n", numero, i, conta);
		i += 10;
	};

	return 0; 
}
