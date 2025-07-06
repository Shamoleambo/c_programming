#include <stdio.h>

int main () {
	float num, polegadas, jardas, milhas;

	printf("Forneça o valor em pés: ");
	scanf("%f", &num);

	polegadas = num / 12;
	jardas = num * 3;
	milhas = jardas * 1760;

	printf("%f pés em polegadas: %f\n", num, polegadas);
	printf("%f pés em jardas: %f\n", num, jardas);
	printf("%f pés em milhas: %f\n", num, milhas);
	return 0;
}
