#include <stdio.h>
#define BONUS 0.05
#define TAXES 0.07

int main () {
	float salario_base, salario_rec;

	printf("Forneça o salário base: ");
	scanf("%f", &salario_base);

	salario_rec = salario_base - (salario_base * TAXES) + (salario_base * BONUS);
	printf("O salário depois da gratificação e impostos será de: R$%.2f\n", salario_rec);
	return 0;
}
