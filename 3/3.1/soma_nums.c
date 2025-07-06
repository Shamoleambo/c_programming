#include <stdio.h>

int main () {
	int num1, num2, num3, num4, soma = 0;

	printf("Forneça o primeiro número: ");
	scanf("%d", &num1);
	printf("Forneça o segundo número: ");
	scanf("%d", &num2);
	printf("Forneça o terceiro número: ");
	scanf("%d", &num3);
	printf("Forneça o quarto número: ");
	scanf("%d", &num4);

	soma = num1 + num2+ num3+ num4;

	printf("Soma de %d + %d + %d + %d = %d\n", num1, num2, num3, num4, soma);
	return 0;
}
