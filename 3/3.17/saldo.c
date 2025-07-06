#include <stdio.h>
#define CPMF 0.0038

int main () {
	float salario, cheque1, cheque2, saldo;

	printf("Forneça o Salário depositado: ");
	scanf("%f", &salario);
	printf("Forneça o valor do Primeiro Cheque: ");
	scanf("%f", &cheque1);
	printf("Forneça o valor do Segundo Cheque: ");
	scanf("%f", &cheque2);

	saldo = salario - cheque1 * (1 + CPMF) - cheque2 * (1 + CPMF);

	printf("Saldo Bancário: R$%.2f\n", saldo);
	return 0;
}
