#include <stdio.h>

int main () {
	float base, altura, area;

	printf("Forneça a base do triangulo: ");
	scanf("%f", &base);
	printf("Forneça a altura do triangulo: ");
	scanf("%f", &altura);

	area = base * altura * 0.5;

	printf("A área do triângulo é: %f\n", area);
	return 0;
}
