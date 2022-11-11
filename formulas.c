#include <stdio.h>

double calcCoss(double RAD) {
	//(RAD * PI) / 180;
	const double PI = 3.14;

	return (RAD * PI) / 180;
}

int main() {
	double valCoss;
	double resultado;

	printf("olar, vamos calcular o cosseno?\n");
	printf("insira um valor para o cosseno:");
	scanf("%lf", &valCoss);
	
	resultado = calcCoss(valCoss);
	
	printf("o cosseno de %.2lf é = %.2lf\n",valCoss, resultado);
};
