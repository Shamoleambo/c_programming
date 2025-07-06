#include <stdio.h>

int main () {
	float salario_min, kw_cons, valor_kw, valor, valor_desconto;

	printf("Forneça o salário mínimo: ");
	scanf("%f", &salario_min);
	printf("Forneça a quantidade de quilowatts consumidos: ");
	scanf("%f", &kw_cons);

	valor_kw = salario_min * 0.2;
	valor = kw_cons * valor_kw;
	valor_desconto = valor * 0.85;

	printf("Valor de cada quilowatt: %f\n", valor_kw);
	printf("Valor total a ser pago: R$%.2f\n", valor);
	printf("Valor com desconto de 15%%: R$%.2f\n", valor_desconto);
	return 0;
}
