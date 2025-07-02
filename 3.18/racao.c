#include <stdio.h>

int main () {
	float peso_saco, racao_gato1, racao_gato2, resto_racao, racao_consumida;

	printf("Forneça o peso do saco de ração em quilos: ");
	scanf("%f", &peso_saco);
	printf("Forneça a quantidade de ração para o primeiro gato em gramas: ");
	scanf("%f", &racao_gato1);
	printf("Forneça a quantidade de ração para o segundo gato em gramas: ");
	scanf("%f", &racao_gato1);

	racao_consumida = (racao_gato1 + racao_gato2) * 5;
	resto_racao = peso_saco - racao_consumida * 0.001;

	printf("O que sobrou de ração no saco após 5 dias: %f\n", resto_racao);
	return 0;
}
