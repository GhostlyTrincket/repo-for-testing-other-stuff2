#include <stdio.h>
<<<<<<< HEAD
#include <math.h>
=======

double calcCoss(double RAD) {
	//(RAD * PI) / 180;
	const double PI = 3.14;

	return (RAD * PI) / 180;
}
>>>>>>> 17cf4696724a2539e8bafdd3366c7813807e086e

int main() {
	double valCoss;
	double resultado;

	printf("olar, vamos calcular o cosseno?\n");
	printf("insira um valor para o cosseno:");
	scanf("%lf", &valCoss);
	
<<<<<<< HEAD
	resultado = cos(valCoss);

=======
	resultado = calcCoss(valCoss);
	
>>>>>>> 17cf4696724a2539e8bafdd3366c7813807e086e
	printf("o cosseno de %.2lf é = %.2lf\n",valCoss, resultado);
};
