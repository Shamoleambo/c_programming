#include <stdio.h>

int main () {
	float n1, n2, n3, media;
	int p1, p2, p3;
	
	printf("Forneça a primeira nota: ");
	scanf("%f", &n1);
	printf("Forneça o peso da primeira nota: ");
	scanf("%d", &p1);
	printf("Forneça a segunda nota: ");
	scanf("%f", &n2);
	printf("Forneça o peso da segunda nota: ");
	scanf("%d", &p2);
	printf("Forneça a terceira nota: ");
	scanf("%f", &n3);
	printf("Forneça o peso da terceira nota: ");
	scanf("%d", &p3);

	media = (p1*n1 + p2*n2 + p3*n3)/(p1 + p2 + p3);

	printf("A média das notas %.2f, %.2f, %.2f pelos pesos %d, %d, %d é: %.2f\n", n1, n2, n3, p1, p2, p3, media);

	return 0;
}
