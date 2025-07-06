#include <stdio.h>

int main () {
	float altura, altura_degrau, qtde_degraus;

	printf("Forneça a altura a ser vencida: ");
	scanf("%f", &altura);
	printf("Forneça a altura do degrau: ");
	scanf("%f", &altura_degrau);

	qtde_degraus = altura / altura_degrau;

	printf("A quantidade de degraus é: %f\n", qtde_degraus);
	return 0;
}
