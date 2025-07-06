#include <stdio.h>

int main () {
	float n1, n2, n3, media;

	printf("Forneça a primeira nota: ");
	scanf("%f", &n1);
	printf("Forneça a segunda nota: ");
	scanf("%f", &n2);
	printf("Forneça a terceira nota: ");
	scanf("%f", &n3);

	media = (n1 + n2 + n3) / 3;

	printf("A média das notas %.2f, %.2f e %.2f é: %.2f\n", n1, n2, n3, media);
	return 0;
}
