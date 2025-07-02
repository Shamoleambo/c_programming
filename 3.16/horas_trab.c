#include <stdio.h>

int main () {
	float horas, salario_min, hora_trab, salario_bruto, imposto, salario;

	printf("Forneça o total de horas trabalhadas: ");
	scanf("%f", &horas);
	printf("Forneça o salário mínimo: ");
	scanf("%f", &salario_min);

	hora_trab = 0.5 * salario_min;
	salario_bruto = hora_trab * horas;
	imposto = 0.03 * salario_bruto;
	salario = salario_bruto - imposto;

	printf("Valor hora trabalhada: R$%.2f/hora\n", hora_trab);
	printf("Salário Bruto: R$%.2f\n", salario_bruto);
	printf("Impostos: R$%.2f\n", imposto);
	printf("Salário a Receber: R$%.2f\n", salario);
	return 0;

}
