#include <stdio.h>

int main () {
	float salario, perc_aumento, aumento;

	printf("Forneça o valor do salário atual: ");
	scanf("%f", &salario);
	printf("Forneça o valor do aumento (%%): ");
	scanf("%f", &perc_aumento);

	aumento = salario * (perc_aumento/100);
	salario += aumento;

	printf("Com um aumento de %.2f%% o aumento será: R$%.2f. Totalizando: R$%.2f\n", perc_aumento, aumento, salario);
	return 0;
}
