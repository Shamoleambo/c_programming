#include <stdio.h>

int main () {
	float salario, novo_salario;

	printf("Forneça o salário do funcionário: ");
	scanf("%f", &salario);

	novo_salario = 1.25 * salario;

	printf("O salário R$%.2f teve um aumento de 25%% e agora é: R$%.2f\n", salario, novo_salario);
	return 0;
}
