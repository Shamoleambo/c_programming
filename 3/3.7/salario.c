#include <stdio.h>
#define BONUS 50
#define TAXES 0.01

int main () {
	float salario_base, salario_rec;

	printf("Forneça o salário base: ");
	scanf("%f", &salario_base);

	salario_rec = salario_base - (TAXES * salario_base) + BONUS;

	printf("O salário após gratificação e impostos será de: R$%.2f\n", salario_rec);
	return 0;
}
