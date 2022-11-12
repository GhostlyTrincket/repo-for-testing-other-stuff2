#include <stdio.h>
#include <math.h>

int main() {
	double valCoss;
	double resultado;

	printf("olar, vamos calcular o cosseno?\n");
	printf("insira um valor para o cosseno:");
	scanf("%lf", &valCoss);
	
	resultado = cos(valCoss);

	printf("o cosseno de %.2lf é = %.2lf\n",valCoss, resultado);
};
