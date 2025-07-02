#include <stdio.h>

int main () {
	float preco_fab, perc_lucro, perc_tax, valor_lucro, valor_tax, valor;

	printf("Forneça o preço de fábrica do carro: ");
	scanf("%f", &preco_fab);
	printf("Forneça o percentual de lucro do fabricante: ");
	scanf("%f", &perc_lucro);
	printf("Forneça o percentual de impostos do carro: ");
	scanf("%f", &perc_tax);

	valor_lucro = preco_fab * perc_lucro * 0.01;
	valor_tax = preco_fab * perc_tax * 0.01;
	valor = preco_fab + valor_lucro + valor_tax;

	printf("Valor Lucro: R$%.2f\n", valor_lucro);
	printf("Valor Impostos: R$%.2f\n", valor_tax);
	printf("Valor Total: R$%.2f\n", valor);
	return 0;
}
