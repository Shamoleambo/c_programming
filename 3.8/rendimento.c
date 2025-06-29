#include <stdio.h>

int main () {
	float deposito, taxa_juros, rendimento, total;

	printf("Forneça o valor do depósito: ");
	scanf("%f", &deposito);
	printf("Forneça o valor da taxa de juros: ");
	scanf("%f", &taxa_juros);

	rendimento = deposito * (taxa_juros / 100);
	total = deposito + rendimento;

	printf("Rendimento: R$%.2f\n", rendimento);
	printf("Total: R$%.2f\n", total);
	return 0;
}
